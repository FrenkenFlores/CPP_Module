#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

bool fileExists(std::string fileName)
{
	std::ifstream infile(fileName);
	return infile.good();
}

void checkArguments(std::string fileName, std::string searchString, std::string replaceString)
{
	if (fileName.length() == 0)
	{
		std::cout << "Empty file" << std::endl;
		exit(1);
	}
	else if (searchString.length() == 0)
	{
		std::cout << "Empty search string" << std::endl;
		exit(2);
	}
	else if (replaceString.length() == 0)
	{
		std::cout << "Empty replace string" << std::endl;
		exit(3);
	}
	return;
}

void createNewFile(std::string fileName, std::ifstream &inputFile, std::ofstream &outputFile)
{
	std::string newFileName;

	newFileName = fileName + std::string(".replace");
	inputFile.open(fileName, std::ios_base::in);
	if (!inputFile.is_open())
	{
		std:: cout << "File does not exist" << std::endl;
		exit(4);
	}
	outputFile.open(newFileName, std::ios_base::out);
	if (!fileExists(newFileName))
	{
		std::cout << "Can't create new file" << std::endl;
		exit(5);
	}
	return;
}

void searchAndReplace(std::ifstream &inputFile, std::ofstream &outputFile, std::string strSearch, std::string strReplace)
{
	std::string::size_type index;
	std::string str;

	while (!inputFile.eof())
	{
		std::getline(inputFile, str);
		while ((index = str.find(strSearch)) != std::string::npos)
			str.replace(index, strSearch.length(), strReplace);
		outputFile << str << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::ifstream inputFile;
	std::ofstream outputFile;
	if (argc != 4)
		std::cout << "Invalid arguments" << std::endl;
	else
	{
		checkArguments(argv[1], argv[2], argv[3]);
		createNewFile(argv[1], inputFile, outputFile);
		searchAndReplace(inputFile, outputFile, argv[2], argv[3]);
		inputFile.close();
		outputFile.close();
	}
	return (0);
}
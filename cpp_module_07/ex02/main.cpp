#include "Array.hpp"
#define PRINT(str) std::cout << "\033[1;32m" << str << "\033[0m" << std::endl

int 	main()
{
	PRINT("Test with int array");
	try {
		Array<int> iArr(5);
		Array<int> iTmp;
		for (int i = 0; i < 5; ++i)
			iArr[i] = i + 3;
		iTmp = iArr;
		for (int i = 0; i < 5; ++i)
			std::cout << iTmp[i] << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	PRINT("Test with float array");
	try {
		Array<float> fArr(5);
		Array<float> fTmp;
		for (int i = 0; i < 5; ++i)
			fArr[i] = i + 0.25;
		fTmp = fArr;
		for (int i = 0; i < 5; ++i)
			std::cout << fTmp[i] << std::endl;

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	PRINT("Test with string array");
	try {
		Array<std::string> sArr(5);
		Array<std::string> sTmp;
		sArr[0] = "abc";
		sArr[1] = "def";
		sArr[2] = "ghk";
		sArr[3] = "lmn";
		sArr[4] = "opq";
		sTmp = sArr;
		for (int i = 0; i < 5; ++i)
			std::cout << sTmp[i] << " ";
		std::cout << std::endl;
		std::cout << "len of array = " << sTmp.size() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	PRINT("Test with out of reach index");
	try {
		Array<std::string> sArr(5);
		sArr[6] = "Day";
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
#include "header.hpp"

int		main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	void *serial;
	Data *data;

	std::cout << "Serialize data info:" << std::endl;
	serial = serialize();

	std::cout << "Deserialize data info:" << std::endl;
	data = deserialize(serial);
	std::cout << data->str1 << " | " << data->randNumber << " | " << data->str2 << std::endl;
	delete data;
	delete (static_cast<Data *>(serial));
	return 0;
}
#include "class.hpp"

int main()
{
	Vector vector((std::string)"3.1415");

	std::cout << vector.at(0);

	std::cout << vector.max();

	return 0;
}
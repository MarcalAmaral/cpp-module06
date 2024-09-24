#include "ScalarConverter/ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: invalid num arguments" << std::endl;
		return (1);
	}
	try {

		ScalarConverter::convert(av[1]);
	} catch (const ::)
}
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define DEFAULT "\033[0m"

class ScalarConverter
{
	public:
		ScalarConverter(const ScalarConverter &scalarconverter);
		ScalarConverter &operator=(const ScalarConverter &scalarconverter);
		static void	convert(const char *value);
	private:
		ScalarConverter();
		~ScalarConverter();

};
#endif
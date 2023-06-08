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
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &scalarconverter);
		ScalarConverter &operator=(const ScalarConverter &scalarconverter);
		// ScalarConverter(const char *value);
		static void	convert(const char *value);
		// void	printScalar(const ScalarConverter &scalarconverter);
		// std::string getValue(void) const;
		// char getChar(void) const;
		// int	getInt(void) const;
		// float getFloat(void) const;
		// double	getDouble(void) const;
	private:
		// std::string _value;
		// char _char;
		// int	_int;
		// float _float;
		// double _double;

};
#endif
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarconverter)
{
    (void)scalarconverter;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarconverter)
{
    (void)scalarconverter;
    return (*this);
}

void	printScalar(std::string &_value, double _double, float _float, int _int, char _char)
{
    std::cout << "char: ";
    if (_value == "+inf" || _value == "-inf" || _value == "inf"
        || _value == "nan" || _value == "nanf")
        std::cout << "impossible" << std::endl;
    else if (!(32 <= _double && _double <= 126))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "\'" << _char << "\'" << std::endl;

    std::cout << "int: ";
    if (_value == "+inf" || _value == "-inf" || _value == "inf"
        || _value == "nan" || _value == "nanf")
        std::cout << "impossible" << std::endl;
    else
        std::cout << _int << std::endl;
    std::cout << "float: " << _float;
    if (_float - static_cast<int>(_float) == 0
        && _int < 1000000)
        std::cout << ".0";
    std::cout << "f" << std::endl;

    std::cout << "double: " << _double;
    if (_double - static_cast<int>(_double) == 0
        && _int < 1000000)
        std::cout << ".0";
    std::cout << std::endl;
}

void ScalarConverter::convert(const char *value)
{
    std::string _value = "";
    double _double = 0;
    float _float = 0;
    int _int = 0;
    char _char = 0;
    try
    {
        _value = std::string(value);
        if (_value == "-0")
            _value = "0";
        _double = std::stod(_value);
        _float = std::stof(_value);
        if (_value != "+inf" && _value != "-inf" &&
            _value != "inf" && _value != "nan" && _value != "nanf")
            _int = static_cast<int>(_double);
        if (_value != "+inf" && _value != "-inf" &&
            _value != "inf" && _value != "nan" && _value != "nanf" && (32 <= _double && _double <= 126))
            _char = static_cast<char>(_double);
        printScalar(_value, _double, _float, _int, _char);
    }
    catch (const std::exception &e)
    {
        _char = *value;
        _int = *value;
        _float = *value;
        _double = *value;
        printScalar(_value, _double, _float, _int, _char);
    }
}

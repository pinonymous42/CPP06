#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter():_value(""), _char(0), _int(0), _float(0), _double(0)
// {

// }

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarconverter)
{
    (void)scalarconverter;
    // this->_value = scalarconverter.getValue();
    // this->_char = scalarconverter.getChar();
    // this->_int = scalarconverter.getInt();
    // this->_float = scalarconverter.getFloat();
    // this->_double = scalarconverter.getDouble();
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &scalarconverter)
{
    (void)scalarconverter;
    // if (this != &scalarconverter)
    // {
    //     this->_value = scalarconverter.getValue();
    //     this->_char = scalarconverter.getChar();
    //     this->_int = scalarconverter.getInt();
    //     this->_float = scalarconverter.getFloat();
    //     this->_double = scalarconverter.getDouble();
    // }
    // return (*this);
    return (*this);
}

// ScalarConverter::ScalarConverter(const char *value)
// {
//     convert(value);
// }

// void	printScalar(std::string &_value, double _double, float _float, int _int, char _char)
// {
//     std::cout << "char: ";
//     std::string tmp_value = scalarconverter.getValue();
//     double tmp_double = scalarconverter.getDouble();
//     if (tmp_value == "+inf" || tmp_value == "-inf" || tmp_value == "inf"
//         || tmp_value == "nan" || tmp_value == "nanf")
//         std::cout << "impossible" << std::endl;
//     else if (!(32 <= tmp_double && tmp_double <= 126))
//         std::cout << "Non displayable" << std::endl;
//     else
//         std::cout << "\'" << scalarconverter.getChar() << "\'" << std::endl;

//     std::cout << "int: ";
//     if (tmp_value == "+inf" || tmp_value == "-inf" || tmp_value == "inf"
//         || tmp_value == "nan" || tmp_value == "nanf")
//         std::cout << "impossible" << std::endl;
//     else
//         std::cout << scalarconverter.getInt() << std::endl;
//     std::cout << "float: " << scalarconverter.getFloat();
//     if (scalarconverter.getFloat() - static_cast<int>(scalarconverter.getFloat()) == 0
//         && scalarconverter.getInt() < 1000000)
//         std::cout << ".0";
//     std::cout << "f" << std::endl;

//     std::cout << "double: " << scalarconverter.getDouble();
//     if (scalarconverter.getDouble() - static_cast<int>(scalarconverter.getDouble()) == 0
//         && scalarconverter.getInt() < 1000000)
//         std::cout << ".0";
//     std::cout << std::endl;
// }

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

// void ScalarConverter::convert(const char *value)
// {
//     try
//     {
//         this->_value = std::string(value);
//         if (this->_value == "-0")
//             this->_value = "0";
//         this->_double = std::stod(this->_value);
//         this-?_float = std::stof(this->_value);
//         if (this->_value != "+inf" && this->_value != "-inf" &&
//             this->_value != "inf" && this->_value != "nan" && this->_value != "nanf")
//             this->_int = static_cast<int>(this->_double);
//         if (this->_value != "+inf" && this->_value != "-inf" &&
//             this->_value != "inf" && this->_value != "nan" && this->_value != "nanf" && (32 <= this->_double && this->_double <= 126))
//             this->_char = static_cast<char>(this->_double);
//         printScalar(*this);
//     }
//     catch (const std::exception &e)
//     {
//         this->_char = *value;
//         this->_int = *value;
//         this-?_float = *value;
//         this->_double = *value;
//         printScalar(*this);
//     }
// }

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

// std::string ScalarConverter::getValue(void) const
// {
//     return (this->_value);
// }

// char ScalarConverter::getChar(void) const
// {
//     return (this->_char);
// }

// int ScalarConverter::getInt(void) const
// {
//     return (this->_int);
// }

// float ScalarConverter::getFloat(void) const
// {
//     return (this->_float);
// }

// double ScalarConverter::getDouble(void) const
// {
//     return (this->_double);
// }
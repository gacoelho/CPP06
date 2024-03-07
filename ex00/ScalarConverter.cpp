#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter & other) 
{ 
    (void)other; 
    return *this; 
}

void ScalarConverter::convert(const std::string& str)
{
    std::string specialType[6] = {
        "-inff", "+inff", "nanf",
        "-inf", "+inf", "nan"
    };

    std::string c = "";
    int i = 0;
    float f = 0;
    double d = 0;

    if (str.size() ==1  && isprint(str[0]) && !std::isdigit(str[0]))
    {
        c = str[0];
        std::cout << "char: " << c << std::endl;
        std::cout << "int: " << static_cast<int>(c[0]) <<  std::endl;
        std::cout << "float: " << static_cast<float>(c[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c[0]) << ".0" << std::endl;
        return;
    }
    else
    {
        i = std::atoi(str.c_str());
        if(str[str.length() - 1] == 'f')
        {
            f = std::atof(str.c_str());
            d = static_cast<double>(f);
        }
        else
        {
            d = std::atof(str.c_str());
            f = static_cast<float>(d);
        }
        for (int j = 0; j < 6; ++j)
        {
            if(str == specialType[i])
            {
                c = "Imposible";
                break;
            }
        }
        if(c == "" && std::isprint(i))
        {
            c ="'";
            c += static_cast<char>(i);
            c += "'";
        }
        else if(c == "")
            c = "Non displayable";

        std::cout << "char: " << c << std::endl;
        if (c == "Imposible")
            std::cout << "int: Imposible" << std::endl;
        else
            std::cout << "int: " << i << std::endl;
        if (c == "Imposible" && f == 0)
        {
            std::cout << "float: Imposible" << std::endl;
            std::cout << "double: Imposible" << std::endl;
        }
        else
        {
            if (c != "Imposible" && f - static_cast<int>(f) == 0)
            {
                std::cout << "float: " << f <<".0f" << std::endl;
                std::cout << "double: " << d << ".0" << std::endl;
            }
            else
            {
                std::cout << "float: " << f << "f" << std::endl;
                std::cout << "double: " << d <<  std::endl;
            }
        }
    }
}
#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>
# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter & copy);
        ScalarConverter& operator=(const ScalarConverter & copy);
    public:
        ~ScalarConverter();
        static void convert(const std::string & str);
};
#endif
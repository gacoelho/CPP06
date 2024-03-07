#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>
# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>

class Scalar
{
    private:
        Scalar();
        Scalar(const Scalar & copy);
        Scalar& operator=(const Scalar & copy);
    public:
        ~Scalar();
        static void convert(const std::string & str);
};
#endif
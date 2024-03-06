#ifndef SCALAR_HPP
# define SCALAR_HPP
# include <string>
#include <type_traits>
#include <iostream>
#include <math.h>

class Scalar
{
    private:
        Scalar();
        Scalar(const Scalar & copy);
        Scalar & operator=(const Scalar & copy);
    public:
        ~Scalar();
        template <typename s>
        static s convert(const std::string &);
};
#endif
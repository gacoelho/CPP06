#include "Scalar.hpp"


template char Scalar::convert(const std::string &);
template int Scalar::convert(const std::string &);
template float Scalar::convert(const std::string &);
template double Scalar::convert(const std::string &);
Scalar::Scalar(){}

Scalar::Scalar(const Scalar & copy)
{
    *this = copy;
}

Scalar & Scalar::operator=(const Scalar & copy)
{
    (void)copy;
    return *this;
}

Scalar::~Scalar(){}

template<typename s>s Scalar::convert(const std::string &str)
{
    s result;

    if(std::is_same <s, char>::value)
    {
        try {result =std::stoi(str);}
        catch(const std::exception& e) {eturn(-1);}
        return (result);
    }

    if(std::is_same <s, int>::value)
    {
        try {result =std::stoi(str);}
        catch(const std::exception& e) {eturn(-1);}
        return (result);
    }

    if(std::is_same <s, float>::value)
    {
        float r;
        try {r =std::stof(str);}
        catch(const std::exception& e) {eturn(-1);}
        return (r);
    }

    if(std::is_same <s, double>::value)
    {
        double r;
        try {r =std::stod(str);}
        catch(const std::exception& e) {eturn(-1);}
        return (r);
    }
    result = -1;
    return result;
}
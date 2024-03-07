#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>
# include <stdint.h>

class Serializer
{
    private:
        std::string _member;
    public:
        Serializer(void);
        Serializer(const Serializer & copy);
        ~Serializer(void);
        Serializer &operator=(const Serializer & copy);
};

uintptr_t serializer(Serializer* ptr);
Serializer* deserializer(uintptr_t raw);
#endif
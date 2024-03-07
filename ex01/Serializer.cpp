#include "Serializer.hpp"

Serializer::Serializer(void) : _member("bob") {}

Serializer::Serializer(const Serializer & copy)
{
    this->_member = copy._member;
}

Serializer::~Serializer(void) {}

Serializer &Serializer::operator=(const Serializer & copy)
{
    this->_member = copy._member;
    return *this;
}

uintptr_t serializer(Serializer* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Serializer* deserializer(uintptr_t raw)
{
    return reinterpret_cast<Serializer *>(raw);
}
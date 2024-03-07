#include "Serializer.hpp"

int main()
{
    Serializer *data = new Serializer();

    std::cout << data << std::endl;
    uintptr_t ptr = serializer(data);;
    Serializer* dataptr = deserializer(ptr);
    std::cout << dataptr << std::endl;
    delete data;
}
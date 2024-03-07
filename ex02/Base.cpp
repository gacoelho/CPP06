#include "Base.hpp"

Base::~Base() {}

int seed = 0;

Base *generate(void)
{
    srand(time(0) + seed);
        seed++;
    int i = rand() % 3;
    if (i == 0)
        return (new A);
    else if(i == 1)
        return (new B);
    return (new C); 
}

void identify(Base *p)
{
    if (dynamic_cast <A *>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast <B *>(p))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast <C *>(p))
        std::cout << "Class C" << std::endl;
    else
        std::cout << "Not any of the three classes" << std::endl;
}

void identify(Base &p)
{
    Base tmp;
    try 
    {
        tmp = dynamic_cast<A &>(p);
                (void) tmp;
        std::cout << "Class A" << std::endl;
    }
    catch(std::exception &e) {}
        try 
    {
        tmp = dynamic_cast<B &>(p);
                (void) tmp;
        std::cout << "Class B" << std::endl;
    }
    catch(std::exception &e) {}
        try 
    {
        tmp = dynamic_cast<C &>(p);
                (void) tmp;
        std::cout << "Class C" << std::endl;
    }
    catch(std::exception &e) {}

}





#include "./incl/Classes.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base * generate(void)
{
    int r = rand() % 3;
    std::cout << "Rand num: "<<r <<std::endl;

    if (r == 0)
        return (new A);
    if (r == 1)
        return (new B);
    if (r == 2)
        return (new C);
    else
    {
        std::cout << "Error creating class" <<std::endl;
        return nullptr;
    }
}

void identify_from_pointer( Base * p )
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not A,B, or C" << std::endl;
}

void identify_from_reference( Base & p )
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not A,B, or C" << std::endl;
}


int main()
{
	srand(time(0));

    Base *test;

    test = generate();
    identify_from_pointer(test);
    identify_from_reference(*test);
}
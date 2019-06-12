


#include "head.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>



Data * deserialize( void * raw )
{
    return reinterpret_cast<Data *>(raw);
}
void * serialize( void )
{
    Data *data = new Data;
    data->n = 0;

    static const char sample[] =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i=0; i<8; i++)
    {
        data->s1 += sample[rand() % 63];
        data->s2 += sample[rand() % 63];
    }
    data->n += rand() % INT_MAX;

    std::cout << "Pre  s1: " << data->s1 <<std::endl;
    std::cout << "Pre  s2: " << data->s2 <<std::endl;
    std::cout << "Pre  n:  " << data->n <<std::endl;

    return (reinterpret_cast<void *>(data));
}


int main()
{
	srand(time(0));

    void *ptr;
    Data *mydt;

    ptr = serialize();

    mydt = deserialize(ptr);

    std::cout <<std::endl;
    std::cout << "Post s1: " << mydt->s1 <<std::endl;
    std::cout << "Post s2: " << mydt->s2 <<std::endl;
    std::cout << "Post n:  " << mydt->n <<std::endl;

    
    return 1;
}
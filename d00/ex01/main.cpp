

//#include "Contact.class.hpp"
#include "Phonebook.class.hpp"


#include <iostream>
#include <string>

int main ()
{
    std::string cmd;
    PhoneBook phonebook;

    while (1){
        std::cout << "Please, enter command " << std::endl;
        std::cin >> cmd;

        std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);

        if (cmd.compare("ADD") == 0){
            std::cout << "you hit add" << std::endl;
        }
        else if (cmd.compare("EXIT") == 0){
            std::cout << "you hit EXIT" << std::endl;
        }
        else if (cmd.compare("SEARCH") == 0){
            std::cout << "you hit SEARCH" << std::endl;
        }
        else{
            std::cout << "input valid" << std::endl;

        }
    }


    return 0;
}
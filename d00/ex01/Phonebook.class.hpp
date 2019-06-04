

#include "Contact.class.hpp"
#include <iostream>
#include <string>

class PhoneBook {
    private:
        int numContacts;
        
        std::string truncate();

    public:
        Contact listContact[8];

        PhoneBook();

        void Add();
        void List();
        void ContactInfo(int index);
        bool PhoneBookFull();
        std::string truncate(std::string str);
        int GetNumContacts();
        

        //~PhoneBook();
};
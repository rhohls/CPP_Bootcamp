

#include "Contact.class.hpp"

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

        ~PhoneBook();
};
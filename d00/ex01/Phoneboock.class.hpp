

#include "Contact.class.hpp"

int add(Contact contact){
    cout << "set first name"
    cin >> contact
}

Contact list_contact[8];


class Contact {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwearColour;
        std::string darkestSecret;

        Contact();

        ~Contact();
}
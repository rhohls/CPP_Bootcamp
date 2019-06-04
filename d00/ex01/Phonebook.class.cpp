


#include "PhoneBook.class.hpp"


PhoneBook::PhoneBook() {
    numContacts = 0;
}

PhoneBook::Add() {
    Contact contact = listContact[numContacts];
    
    std::cout << "Enter your first name" << std::endl;
    std::cin >> contact.firstName;
    std::cout << "Enter your last name" << std::endl;
    std::cin >> contact.lastName;
    std::cout << "Enter your nickname" << std::endl;
    std::cin >> contact.nickName;
    std::cout << "Enter your login" << std::endl;
    std::cin >> contact.login;
    std::cout << "Enter your postal adress" << std::endl;
    std::cin >> contact.postalAdress;
    std::cout << "Enter your email adress" << std::endl;
    std::cin >> contact.emailAdress;
    std::cout << "Enter your phone number" << std::endl;
    std::cin >> contact.phoneNumber;
    std::cout << "Enter your birthday date" << std::endl;
    std::cin >> contact.birthdayDate;
    std::cout << "Enter your favorite meal" << std::endl;
    std::cin >> contact.favoriteMeal;
    std::cout << "Enter your underwear color" << std::endl;
    std::cin >> contact.underwearColour;
    std::cout << "Enter your darkest secret" << std::endl;
    std::cin >> contact.darkestSecret;

    numContacts++;
}


PhoneBook::List() {
    Contact contact;

    std::cout << std::setw(11);
    std::cout << "index|";
    std::cout << "first name|";
    std::cout << "last name|";
    std::cout << "nickname|" << std::endl;

    for(int i=0; i < numContacts; i++){
        contact = listContact[i];

        std::cout << i << "|";
        std::cout << truncate(contact.firstName) << "|";
        std::cout << truncate(contact.lastName) << "|";
        std::cout << truncate(contact.nickName) << "|";
        std::cout << std::endl;
    }
    std::cout << std::setw(0);
}

PhoneBook::List(int index) {
    Contact contact = listContact[index];

    std::cout << std::setw(11);

}

PhoneBook::PhoneBookFull() {
    if (numContacts >=7){
        return true;
    }
    else{
        return false;
    }
}

PhoneBook::truncate(std::string str) {
    if (str.length() > 10){
        return (str.substr(0, 9) + ".");
    }
    else
        return str;
}
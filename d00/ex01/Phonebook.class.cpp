


#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() {
    numContacts = 0;
}

void PhoneBook::Add() {
    Contact new_contact;
    
    std::cout << "Enter your first name" << std::endl;
    std::getline(std::cin, new_contact.firstName);
    std::cout << "Enter your last name" << std::endl;
    std::getline(std::cin, new_contact.lastName);
    std::cout << "Enter your nickname" << std::endl;
    std::getline(std::cin, new_contact.nickName);
    std::cout << "Enter your login" << std::endl;
    std::getline(std::cin, new_contact.login);
    std::cout << "Enter your postal adress" << std::endl;
    std::getline(std::cin, new_contact.postalAddress);
    std::cout << "Enter your email adress" << std::endl;
    std::getline(std::cin, new_contact.emailAddress);
    std::cout << "Enter your phone number" << std::endl;
    std::getline(std::cin, new_contact.phoneNumber);
    std::cout << "Enter your birthday date" << std::endl;
    std::getline(std::cin, new_contact.birthdayDate);
    std::cout << "Enter your favorite meal" << std::endl;
    std::getline(std::cin, new_contact.favoriteMeal);
    std::cout << "Enter your underwear color" << std::endl;
    std::getline(std::cin, new_contact.underwearColour);
    std::cout << "Enter your darkest secret" << std::endl;
    std::getline(std::cin, new_contact.darkestSecret);

    listContact[numContacts] = new_contact;
    numContacts++;
}


void PhoneBook::List() {
    Contact contact;

    std::cout << std::setw(11) << "index|";
    std::cout << std::setw(11) << "first name|";
    std::cout << std::setw(11) << "last name|";
    std::cout << std::setw(11) << "nickname|" << std::endl;

    for(int i=0; i < numContacts; i++){
        contact = listContact[i];

        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << truncate(contact.firstName) << "|";
        std::cout << std::setw(10) << truncate(contact.lastName) << "|";
        std::cout << std::setw(10) << truncate(contact.nickName) << "|";
        std::cout << std::endl;
    }
}

bool PhoneBook::PhoneBookFull() {
    if (numContacts >=8){
        return true;
    }
    else{
        return false;
    }
}

std::string PhoneBook::truncate(std::string str) {
    if (str.length() > 10){
        return (str.substr(0, 9) + ".");
    }
    else
        return str;
}

void PhoneBook::ContactInfo(int index){
    Contact selected;

    index--;
    if (index < 0 || index > GetNumContacts()){
        std::cout << "Invalid selction" <<std::endl;
        return; 
    }
    selected = listContact[index];
    std::cout << std::setw(18) << std::left << "first name: " << selected.firstName << std::endl;
    std::cout << std::setw(18) << std::left << "last name: " << selected.lastName << std::endl;
    std::cout << std::setw(18) << std::left << "nickname: " << selected.nickName << std::endl;
    std::cout << std::setw(18) << std::left << "login: " << selected.login << std::endl;
    std::cout << std::setw(18) << std::left << "postal adress: " << selected.postalAddress << std::endl;
    std::cout << std::setw(18) << std::left << "email adress: " << selected.emailAddress << std::endl;
    std::cout << std::setw(18) << std::left << "phone number: " << selected.phoneNumber << std::endl;
    std::cout << std::setw(18) << std::left << "birthday date: " << selected.birthdayDate << std::endl;
    std::cout << std::setw(18) << std::left << "favorite meal: " << selected.favoriteMeal << std::endl;
    std::cout << std::setw(18) << std::left << "underwear color: " << selected.underwearColour << std::endl;
    std::cout << std::setw(18) << std::left << "darkest secret: " << selected.darkestSecret << std::endl;
}

int PhoneBook::GetNumContacts(){
    return numContacts;
}
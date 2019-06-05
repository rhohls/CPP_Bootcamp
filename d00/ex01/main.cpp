/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:37:02 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 07:39:23 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
    std::string cmd;
    std::string input;
    int i;
    PhoneBook phonebook;

    while (1){
        std::cout << "Please, enter command (Add, Search, Exit):" << std::endl;
        std::getline(std::cin, cmd);

        std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);

        if (cmd.compare("ADD") == 0){
            if (!phonebook.PhoneBookFull())
                phonebook.Add();
            else
                std::cout << "The phonebook is full!" << std::endl;
        }
        else if (cmd.compare("EXIT") == 0){
            break;
        }
        else if (cmd.compare("SEARCH") == 0){
            phonebook.List();
            std::cout << "Please, enter number: ";
            std::getline(std::cin, input);
            phonebook.ContactInfo(std::atoi(input.c_str()));
        }
        else{
            std::cout << "Input invalid" << std::endl;
        }
    }


    return 0;
}
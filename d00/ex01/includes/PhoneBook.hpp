/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:37:32 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 10:52:42 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:17:41 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 14:29:53 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";

    std::string *ptr = &str;
    std::string &ref = str;


    std::cout << "String: " << str <<std::endl;
    std::cout << "Pointer: " << *ptr <<std::endl;
    std::cout << "Refrence: " << ref <<std::endl;
    return 0;
}
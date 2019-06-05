/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:32:25 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 10:14:48 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "<" + name + " (" + type + ")> is dead :)" << std::endl; 
}

void Zombie::announce(){
    std::cout << "<" + name + " (" + type + ")> GGrrrhbbrhh" << std::endl; 
}
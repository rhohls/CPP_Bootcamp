/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09/12/29 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 09/12/29 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	m_name = name;
}

void HumanB::attack(){
	std::cout << m_name + " attacks with " + m_weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &input_weapon){
	m_weapon = &input_weapon;
}

HumanB::~HumanB() {}


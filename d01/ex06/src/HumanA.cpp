/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09/12/29 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 09/12/29 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &input_weapon)
	:m_weapon(input_weapon)	
{
	m_name = name;
}

void HumanA::attack(){
	std::cout << m_name + " attacks with " + m_weapon.getType() << std::endl;
}

HumanA::~HumanA() {}


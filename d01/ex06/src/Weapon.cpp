/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08/50/46 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 08/50/46 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	m_type = type;
}

Weapon::~Weapon() {}


std::string Weapon::getType() const{
	return m_type;
}
void Weapon::setType(std::string new_type){
	m_type = new_type;

}
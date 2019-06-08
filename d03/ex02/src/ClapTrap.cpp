/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07/20/30 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/07 07/20/30 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

ClapTrap::ClapTrap()
{
	HP = 100;
	maxHP = 100;
	EP = 100;
	maxEP = 100;
	meleeDMG = 30;
	rangeDMG = 20;
	DMGReduction = 5;

	m_name = "";
	m_lvl = 1;
	std::cout << "defualt C|_4P-TP <" + m_name + "> created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	HP = 100;
	maxHP = 100;
	EP = 100;
	maxEP = 100;
	meleeDMG = 30;
	rangeDMG = 20;
	DMGReduction = 5;

	m_name = name;
	m_lvl = 1;
	std::cout << "C|_4P-TP <" + m_name + "> created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
 }

ClapTrap::~ClapTrap() {
	std::cout << "C|_4P-TP <" + m_name + "> destroyed " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "C|_4P-TP <" + m_name + "> attacks " + target + " at range, causing " << rangeDMG << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "C|_4P-TP <" + m_name + "> melee attacks " + target + ", causing " << meleeDMG << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= DMGReduction)
	{
		std::cout << "C|_4P-TP <" + m_name + "> took no damage" << std::endl;
	}
	else
	{
		amount -= DMGReduction;
		if (HP >= amount)
			HP -= amount;
		else
			HP = 0;
		std::cout << "C|_4P-TP <" + m_name + "> took " << amount << " points of damage, and is now at "
			<< HP << " hit points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0 || HP == maxHP)
	{
		std::cout << "C|_4P-TP <" + m_name + "> repaired no hit points" << std::endl;
	}
	else
	{
		HP += amount;
		if (HP > maxHP)
		{
			HP = maxHP;
			std::cout << "C|_4P-TP <" + m_name + "> repaired " << amount << " hit points, and is now at max hit points" << std::endl;
		}
		else
		{
			std::cout << "C|_4P-TP <" + m_name + "> repaired " << amount << " hit points, and is now at " << HP <<" hit points" << std::endl;
		}
	}
}

std::string ClapTrap::getName()
{
	return m_name;
}

void ClapTrap::setName(std::string new_name)
{
	m_name = new_name;
}

int ClapTrap::getLevel()
{
	return m_lvl;
}

void ClapTrap::setLevel(int new_lvl)
{
	m_lvl = new_lvl;
}

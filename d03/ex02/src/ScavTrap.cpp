/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07/20/30 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/07 07/20/30 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

const std::string ScavTrap::challenges[] = {"Poor", "MASSIVE", "Confusing", "Dance off", "dishwashing", "Cook-off"};

ScavTrap::ScavTrap()
{
	HP = 60;
	maxHP = 60;
	EP = 120;
	maxEP = 120;
	meleeDMG = 60;
	rangeDMG = 5;
	DMGReduction = 0;

	m_name = "scav";
	m_lvl = 1;
	std::cout << "defualt $C4V-TP <" + m_name + "> generated" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	HP = 60;
	maxHP = 60;
	EP = 120;
	maxEP = 120;
	meleeDMG = 60;
	rangeDMG = 5;
	DMGReduction = 0;

	m_name = name;
	m_lvl = 1;
	std::cout << "$C4V-TP <" + m_name + "> generated" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "$C4V-TP <" + m_name + "> obliterated" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "$C4V-TP <" + m_name + "> does a range attacks " + target + " causing " << rangeDMG << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "$C4V-TP <" + m_name + "> attacks " + target + ", from melee range causing " << meleeDMG << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount <= DMGReduction)
	{
		std::cout << "$C4V-TP <" + m_name + "> took 0 damage" << std::endl;
	}
	else
	{
		amount -= DMGReduction;
		if (HP >= amount)
			HP -= amount;
		else
			HP = 0;
		std::cout << "$C4V-TP <" + m_name + "> took " << amount << " points of damage, and is now at "
			<< HP << " hit points :O" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount == 0 || HP == maxHP)
	{
		std::cout << "$C4V-TP <" + m_name + "> regenerated no hit points" << std::endl;
	}
	else
	{
		HP += amount;
		if (HP > maxHP)
		{
			HP = maxHP;
			std::cout << "$C4V-TP <" + m_name + "> regenerated " << amount << " hit points, and is now at max hit points" << std::endl;
		}
		else
		{
			std::cout << "$C4V-TP <" + m_name + "> regenerated " << amount << " hit points, and is now at " << HP <<" hit points" << std::endl;
		}
	}
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int rand_num;
    int num_attacks = 6;
    
	rand_num = rand() % num_attacks;

	std::cout << "$C4V-TP <" + m_name + "> intiated a \"" + challenges[rand_num] << " challenge\" against "
			 + target + ", WHAT NOW?!" << std::endl;
}


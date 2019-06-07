/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07/20/30 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/07 07/20/30 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

// std::pair<int, std::string> bob[] = {{3, "magic"}};
const std::string FragTrap::attack_type[] = {"Magical", "Ether", "Obscene", "Indescribable", "Poor", "Fish slap"};
const int		  FragTrap::attack_damage[] = {20, 		10, 		63, 		45, 			1,		3};

FragTrap::FragTrap(std::string name)
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
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap() {}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" + m_name + "> attacks " + target + " at range, causing " << rangeDMG << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" + m_name + "> melee attacks " + target + ", causing " << meleeDMG << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount <= DMGReduction)
	{
		std::cout << "FR4G-TP <" + m_name + "> took no damage" << std::endl;
	}
	else
	{
		amount -= DMGReduction;
		if (HP >= amount)
			HP -= amount;
		else
			HP = 0;
		std::cout << "FR4G-TP <" + m_name + "> took " << amount << " points of damage, and is now at "
			<< HP << " hit points" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount == 0 || HP == maxHP)
	{
		std::cout << "FR4G-TP <" + m_name + "> repaired no hit points" << std::endl;
	}
	else
	{
		HP += amount;
		if (HP > maxHP)
		{
			HP = maxHP;
			std::cout << "FR4G-TP <" + m_name + "> repaired " << amount << " hit points, and is now at max hit points" << std::endl;
		}
		else
		{
			std::cout << "FR4G-TP <" + m_name + "> repaired " << amount << " hit points, and is now at " << HP <<" hit points" << std::endl;
		}
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand_num;
    int num_attacks = 6;
    
	rand_num = rand() % num_attacks;

	std::cout << "FR4G-TP <" + m_name + "> performed a \"" + attack_type[rand_num] << " attack\" against "
			 + target + ", causing " << attack_damage[rand_num] << " points of damage!" << std::endl;
}

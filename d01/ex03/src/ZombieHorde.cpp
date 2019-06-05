/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:02 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 14:14:27 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

#include <time.h>
#include <stdlib.h>
#include <iostream>

ZombieHorde::ZombieHorde(int amt)
{
    _horde = new Zombie*[amt];
    _hordeSize = amt;
    _type = "Horde";

    for (int i=0; i < amt; i++)
    {
        _horde[i] = randomChump();
    }
}

ZombieHorde::~ZombieHorde()
{
    for (int i=0; i < _hordeSize; i++)
    {
        delete _horde[i];
    }
    delete _horde;
    std::cout << "Horde destroyed" << std::endl; 
}

Zombie *ZombieHorde::newZombie(std::string name)
{
    Zombie *ret = new Zombie();
    ret->name = name;
    ret->type = _type;

    return (ret);
}

Zombie *ZombieHorde::randomChump()
{
    Zombie *ret;
    int rand_num;
    int num_names = 10;
    std::string names[] = {"Grace", "Bob", "Fred", "John", "Andrew", "Wesely", "Olivia", "Isabella", "George", "Lily"};

    rand_num = rand() % num_names;
    ret = newZombie(names[rand_num]);

    return (ret);
}

void ZombieHorde::announce()
{
    for (int i=0; i < _hordeSize; i++)
    {
        _horde[i]->announce();
    }  
}
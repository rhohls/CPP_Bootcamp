/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:02 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 12:56:56 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#include <time.h>
#include <stdlib.h>

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *ret = new Zombie();
    ret->name = name;
    ret->type = _type;
    
    return (ret);
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *ret;
    int rand_num;
    int num_names = 10;
    std::string names[] = {"Grace", "Bob", "Fred", "John", "Andrew", "Wesely", "Olivia", "Isabella", "George", "Lily"}; 
    
    rand_num = rand() % num_names;
    ret = newZombie(names[rand_num]);

    ret->announce();
    return (ret);
}
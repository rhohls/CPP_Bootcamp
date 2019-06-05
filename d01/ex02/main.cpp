/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:25:13 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 13:08:27 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include "./incl/Zombie.hpp"
#include "./incl/ZombieEvent.hpp"

int main()
{
    // zombie
    Zombie zom;

    zom.name = "zom";
    zom.type = "Long lasting";
    zom.announce();


    // zombie event
    ZombieEvent factory;
    Zombie *new_zom;
    srand(time(0));

    factory.setZombieType("short lived");
    new_zom = factory.randomChump();
    delete new_zom;
    new_zom = factory.randomChump();
    delete new_zom;

    return 0;
}
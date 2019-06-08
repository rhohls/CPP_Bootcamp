/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:03:39 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 09:14:29 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/FragTrap.hpp"
#include "./incl/ScavTrap.hpp"
#include <iostream>
#include <time.h>

int main()
{
    FragTrap itsatrap("Boxy");
    srand(time(0));

    itsatrap.meleeAttack("Alan");
    itsatrap.rangedAttack("Steve");

    itsatrap.takeDamage(3);
    itsatrap.takeDamage(18);

    itsatrap.beRepaired(1);
    itsatrap.beRepaired(100);

    itsatrap.vaulthunter_dot_exe("Fred");


    ScavTrap bigboy("JuiceBox");
    srand(time(0));

    bigboy.meleeAttack("Alan");
    bigboy.rangedAttack("Steve");

    bigboy.takeDamage(3);
    bigboy.takeDamage(18);

    bigboy.beRepaired(1);
    bigboy.beRepaired(100);

    bigboy.challengeNewcomer("Fred");
    
    std::cout << std::endl;
}
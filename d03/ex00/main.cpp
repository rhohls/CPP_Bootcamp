/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:03:39 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/07 13:32:27 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/FragTrap.hpp"
#include <iostream>
#include <time.h>

int main()
{
    FragTrap itsatrap("boxy");
    srand(time(0));

    itsatrap.meleeAttack("Alan");
    itsatrap.rangedAttack("Steve");

    itsatrap.takeDamage(3);
    itsatrap.takeDamage(18);

    itsatrap.beRepaired(1);
    itsatrap.beRepaired(100);

    itsatrap.vaulthunter_dot_exe("Fred");
}
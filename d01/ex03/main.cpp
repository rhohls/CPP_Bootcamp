/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:25:13 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 14:13:13 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include "./incl/Zombie.hpp"
#include "./incl/ZombieHorde.hpp"

int main()
{
    ZombieHorde *hordor;
    srand(time(0));

    hordor = new ZombieHorde(3);
    hordor->announce();
    //hordor->~ZombieHorde();
    delete hordor;
    return 0;
}
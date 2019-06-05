/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:15:59 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 09:14:45 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(int input_height)
{
    num_legs = 4;
    height = input_height;
}

void Pony::currentHeight()
{
    std::cout << "My height is " << height << std::endl;
    return;
}

Pony::~Pony()
{
    std::cout << "Bye bye pony" << std::endl;
}

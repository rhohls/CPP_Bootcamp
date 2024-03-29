/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:50:42 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/06 07:57:36 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./incl/Human.hpp"

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}
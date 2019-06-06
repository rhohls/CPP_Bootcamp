/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:45:06 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/06 07:54:32 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const{
    std::stringstream str;
    str << this;
    return (str.str());
}


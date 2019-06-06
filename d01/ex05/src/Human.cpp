/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:48:04 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/06 07:59:48 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>


Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify() const{
    return _brain.identify();
}

const Brain &Human::getBrain(){
    return (_brain);
}

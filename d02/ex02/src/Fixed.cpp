/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10/30/12 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 10/30/12 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_bitInfo = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(float input)
{
	std::cout << "Float constructor called" << std::endl;
	m_bitInfo = (int)roundf(input * (1 << m_pointVal));
}

Fixed::Fixed(int input)
{
	std::cout << "Int constructor called" << std::endl;
	m_bitInfo = input * (1 << m_pointVal);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &src)
{
	std::cout << "Assignation constructor called" << std::endl;
	if (this != &src)
	{
		this->m_bitInfo = src.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_bitInfo);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_bitInfo = raw;
	return;
}

float Fixed::toFloat(void) const
{
	return (((float)m_bitInfo) / (1 << m_pointVal)) ;
}

int Fixed::toInt(void) const{
	return (int)(m_bitInfo >> m_pointVal);
}




std::ostream &operator<<(std::ostream &os, Fixed const &src)
{
	os << src.toFloat();
	return (os);
}

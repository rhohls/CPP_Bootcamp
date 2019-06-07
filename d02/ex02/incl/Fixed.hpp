/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10/30/12 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 10/30/12 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();

	Fixed(Fixed const &src);
	Fixed(float input);
	Fixed(int input);

	~Fixed();

	Fixed &operator=(Fixed const &src);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	bool operator>(Fixed const &src) const;
	bool operator<(Fixed const &src) const;
	bool operator>=(Fixed const &src) const;
	bool operator<=(Fixed const &src) const;
	bool operator==(Fixed const &src) const;
	bool operator!=(Fixed const &src) const;
	Fixed operator+(Fixed const &src) const;
	Fixed operator-(Fixed const &src) const;
	Fixed operator*(Fixed const &src) const;
	Fixed operator/(Fixed const &src) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int m_bitInfo;
	static const int m_pointVal = 8;

protected:
};

std::ostream &operator<<(std::ostream &os, Fixed const &src);
#endif

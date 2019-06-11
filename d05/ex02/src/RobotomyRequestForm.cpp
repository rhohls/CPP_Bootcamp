/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12/44/28 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 12/44/28 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h> 

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: Form("RobotomyRequestForm", 72, 45, "Default")
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void RobotomyRequestForm::excute(Bureaucrat &signee)
{
	if (getSigned() == false)
	{
		std::cout << "This form hasn't been sign" << std::endl;
		return;
	}
	else if (signee.getGrade() > getSignRequired())
	{
		throw GradeTooLowException();
		return;
	}
	

	int rand_num = rand() % 2;
	// std::cout << rand_num;

	std::cout << "*drilling noise* ";
	if (rand_num)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized" << std::endl;

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12/44/28 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 12/44/28 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("RobotomyRequestForm", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm()
	: Form("RobotomyRequestForm", 25, 5, "default")
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: Form("RobotomyRequestForm", 25, 5, "default")
{
	*this = src;	
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	if (this != &src)
    {
	*this = src;
    }
	return (*this);
}


void PresidentialPardonForm::excute(Bureaucrat &signee)
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
	

	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
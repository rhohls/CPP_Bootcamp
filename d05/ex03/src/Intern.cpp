/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07/15/10 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/12 07/15/10 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ShrubberyCreationForm.hpp"
#include "../incl/RobotomyRequestForm.hpp"
#include "../incl/PresidentialPardonForm.hpp"
#include "../incl/Intern.hpp"
#include <string>
#include <iostream>

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	*this = src;	
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & src) {
	if (this != &src)
    {
	*this = src;
    }
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::transform(name.begin(), name.end(), name.begin(), ::tolower);
	Form * newform = nullptr;
	if (name == "robotomy request" || name == "robotomyrequest")
		newform = new RobotomyRequestForm(target);
	else if (name == "presidential pardon" || name == "presidentialpardon")
		newform = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation" || name == "shrubberycreation")
		newform = new ShrubberyCreationForm(target);
	else
	{
		throw FormNotFound();
		return(nullptr);
	}
	std::cout << "Intern creates " << name << " form" << std::endl;
	
	return (newform);
}

const char *Intern::FormNotFound::what() const throw()
{
	return "No form found";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08/01/47 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 08/01/47 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Bureaucrat.hpp"
#include "../incl/Form.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

Bureaucrat::Bureaucrat(std::string input_name, int input_grade)
	:m_name(input_name)
{
	setGrade(input_grade);
}

int Bureaucrat::getGrade() const
{
	return (m_grade);
}

const std::string Bureaucrat::getName() const
{
	return (m_name);
}

void Bureaucrat::setGrade(int new_val)
{
	if (new_val < 1)
		throw GradeTooHighException();
	else if (new_val > 150)
		throw GradeTooLowException();
	m_grade = new_val;
}


void Bureaucrat::increaseGrade()
{
	setGrade(m_grade - 1);
}
void Bureaucrat::decreaseGrade()
{
	setGrade(m_grade + 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade value too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade value too low";
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << m_name << " signs " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << m_name << " cannot sign " <<  form.getName() 
					<< " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src)
{
	os << src.getName() << ", bureaucrat grade: " << src.getGrade() ;
	return (os);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09/11/27 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 09/11/27 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Form.hpp"

Form::Form(std::string name, int signRequired, int excuteRequired, std::string target)
	: m_name(name), m_signRequired(signRequired), m_excuteRequired(excuteRequired), m_target(target)
{
	m_signed = false;
	checkGrade(m_signRequired);
	checkGrade(m_excuteRequired);
}

Form::Form()
	: m_name("Defualt"), m_signRequired(1), m_excuteRequired(1)
{
}

Form::Form(Form const &src)
	: m_name(src.m_name), m_signRequired(src.m_signRequired), m_excuteRequired(src.m_excuteRequired)
{
	*this = src;
}

Form::~Form() {}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

std::string Form::getName() const
{
	return (m_name);
}

bool Form::getSigned() const 
{
	return (m_signed);
}

std::string Form::getTarget() const
{
	return (m_target);
}

int Form::getSignRequired() const
{
	return (m_signRequired);
}

void Form::beSigned(Bureaucrat &signee)
{
	if (signee.getGrade() > m_signRequired)
		throw GradeTooLowException();
	else
		m_signed = true;
}

void Form::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}


const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade value too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade value too low";
}
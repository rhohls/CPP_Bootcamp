/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09/11/27 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 09/11/27 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};


public:
	Form(std::string name, int signRequired, int excuteRequired);

	Form(Form const &src);
	~Form();
	Form &operator=(Form const &src);

	std::string getName() const;
	bool getSigned() const;
	int getSignRequired() const;
	int getExcuteRequired() const;

	void beSigned(Bureaucrat &signee);
private:
	Form();
	const std::string m_name;
	bool m_signed;
	const int m_signRequired;
	const int m_excuteRequired;

protected:
	void checkGrade(int grade);
};

std::ostream &operator<<(std::ostream &os, Form const &src);

#endif

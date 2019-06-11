/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12/44/28 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 12/44/28 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: Form("ShrubberyCreationForm", 145, 137, "Default")
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void ShrubberyCreationForm::excute(Bureaucrat &signee)
{

	const std::string tree = " \n \
                                                         . \n \
                                              .         ;   \n \
                 .              .              ;%     ;;    \n \
                   ,           ,                :;%  %;    \n \
                    :         ;                   :;%;'     .,    \n \
           ,.        %;     %;            ;        %;'    ,; \n \
             ;       ;%;  %%;        ,     %;    ;%;    ,%' \n \
              %;       %;%;      ,  ;       %;  ;%;   ,%;'  \n \
               ;%;      %;        ;%;        % ;%;  ,%;' \n \
                `%;.     ;%;     %;'         `;%%;.%;' \n \
                 `:;%.    ;%%. %@;        %; ;@%;%' \n \
                    `:%;.  :;bd%;          %;@%;' \n \
                      `@%:.  :;%.         ;@@%;'    \n \
                        `@%.  `;@%.      ;@@%;          \n \
                          `@%%. `@%%    ;@@%;         \n \
                            ;@%. :@%%  %@@%;        \n \
                              %@bd%%%bd%%:;      \n \
                                #@%%%%%:;; \n \
                                %@@%%%::; \n \
                                %@@@%(o);  . '          \n \
                                %@@@o%;:(.,'          \n \
                            `.. %@@@o%::;          \n \
                               `)@@@o%::;          \n \
                                %@@(o)::;         \n \
                               .%@@@@%::;          \n \
                               ;%@@@@%::;.           \n \
                              ;%@@@@%%:;;;.  \n \
                          ...;%@@@@@%%:;;;;,..    \n \
							 ";
							 
	if (getSigned() == false)
		std::cout << "This form hasn't been sign" << std::endl;
	else
	{
		if (signee.getGrade() > getSignRequired())
			throw GradeTooLowException();
		else
		{
			std::ofstream myfile;
			myfile.open(getTarget() + "_shrubbery");
			myfile << tree;
			myfile.close();
		}
	}
}

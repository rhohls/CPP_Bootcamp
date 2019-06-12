/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:10:14 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/12 07:45:33 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Bureaucrat.hpp"
#include "./incl/Form.hpp"
#include "./incl/ShrubberyCreationForm.hpp"
#include "./incl/RobotomyRequestForm.hpp"
#include "./incl/PresidentialPardonForm.hpp"
#include "./incl/Intern.hpp"
#include <iostream>
#include <stdlib.h> 
#include <time.h>

int main()
{
    Intern someRandomIntern;
    Form* rrf;

    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }

    try
    {
        rrf = someRandomIntern.makeForm("Non existing", "Bender");
        delete rrf;
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }
}
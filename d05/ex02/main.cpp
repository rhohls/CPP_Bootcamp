/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:10:14 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/11 15:22:55 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Bureaucrat.hpp"
#include "./incl/Form.hpp"
#include "./incl/ShrubberyCreationForm.hpp"
#include "./incl/RobotomyRequestForm.hpp"
#include "./incl/PresidentialPardonForm.hpp"
#include <iostream>
#include <stdlib.h> 
#include <time.h>

int main()
{
    srand (time(NULL));
    Bureaucrat steve("Alan", 1);

    //shrub
    ShrubberyCreationForm shrub("big");
    try
    {
        steve.signForm(shrub);
        shrub.excute(steve);
        std::cout << "check ouput file "<< std::endl;
        
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //robot
    RobotomyRequestForm robot("Marvin");
    try
    {
        steve.signForm(robot);
        robot.excute(steve);
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //robot
    PresidentialPardonForm fooorm("Arthur");
    try
    {
        steve.signForm(fooorm);
        fooorm.excute(steve);
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }
    std::cout << std::endl;
}
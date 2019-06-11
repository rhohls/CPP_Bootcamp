/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:10:14 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/11 08:57:48 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat *steve;
    //set too low
    try
    {
        steve = new Bureaucrat("Alan", 151);
    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //decrement
    try
    {
        steve = new Bureaucrat("Alan", 149);
        std::cout << "Info: " << *steve << std::endl;
        steve->decreaseGrade();
        std::cout << "Info: " << *steve << std::endl;
        steve->decreaseGrade();
        steve->decreaseGrade();

    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }

    delete steve;
    std::cout << std::endl;

    //incr
    try
    {
        steve = new Bureaucrat("Al", 1);
        std::cout << "Info: " << *steve << std::endl;
        steve->increaseGrade();
        std::cout << "Info: " << *steve << std::endl;
        steve->increaseGrade();
        steve->increaseGrade();

    }
    catch (std::exception & e)
    {
        std::cout << "There was an error, it was: " << e.what() << std::endl;
    }  

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:50:19 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/12 13:05:54 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>

void	charOutput(double dbl)
{
	std::cout << "char:   ";

	if (std::isnan(dbl))
		std::cout << "Impossible";
    else if (!isprint(dbl))
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(dbl);

	std::cout << std::endl;
    
}

void	intOutput(double dbl)
{
	std::cout << "int:    ";

	if (dbl > INT_MAX || dbl < INT_MIN || std::isnan(dbl))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(dbl);

	std::cout << std::endl;
}

void	floatOutput(double dbl)
{
	std::cout << "float:  ";

    if (isinf(dbl))
		std::cout << static_cast<float>(dbl)<< "f";
	else if (floor(dbl) == dbl)
		std::cout << static_cast<float>(dbl) << ".0" << "f";
	else
		std::cout << static_cast<float>(dbl) << "f";

	std::cout << std::endl;
}

void	doubleOutput(double dbl)
{
	std::cout << "double: ";

    if (!isfinite(dbl))
		std::cout << dbl;
	else if (floor(dbl) == dbl)
		std::cout << dbl << ".0";
	else
		std::cout << dbl;

	std::cout << std::endl;
}

int	 main(int argc, char **argv)
{
    std::string str = argv[1];

    if (argc <= 1)
    {
        std::cout << "please input 1 variable" <<std::endl;
        return 1;
    }

    double dbl;
    try
    {
	    dbl = std::stod(argv[1]);

        charOutput(dbl);
        intOutput(dbl);
        floatOutput(dbl);
        doubleOutput(dbl);
    }
    catch (std::invalid_argument & e)
    {
        if (str.length() > 1)
            std::cout << "please input a valid input" <<std::endl;
        else
        {
            dbl = std::stod("nan");
            std::cout << "char: " << str <<std::endl;
            intOutput(dbl);
            floatOutput(dbl);
            doubleOutput(dbl);
        }
        

        return 1;
    }
    catch (std::exception & e)
    {
        std::cout << "An error occured";
        return 1;
    }
    
	return (0);
}
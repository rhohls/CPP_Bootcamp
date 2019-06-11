/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:10:14 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/11 11:44:05 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Bureaucrat.hpp"
#include "./incl/Form.hpp"
#include <iostream>

int main()
{
    Bureaucrat steve("Alan", 50);
    Form jail("Freedom", 49, 20);

    steve.signForm(jail);

    steve.increaseGrade();
    steve.increaseGrade();

    steve.signForm(jail);
}
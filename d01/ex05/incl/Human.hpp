/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:47:35 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 14:54:15 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
private:
    /* data */
public:
    Human();

    std::string identify();
    void getBrain();

    ~Human();
};

#endif
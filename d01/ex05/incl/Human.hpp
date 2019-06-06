/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:47:35 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/06 07:56:48 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Brain.hpp"

class Human
{
private:
    Brain const _brain;
public:
    Human();

    std::string identify() const;
    const Brain &getBrain();

    ~Human();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:30:27 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/12 11:47:07 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERIALZATION_H
# define SERIALZATION_H

#include <string>

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

#endif
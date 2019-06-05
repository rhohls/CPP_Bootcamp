/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:15:24 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 09:13:14 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Pony
{
    public:
        std::string name;
        std::string colour;
        int num_legs;
        int height;

        Pony(int input_height);

        void currentHeight();

        ~Pony();
};


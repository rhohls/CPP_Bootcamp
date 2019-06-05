/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:53:32 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 09:32:23 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

    #include <string>

    class Zombie
    {
    private:

    public:
        std::string type;
        std::string name;

        Zombie();

        void announce();

        ~Zombie();
    };

#endif


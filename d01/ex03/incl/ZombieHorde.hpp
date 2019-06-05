/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:20:04 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 14:00:18 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_Horde_H
#define ZOMBIE_Horde_H

    #include <string>
    #include "Zombie.hpp"

    class ZombieHorde
    {
    private:
        std::string _type;
        int         _hordeSize;
        Zombie**    _horde;

        Zombie *newZombie(std::string name);
        Zombie *randomChump();


    public:
        ZombieHorde(int amt);

        void announce();

        ~ZombieHorde();
    };
    


#endif
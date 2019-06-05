/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:20:04 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 09:42:00 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
#define ZOMBIE_EVENT_H

    #include <string>
    #include "Zombie.hpp"

    class ZombieEvent
    {
    private:
        std::string _type;
    public:
        ZombieEvent();

        void setZombieType(std::string type);
        Zombie *newZombie(std::string name);
        Zombie *randomChump();

        ~ZombieEvent();
    };
    


#endif
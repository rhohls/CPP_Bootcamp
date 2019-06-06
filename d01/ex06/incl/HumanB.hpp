/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09/12/29 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 09/12/29 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HumanB_HPP
# define	HumanB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);

		void attack();
		void setWeapon(Weapon &input_weapon);

		~HumanB();
	private:
		std::string m_name;
		Weapon *m_weapon;
};

#endif

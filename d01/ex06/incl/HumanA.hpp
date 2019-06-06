/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09/12/29 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 09/12/29 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HumanA_HPP
# define	HumanA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &input_weapon);

		void attack();

		~HumanA();
	private:
		std::string m_name;
		Weapon &m_weapon;
};

#endif

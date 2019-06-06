/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08/50/46 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/06 08/50/46 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(std::string type);

		std::string getType() const;
		void setType(std::string new_type);

		~Weapon();

	private:
		std::string m_type;

	protected:

};

#endif

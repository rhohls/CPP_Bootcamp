/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:20:30 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 09:20:37 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FRAGTRAP_HPP
# define	FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:	
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

		~FragTrap();
		FragTrap & operator=(FragTrap const & src);
	
	private:
		static const std::string attack_type[];
		static const int attack_damage[];

	protected:

};

#endif

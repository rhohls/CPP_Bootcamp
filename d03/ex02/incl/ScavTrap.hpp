/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:20:30 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 09:22:25 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:	
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);

		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & src);
	
	private:
		static const std::string challenges[];
		

	protected:

};

#endif

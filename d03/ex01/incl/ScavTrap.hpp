/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:20:30 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 08:30:06 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

#include <string>

class ScavTrap {
	public:
		unsigned int HP;
		unsigned int maxHP;
		unsigned int EP;
		unsigned int maxEP;
		unsigned int meleeDMG;
		unsigned int rangeDMG;
		unsigned int DMGReduction; 
		
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);

		std::string getName();
		void setName(std::string new_name);
		int getLevel();
		void setLevel(int new_lvl);

		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & src);
	
	private:
		static const std::string challenges[];

		std::string m_name;
		int m_lvl;
		
		

	protected:

};

#endif

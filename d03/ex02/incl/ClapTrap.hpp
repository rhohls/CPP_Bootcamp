/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:20:30 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 08:58:56 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_HPP
# define	CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		unsigned int HP;
		unsigned int maxHP;
		unsigned int EP;
		unsigned int maxEP;
		unsigned int meleeDMG;
		unsigned int rangeDMG;
		unsigned int DMGReduction; 
		
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		void setName(std::string new_name);
		int getLevel();
		void setLevel(int new_lvl);

		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & src);
	
	private:
		
	protected:
		std::string m_name;
		int m_lvl;

};

#endif

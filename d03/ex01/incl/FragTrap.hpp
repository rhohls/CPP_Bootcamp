/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:20:30 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/08 09:20:33 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FRAGTRAP_HPP
# define	FRAGTRAP_HPP

#include <string>

class FragTrap {
	public:
		unsigned int HP;
		unsigned int maxHP;
		unsigned int EP;
		unsigned int maxEP;
		unsigned int meleeDMG;
		unsigned int rangeDMG;
		unsigned int DMGReduction; 
		
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

		std::string getName();
		void setName(std::string new_name);
		int getLevel();
		void setLevel(int new_lvl);

		~FragTrap();
		FragTrap & operator=(FragTrap const & src);
	
	private:
		static const std::string attack_type[];
		static const int attack_damage[];

		std::string m_name;
		int m_lvl;
		
		

	protected:

};

#endif

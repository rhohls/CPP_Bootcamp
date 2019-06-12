/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07/15/10 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/12 07/15/10 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		INTERN_HPP
# define	INTERN_HPP

#include "Form.hpp"

class Intern {
	public:
		class FormNotFound : public std::exception {
			const char * what () const throw ();
		};

		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & src);

		Form* makeForm(std::string formName, std::string target);

	private:

	protected:

};

#endif

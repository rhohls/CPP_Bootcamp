/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12/44/28 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 12/44/28 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm(std::string target);

		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
	
		void excute(Bureaucrat &signee);

	private:
		PresidentialPardonForm();

	protected:

};

#endif

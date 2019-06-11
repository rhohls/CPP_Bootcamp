/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08/01/47 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/11 08/01/47 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP
# define	BUREAUCRAT_HPP

#include <iostream>
#include <exception>


class Bureaucrat {
	struct GradeTooHighException : public std::exception {
		const char * what () const throw () {
			return "Grade value too high";
		}
	};
	struct GradeTooLowException : public std::exception {
		const char * what () const throw () {
			return "Grade value too low";
		}
	};
	public:
		Bureaucrat(std::string input_name, int input_grade);
		
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & src);

		int getGrade() const;
		std::string getName() const;

		void increaseGrade();
		void decreaseGrade();

	private:
		Bureaucrat();
		
		int m_grade;
		std::string m_name; 

		void setGrade(int new_val);

	protected:


};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &src);


#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12/26/10 by rhohls          #+#    #+#             */
/*   Updated: 2019/06/12 12/26/10 by rhohls         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BASE_HPP
# define	BASE_HPP

class Base {
	public:
		virtual ~Base();
	private:

	protected:

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:36:06 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 07:36:10 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
   std::string s;

   if (argc == 1)
   {
       std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   }

   for (int i=1; i < argc; i++)
   {
       s = argv[i];
       std::transform(s.begin(), s.end(), s.begin(), ::toupper);
       std::cout << s;
   }
   std::cout << "\n";
   return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:02:08 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/12 14:18:02 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T arr[], int len, void(* func)(T var))
{
    for (int i=0; i < len; i++)
    {
        func(arr[i]);
    }
}

void print(int a)
{
    std::cout << a << " ";
}

int main(void)
{
    int arr[] = {2, 3, 4, 5, 6, 7};

    iter(arr, 6, &print);
    std::cout << std::endl;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <rhohls@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:41:15 by rhohls            #+#    #+#             */
/*   Updated: 2019/06/05 09:16:14 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void ponyOnTheStack(){
    Pony stack_pony(1);

    stack_pony.currentHeight();
    return;
}

void ponyOnTheHeap(){
    Pony *heap_pony = new Pony(5);

    (*heap_pony).currentHeight();
    (*heap_pony).~Pony();
    return;
}

int main()
{

    std::cout << "Creating Stack pony" << std::endl;
    ponyOnTheStack();
    std::cout << "Creating Heap pony " << std::endl;
    ponyOnTheHeap();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:26:02 by fflores           #+#    #+#             */
/*   Updated: 2021/03/15 17:58:59 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *p2;
    p2 = new Pony("leila");
    p2->printName();
    delete p2;
}

void ponyOnTheStack(void)
{
    Pony p1("sara");
    p1.printName();
    return ;
}
int main(void)
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}
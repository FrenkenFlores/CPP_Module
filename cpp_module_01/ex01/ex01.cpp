/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:45:41 by fflores           #+#    #+#             */
/*   Updated: 2021/03/23 20:45:42 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
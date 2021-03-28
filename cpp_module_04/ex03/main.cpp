/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflores <fflores@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 21:16:26 by fflores           #+#    #+#             */
/*   Updated: 2021/03/27 21:16:26 by fflores          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#define PRINT(str) std::cout << "\033[1;35m" << str << "\033[0m" << std::endl

//int main()
//{
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	delete bob;
//	delete me;
//	delete src;
//	return 0;
//}


int main()
{
	PRINT("Optional tests");
	//Copy constructor && Assignation operator
	Character c1("Jack");
	Character c2(c1);
	Character c3("Adam");
	Character c4;
	c4 = c3;
	//Learn materia, create materia, equip, use and unequip
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	ICharacter* me = new Character("Flores");
	ICharacter* frenken = new Character("Frenken");
	//create materia, equip, use and unequip
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("fire"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("fire"));
	me->equip(src->createMateria("ice"));
	me->use(0, *frenken);
	me->use(1, *frenken);
	me->use(2, *frenken);
	me->use(3, *frenken);
	me->use(4, *frenken);
	me->use(6, *frenken);
	me->use(7, *frenken);
	me->unequip(0);
	me->use(0, *frenken);
	me->unequip(1);
	me->use(1, *frenken);
	delete frenken;
	delete me;
	delete src;
	return 0;
}
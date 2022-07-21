/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:22:04 by nfernand          #+#    #+#             */
/*   Updated: 2022/07/21 11:40:35 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <time.h>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

Base	*generate(void)
{
	srand(time(0));
	int	random = rand() % 99;

	if (random <= 33)
		return (new A());
	else if (random <= 66)
		return (new B());
	else
		return (new C());
	return (NULL);
}

void	identify(Base *p)
{
	cout << BLUE "identifying with using a pointer" << endl;
	if (dynamic_cast<A*>(p) != nullptr)
		cout << GREEN "<A subclass>" RESET << endl;
	if (dynamic_cast<B*>(p) != nullptr)
		cout << GREEN "<B subclass>" RESET << endl;
	if (dynamic_cast<C*>(p) != nullptr)
		cout << GREEN "<C subclass>" RESET << endl;
}

void	identify(Base &p)
{
	//void just to get past norm
	cout << BLUE "identifying without using a pointer" << endl;
	try
	{
		(void)dynamic_cast<A&>(p);
		cout << GREEN "<A subclass>" RESET << endl;
	}
	catch(std::bad_cast){}
	try
	{
		(void)dynamic_cast<B&>(p);
		cout << GREEN "<B subclass>" RESET << endl;
	}
	catch(std::bad_cast){}
	try
	{
		(void)dynamic_cast<C&>(p);
		cout << GREEN "<C subclass>" RESET << endl;
	}
	catch(std::bad_cast){}
}

int	main()
{
	cout << MAGENTA "Generating a random derived class..." RESET << endl;
	Base	*new_base = generate();
	cout << endl;

	cout << MAGENTA "Printing the type of derived class using when passed as pointer..." RESET << endl;
	identify(new_base);
	cout << endl;

	cout << MAGENTA "Printing the type of derived class using when passed as reference..." RESET << endl;
	identify(*new_base);

	delete new_base;
	return (0);
}

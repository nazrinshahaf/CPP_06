/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:16:57 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 18:16:02 by nfernand         ###   ########.fr       */
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

Base::Base()
{
	cout << GREEN "Base default constructor called" RESET << endl;
}

Base::~Base()
{
	cout << RED "Base destructor called" RESET << endl;
}

Base	*Base::generate(void)
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

void	Base::identify(Base *p)
{
	cout << BLUE "identifying with using a pointer" << endl;
	if (dynamic_cast<A*>(p) != nullptr)
		cout << GREEN "<A subclass>" RESET << endl;
	if (dynamic_cast<B*>(p) != nullptr)
		cout << GREEN "<B subclass>" RESET << endl;
	if (dynamic_cast<C*>(p) != nullptr)
		cout << GREEN "<C subclass>" RESET << endl;
}

void	Base::identify(Base &p)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:22:04 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 18:06:29 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

int	main()
{
	Base	*base = new Base();
//	Base	*a = new A();
//	Base	*b = new B();
//	Base	*c = new C();

	Base	*new_base = base->generate();
	new_base->identify(new_base);
	new_base->identify(*new_base);

//	delete c;
//	delete b;
//	delete a;
	delete new_base;
	delete base;
	return (0);
}

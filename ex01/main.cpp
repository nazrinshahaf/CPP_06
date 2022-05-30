/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:07:43 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 14:50:21 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include "colours.h"

#include <string>
#include <iostream>
#include <stdint.h>

using	std::string;
using	std::endl;
using	std::cout;

uintptr_t		serialization(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data			*deserialization(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main()
{
	Data	*test = new Data("yZ", 123, "male123");
	uintptr_t serial = serialization(test);

	cout << *test << endl;

	Data	*reversedtest = deserialization(serial);

	cout << *reversedtest << endl;

	delete test;
	return (0);
}

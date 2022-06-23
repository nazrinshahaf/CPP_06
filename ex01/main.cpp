/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:07:43 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/22 14:13:55 by nfernand         ###   ########.fr       */
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
	cout << MAGENTA "Creating Data with name, age and number..." RESET << endl;
	Data	*data = new Data("yZ", 123, "male123");
	cout << endl;

	cout << MAGENTA "Printing Data..." RESET << endl;
	cout << data << endl;
	cout << *data << endl;
	cout << endl;

	cout << MAGENTA "Serializing Data..." RESET << endl;
	uintptr_t serial = serialization(data);
	cout << MAGENTA "Printing value of serialized data..." RESET << endl;
	cout << serial << endl;
	cout << endl;

	cout << MAGENTA "Deserializing Data..." RESET << endl;
	Data	*reversedtest = deserialization(serial);
	cout << MAGENTA "Printing value of serialized data..." RESET << endl;
	cout << reversedtest << endl;
	cout << *reversedtest << endl;

	cout << MAGENTA "Comparing initial and start values..." RESET << endl;
	cout << "Data is ";
	if (data == reversedtest)
		cout << "the" GREEN " same" RESET;
	else
		cout << RED "not the same" RESET;
	cout << " as reversed data." << endl;

	delete data;
	return (0);
}

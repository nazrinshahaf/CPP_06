/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:17:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/28 16:26:55 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

#include "colours.h"

#include "Convert.hpp"

using	std::cout;
using	std::endl;

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
	  cout << BLUE "string to convert: [" << argv[1] << "]" RESET << endl;
	  Convert		cc(argv[1]);

	  cc.convertInput();
	}
	else if (argc == 1)
		cout << RED "Please pass in an argument" RESET << endl;
	else
		cout << RED "Please only pass in one argument" RESET << endl;
	
}

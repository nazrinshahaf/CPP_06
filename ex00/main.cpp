/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:17:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/26 17:49:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "colours.h"

#include "ConvertChar.hpp"

using	std::cout;
using	std::endl;

int	main(int argc, char **argv)
{
	//if (argc == 2)
	//{
		//cout << BLUE "string to convert: <" << argv[1] << ">" RESET << endl;
		ConvertChar		cc("-10f");
		ConvertChar		cc("-1");
		ConvertChar		cc("0");
		ConvertChar		cc("10");
		ConvertChar		cc("abc");
		ConvertChar		cc("nan");
		ConvertChar		cc("10f");
	//}
	//else if (argc == 1)
	//	cout << RED "Please pass in an argument" RESET << endl;
	//else
	//	cout << RED "Please only pass in one argument" RESET << endl;
	
}

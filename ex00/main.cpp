/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:17:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/27 14:02:01 by nfernand         ###   ########.fr       */
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
	  //Convert		cc("-10f");
	  //Convert		cc("-10.0f");
	  //Convert		cc("-1");
	  //Convert		cc("+1");
	  //Convert		cc("0");
	  //Convert		cc("10");
	  //Convert		cc("abc");
	  //Convert		cc("nan");
	  //Convert		cc("10f");
	  //Convert		cc("-inf");
	  //Convert		cc("inf");
	  //Convert		cc("+inf");
	  //Convert		cc("+inff");
	  //Convert		cc("-inff");
	  
	  //char		c = 'a';
	  //float		f = static_cast<float>(c); 
	  //double	d = static_cast<double>(c);
	  //int		i = static_cast<int>(c);
	  //cout << "c: " << c << endl;
	  //cout << "f: " << f << endl;
	  //cout << "d: " << d << endl;
	  //cout << "i: " << i << endl;
	  
	}
	else if (argc == 1)
		cout << RED "Please pass in an argument" RESET << endl;
	else
		cout << RED "Please only pass in one argument" RESET << endl;
	
}

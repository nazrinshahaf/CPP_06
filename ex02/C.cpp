/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:34:32 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 17:34:52 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

#include <iostream>

#include "colours.h"

using	std::cout;
using	std::endl;

C::C()
{
	cout << GREEN "C defualt constructor called" RESET << endl;
}

C::~C()
{
	cout << RED "C destructor called" RESET << endl;
}

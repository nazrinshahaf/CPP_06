/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:51:19 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 17:51:45 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

#include <iostream>

#include "colours.h"

using	std::cout;
using	std::endl;

B::B()
{
	cout << GREEN "B defualt constructor called" RESET << endl;
}

B::~B()
{
	cout << RED "B destructor called" RESET << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:27:03 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 17:31:24 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

#include <iostream>

#include "colours.h"

using	std::cout;
using	std::endl;

A::A()
{
	cout << GREEN "A defualt constructor called" RESET << endl;
}

A::~A()
{
	cout << RED "A destructor called" RESET << endl;
}

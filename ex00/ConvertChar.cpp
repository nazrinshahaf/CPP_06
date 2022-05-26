/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:28:12 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/26 17:43:03 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ConvertChar.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;

ConvertChar::ConvertChar()
{
	if (this->_print_init == true)
		cout << GREEN "Default Constructor called" RESET << endl;
}

ConvertChar::~ConvertChar()
{
	if (this->_print_init == true)
		cout << GREEN "Destructor called" RESET << endl;
}

ConvertChar::ConvertChar(char *original_string)
{
	if (this->_print_init == true)
		cout << GREEN "Default Assignment Constructor called" RESET << endl;
	this->_original_string = original_string;
}

ConvertChar::ConvertChar(ConvertChar const &tocopy)
{
	if (this->_print_init == true)
		cout << GREEN "Copy Constructor called" RESET << endl;
	this->_original_string = tocopy.getOriginalString();
}

ConvertChar		&ConvertChar::operator=(ConvertChar const &tocopy)
{
	if (this->_print_init == true)
		cout << GREEN "Copy Assignment Operator called" RESET << endl;
	this->_original_string = tocopy.getOriginalString();
	return (*this);
}

void			ConvertChar::setOriginalString(char *original_string)
{
	this->_original_string = original_string;
}

char			*ConvertChar::getOriginalString(void) const
{
	return (this->_original_string);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:05:11 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 14:42:23 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "colours.h"

#include <string>
#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

Data::Data()
{
	cout << GREEN "Data default constructor called" RESET << endl;
	this->_name = "test";
	this->_age = 25;
	this->_gender = "male";
}

Data::~Data()
{
	cout << RED "Data default constructor called" RESET << endl;
}

Data::Data(string name, int age, string gender)
{
	cout << GREEN "Data default constructor called" RESET << endl;
	this->_name = name;
	this->_age = age;
	this->_gender = gender;
}

Data::Data(Data const &tocopy)
{
	cout << GREEN "Data copy constructor called" RESET << endl;
	this->_name = tocopy.getName();
	this->_age = tocopy.getAge();
	this->_gender = tocopy.getGender();
}

Data	&Data::operator=(Data const &tocopy)
{
	cout << GREEN "Data copy assingment operator called" RESET << endl;
	this->_name = tocopy.getName();
	this->_age = tocopy.getAge();
	this->_gender = tocopy.getGender();
	return (*this);
}

int		Data::getAge(void) const
{
	return (this->_age);
}

string	Data::getName(void) const
{
	return (this->_name);
}

string	Data::getGender(void) const
{
	return (this->_gender);
}

std::ostream& operator<<(std::ostream& os, Data const &dt)
{
	os << "Name	:" << dt.getName() << endl;
	os << "Age	:" << dt.getAge() << endl;
	os << "Gender	:" << dt.getGender() << endl;
	return os;
}

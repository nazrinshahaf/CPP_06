/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:28:12 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/21 16:02:33 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <string>
#include <climits>
#include <iomanip>

#include "Convert.hpp"

#include "colours.h"

using	std::cout;
using	std::endl;
using	std::string;

bool	isNumber(string &str);
bool	isFloat(string &str);
bool	isDouble(string &str);

Convert::Convert()
{
	if (this->_print_init == true)
		cout << GREEN "Default Constructor called" RESET << endl;
}

Convert::~Convert()
{
	if (this->_print_init == true)
		cout << GREEN "Destructor called" RESET << endl;
}

Convert::Convert(char *original_string)
{
	if (this->_print_init == true)
		cout << GREEN "Default Assignment Constructor called" RESET << endl;
	this->_special_case = 0;
	this->_char_case = 0;
	this->_int_case = 0;

	this->_int_scalar = 0;
	this->_char_scalar = 0;
	this->_float_scalar = 0;
	this->_double_scalar = 0;
	this->_overflow_scalar = 0;
	this->_valid = 1;

	this->_special_value = "";
	this->_original_string = original_string;
}

Convert::Convert(Convert const &tocopy)
{
	if (this->_print_init == true)
		cout << GREEN "Copy Constructor called" RESET << endl;
	this->_original_string = tocopy._original_string;
}

Convert		&Convert::operator=(Convert const &tocopy)
{
	if (this->_print_init == true)
		cout << GREEN "Copy Assignment Operator called" RESET << endl;
	this->_original_string = tocopy._original_string;
	return (*this);
}

void		Convert::convertInput(void)
{
	handleInput();
	printConversion();
}

void		Convert::handleInput(void)
{
	string		str;
	this->handleSpecialCase();
	if (this->_special_case == 1)
		return ;
	else if ((strlen(this->_original_string) == 1)
				&& (this->_original_string[0] >= 0 && this->_original_string[0] <= 127))
	{
		cout << "entered" << endl;
		this->_char_case = 1;
		convertChar();
		return ;
	}
	else if ((this->_original_string[0] >= '0' && this->_original_string[0] <= '9')
			|| this->_original_string[0] == '-' || this->_original_string[0] == '+')
	{
		//idk why i did eveyrthing before this in char *
		//check for alphabets that are not f
		handleNumericCase();
		return ;
	}
	cout << RED "DOENST MATCH ANYTHING" RESET << endl;
}

void		Convert::printConversion(void)
{
	if (this->_special_case == 1)
	{
		cout << YELLOW "char: [impossible]" RESET << endl;
		cout << BLUE "int: [impossible]" RESET << endl;
		if (this->_special_value == "inff" || this->_special_value == "+inff"
				|| this->_special_value == "-inff" || this->_special_value == "nanf")
			cout << MAGENTA "float: [" << this->_special_value << "]" RESET << endl;
		else
			cout << MAGENTA "float: [impossible]" RESET << endl;
		if (this->_special_value == "inf" || this->_special_value == "+inf"
				|| this->_special_value == "-inf" || this->_special_value == "nan")
			cout << CYAN "double: [" << this->_special_value << "]" RESET << endl;
		else
			cout << CYAN "double: [impossible]" RESET << endl;
	}
	else
	{
		if (this->_double_scalar < 0 || this->_double_scalar > 127)
			cout << YELLOW "char: [impossible]" RESET << endl;
		else if (this->_double_scalar < 32)
			cout << YELLOW "char: [Non Displayable]" RESET << endl;
		else
			cout << YELLOW "char: [" << this->_char_scalar << "]" RESET << endl;
		if (this->_valid == -1)
			cout << BLUE "int: [impossible]" RESET << endl;
		else
			cout << BLUE "int: [" << this->_int_scalar << "]" RESET << endl;
		cout << MAGENTA "float: [" << std::fixed << std::setprecision(1) << this->_float_scalar << "f]" RESET << endl;
		cout << CYAN "double: [" << std::fixed << std::setprecision(1) << this->_double_scalar << "]" RESET << endl;
	}

	//setprecision sets to the entire number instead of the fractional part, so std::fixed will make it apply to the fractional part
	//using fixed point format
}

void		Convert::handleSpecialCase(void)
{
	string		lowercase_str = this->_original_string;
	string		array[] = {"inf", "-inf", "+inf", "inff", "-inff", "+inff", "nan", "nanf", ""};

	std::transform(lowercase_str.begin(), lowercase_str.end(), lowercase_str.begin(), ::tolower);

	for (int i = 0; array[i] != ""; i++)
	{
		if (lowercase_str == array[i])
		{
			if (this->_print_init)
				cout << "special case str: " << lowercase_str << endl;
			this->_special_value = lowercase_str;
			this->_special_case = 1;
		}
	}
}

void		Convert::handleNumericCase(void)
{
	string		str = this->_original_string;

	//cout << RED "ENTERED" RESET << endl;
	cout << "is Number: " << (isNumber(str) ? (GREEN "true" RESET) : (RED "false" RESET)) << endl;
	if (isNumber(str))
	{
		this->_int_case = 1;
		convertInt();
		return ;
	}
	cout << "is Float: " << (isFloat(str) ? (GREEN "true" RESET) : (RED "false" RESET)) << endl;
	if (isFloat(str))
	{
		convertFloat();
		return ;
	}
	cout << "is Double: " << (isDouble(str) ? (GREEN "true" RESET) : (RED "false" RESET)) << endl;
	if (isDouble(str))
	{
		convertDouble();
		return ;
	}
}

void		Convert::convertChar(void)
{
	if (this->_print_init)
		cout << RED "entered convert char" RESET << endl;
	this->_char_scalar = this->_original_string[0];
	this->_int_scalar = static_cast<int>(this->_char_scalar);
	this->_float_scalar = static_cast<float>(this->_char_scalar);
	this->_double_scalar = static_cast<double>(this->_char_scalar);
}

void		Convert::convertInt(void)
{
	string		str = this->_original_string;

	try
	{
		this->_int_scalar = stoi(str);
		this->_char_scalar = static_cast<char>(this->_int_scalar);
		this->_float_scalar = static_cast<float>(this->_int_scalar);
		this->_double_scalar = static_cast<double>(this->_int_scalar);
	}
	catch (std::out_of_range)
	{
		this->_overflow_scalar = static_cast<double>(atof(str.c_str()));
		this->_valid = -1;
		this->_char_scalar = static_cast<char>(this->_overflow_scalar);
		this->_float_scalar = static_cast<float>(this->_overflow_scalar);
		this->_double_scalar = static_cast<double>(this->_overflow_scalar);
	}
}

void		Convert::convertFloat(void)
{
	//stof is a c++ 11 feature
	//atof returns a double??
	long		int_overflow;

	this->_float_scalar = static_cast<float>(atof(this->_original_string));
	this->_char_scalar = static_cast<char>(this->_float_scalar);
	this->_int_scalar = static_cast<int>(this->_float_scalar);
	this->_double_scalar = static_cast<double>(this->_float_scalar);

	int_overflow = static_cast<long>(this->_float_scalar);
	if (int_overflow > INT_MAX || int_overflow < INT_MIN)
		this->_valid = -1;
}

void		Convert::convertDouble(void)
{
	long		int_overflow;

	this->_double_scalar = static_cast<double>(atof(this->_original_string));
	this->_char_scalar = static_cast<char>(this->_double_scalar);
	this->_int_scalar = static_cast<int>(this->_double_scalar);
	this->_float_scalar = static_cast<float>(this->_double_scalar);

	int_overflow = static_cast<long>(this->_float_scalar);
	if (int_overflow > INT_MAX || int_overflow < INT_MIN
			|| this->_double_scalar > INT_MAX || this->_double_scalar < INT_MIN)
		this->_valid = -1;
}

/*
 *	UTILS
 * */

bool		isNumber(string &str)
{
	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if ((str[0] == '-' || str[0] == '+') && i == 0)
			continue ;
		if (std::isdigit(str[i]) == 0)
			return false;
	}
	return true;
}

bool		isFloat(string &str)
{
	int		decimal_count = 0;

	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if ((str[0] == '-' || str[0] == '+') && i == 0)
			continue ;
		if (i == (str.size() - 1))
		{
			if (str[i] == 'f')
				return true;
			return false;
		}
		if (std::isdigit(str[i]) == 0)
		{
			if (str[i] == '.')
			{
				decimal_count++;
				if (decimal_count > 1)
					return false;
			}
			else
				return false;
		}
	}
	return true;
}

bool		isDouble(string &str)
{
	int		decimal_count = 0;

	for (std::string::size_type i = 0; i < str.size(); i++)
	{
		if ((str[0] == '-' || str[0] == '+') && i == 0)
			continue ;
		if (std::isdigit(str[i]) == 0)
		{
			if (str[i] == '.')
			{
				decimal_count++;
				if (decimal_count > 1)
					return false;
			}
			else
				return false;
		}
	}
	return true;
}

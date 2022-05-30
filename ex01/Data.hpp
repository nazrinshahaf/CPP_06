/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:03:46 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 14:40:10 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

using	std::string;

class		Data
{
	public:
		Data();
		Data(string name, int age, string gender);
		Data(Data const &tocopy);
		~Data();

		Data		&operator=(Data const &tocopy);

		int			getAge(void) const;
		string		getName(void) const;
		string		getGender(void) const;

	private:
		int			_age;
		string		_name;
		string		_gender;

};

std::ostream& operator<<(std::ostream& os, Data const &dt);


#endif

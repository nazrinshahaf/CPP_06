/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:33:39 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 17:50:14 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CPP
# define C_CPP

#include <iostream>
#include "Base.hpp"

class	Base;

class		C : public	Base
{
	public:
		C();
		virtual	~C();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:14:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/30 17:28:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class		Base
{
	public:
		Base();
		virtual ~Base();

		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};

#endif

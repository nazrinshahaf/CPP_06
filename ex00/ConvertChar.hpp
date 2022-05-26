/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertChar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:26:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/26 17:43:31 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTCHAR_HPP
# define CONVERTCHAR_HPP

class	ConvertChar
{
	public:
		ConvertChar(char *original_string);
		~ConvertChar();

		ConvertChar(ConvertChar const &tocopy);

		ConvertChar		&operator=(ConvertChar const &tocopy);

		void			setOriginalString(char *original_string);
		char			*getOriginalString(void) const;

	private:
		ConvertChar();

		char				*_original_string;
		static const bool 	_print_init = true;
};

#endif

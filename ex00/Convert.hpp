/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:26:16 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/22 13:07:10 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

using	std::string;

class	Convert
{
	public:
		Convert(char *original_string);
		~Convert();

		Convert(Convert const &tocopy);

		Convert				&operator=(Convert const &tocopy);

		void				convertInput(void);

	private:
		Convert();

		int					handleInput(void);
		void				printConversion(void);
		void				convertChar(void);
		void				convertInt(void);
		void				convertFloat(void);
		void				convertDouble(void);
		void				handleSpecialCase(void);
		int					handleNumericCase(void);

		static const bool 	_print_init = false;

		int					_valid;
		char				*_original_string;

		int					_special_case;
		int					_char_case;

		string				_special_value;
		char				_char_scalar;
		int					_int_scalar;
		float				_float_scalar;
		double				_double_scalar;
		double				_overflow_scalar;

};

#endif

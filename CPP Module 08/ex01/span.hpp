/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:59:32 by lvintila          #+#    #+#             */
/*   Updated: 2022/12/29 21:22:08 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <string>

class Span
{
	public:

		Span();
		Span(unsigned int size);
		Span( Span const & src );
		virtual~Span();

		void	addNumber(int numAdded);

		Span  &	operator=( Span const & rhs );

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			printContent(void);

		class SpanOverSizeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		std::vector<int> m_vector;


};

std::ostream &			operator<<( std::ostream & o, Span const & instance );

#endif /* ************************************************************ SPAN_H */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:57 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/16 10:06:29 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
	
		unsigned int		_max;
		std::vector<int>	_span;

	public:

		Span();
		Span(unsigned int number);
		Span(Span const & src);
		~Span();

		Span &		operator=(Span const & rhs);
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Span: Out of bounds exception";
				};
		};
		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Span: No span found exception";
				};
		};

		void addNumber(int number);
		void addManyNumbers(unsigned int amount);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		unsigned int getMax(void) const;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:57 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/12 20:04:12 by tpereira         ###   ########.fr       */
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

		void addNumber(int number);
		// unsigned int shortestSpan(void) const;
		// unsigned int longestSpan(void) const;
		unsigned int getMax(void) const;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */
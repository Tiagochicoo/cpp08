/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:54 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/12 20:04:16 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	std::cout << "Span default constructor called!" << std::endl;
}

Span::Span(unsigned int number)
{
	this->_max = number;
	this->_span = std::vector<int>();
	this->_span.reserve(number);
	std::cout << "Span unsigned int constructor called!" << std::endl;
}

Span::Span( Span const & src )
{
	this->_span = src._span;
	std::cout << "Span copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	std::cout << "Span destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if (this != &rhs)
		this->_max = rhs.getMax();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	o << "Max = " << i.getMax();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number)
{
	if (_span.size() != _max)
		this->_span.push_back(number);
	else
		throw std::exception();
}

// unsigned int Span::shortestSpan(void) const
// {
// 	return 1;
// }

// unsigned int Span::longestSpan(void) const
// {
// 	return 1;
// }

// /*
// ** --------------------------------- ACCESSOR ---------------------------------
// */

unsigned int Span::getMax(void) const
{
	return this->_max;
}

/* ************************************************************************** */
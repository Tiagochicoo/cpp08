/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:54 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/16 10:07:03 by tpereira         ###   ########.fr       */
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
	{
		this->_span.push_back(number);
		std::cout << "Number " << number << " added!" << std::endl;
	}
	else
		throw Span::OutOfBoundsException();
}

void Span::addManyNumbers(unsigned int amount)
{
	if (_span.size() + amount > _max)
		throw Span::OutOfBoundsException();
	for (unsigned int i = 0; i < amount; i++)
	{
		this->_span.push_back(rand() % 10000);
		std::cout << "Number " << _span[_span.size() - 1] << " added!" << std::endl;
	}
}

unsigned int Span::shortestSpan(void) const
{
	if (_span.size() < 2)
		throw Span::NoSpanFoundException();
	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	unsigned int shortest = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < (int)shortest)
			shortest = tmp[i] - tmp[i - 1];
	}
	return shortest;
}

unsigned int Span::longestSpan(void) const
{
	if (_span.size() < 2)
		throw Span::NoSpanFoundException();
	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

// /*
// ** --------------------------------- ACCESSOR ---------------------------------
// */

unsigned int Span::getMax(void) const
{
	return this->_max;
}

/* ************************************************************************** */

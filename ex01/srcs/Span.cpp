/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:54 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/16 21:00:43 by tpereira         ###   ########.fr       */
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
	_max = number;
	_span = std::vector<int>();
	_span.reserve(number);
	std::cout << "Span unsigned int constructor called!" << std::endl;
}

Span::Span( Span const & src )
{
	_span = src._span;
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
	{
		_max = rhs.getMax();
	}
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
		_span.push_back(number);
		std::cout << "Number " << number << " added!" << std::endl;
	}
	else
		throw Span::OutOfBoundsException();
}

void Span::addManyNumbers(unsigned int amount)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	if (_span.size() + amount > _max)
		throw Span::OutOfBoundsException();

	_span.resize(_span.size() + amount);
	
	for (unsigned int i = 0; i < amount; i++)
	{
		_span.push_back(rand() % 10000);
		std::cout << "Number " << _span[_span.size() - 1] << " added!" << std::endl;
	}
}

unsigned int Span::shortestSpan() const
{
    if (_span.size() < 2)
        throw Span::NoSpanFoundException();

    std::vector<int>::const_iterator min = _span.begin();
	std::vector<int>::const_iterator next = min + 1;
	unsigned int shortestSpan = static_cast<unsigned int>(std::abs(*next - *min));

	std::cout << *next << std::endl;
	std::cout << *min << std::endl;

	for (; next != _span.end(); ++min, ++next)
	{
		unsigned int currentSpan = static_cast<unsigned int>(std::abs(*next - *min));
		if (currentSpan < shortestSpan)
			shortestSpan = currentSpan;
	}

	return shortestSpan;
}

unsigned int Span::longestSpan() const
{
    if (_span.size() < 2)
        throw Span::NoSpanFoundException();

    std::vector<int>::const_iterator max = _span.begin();
    std::vector<int>::const_iterator next = max + 1;
    unsigned int longestSpan = static_cast<unsigned int>(std::abs(*next - *max));

    for (; next != _span.end(); ++max, ++next)
    {
        unsigned int currentSpan = static_cast<unsigned int>(std::abs(*next - *max));
        if (currentSpan > longestSpan)
            longestSpan = currentSpan;
    }

    return longestSpan;
}

// /*
// ** --------------------------------- ACCESSOR ---------------------------------
// */

unsigned int Span::getMax(void) const
{
	return _max;
}

std::vector<int> Span::getSpan(void) const
{
    return _span;
}

/* ************************************************************************** */

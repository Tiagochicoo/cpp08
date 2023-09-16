/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:16:05 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/16 11:26:28 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	// std::cout << "MutantStack default constructor called!" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const & src )
{
	*this = src;
	// std::cout << "MutantStack copy constructor called!" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	// std::cout << "MutantStack destructor called!" << std::endl;
}

template <typename T>
MutantStack<T> &		MutantStack<T>::operator=( MutantStack const & rhs )
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i )
{
	o << "MutantStack: " << i << std::endl;
	return o;
}

/* ************************************************************************** */

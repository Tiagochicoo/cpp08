/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:57:41 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/09 19:38:25 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>
# include "Easyfind.hpp"

template <class T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	std::cout << "Array constructor called" << std::endl;
}

template<class T>
Array<T>::Array(const Array &src)
{
	_array = new T[src._size];
	for (size_t i = 0; i < src._size; i++)
		_array[i] = src._array[i];
	this->_size = src._size;
	
	std::cout << "Array copy constructor called" << std::endl;
	*this = src;
}

template<class T>
Array<T>::~Array()
{
	delete [] this->_array;
	std::cout << "Array destructor called" << std::endl;
}

template<class T>
Array<T>& Array<T>::operator=(Array<T> const &rhs)
{
	if (this == &rhs)
		return (*this);

	// Allocate new memory before deleting old memory to handle allocation failure
	T* newArray = new T[rhs._size];
	for (size_t i = 0; i < rhs._size; i++)
		newArray[i] = rhs._array[i];

	delete[] _array;
	_array = newArray;
	_size = rhs._size;

	return (*this);
}


template<class T>
T& Array<T>::operator[](size_t i)
{
	if (i < this->_size && i >= 0)
		return (this->_array[i]);
	else
	{
		throw std::exception();
	}
}

template <class T>
size_t Array<T>::getSize() const
{
	return (this->_size);
}

#endif

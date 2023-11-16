/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:16:08 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/16 21:17:50 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <cstdlib>
# include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>

template <class T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		MutantStack &		operator=( MutantStack const & rhs );

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		
};

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

# include "MutantStack.tpp"

#endif /* ***************************************************** MUTANTSTACK_H */

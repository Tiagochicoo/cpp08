/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:57:41 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/16 18:29:13 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <iostream>
# include "Easyfind.hpp"

template <typename T>
void easyfind(T a, int b)
{
	if (a.empty())
		std::cout << "Container is empty!" << std::endl;
	
	typename T::iterator i = std::find(a.begin(), a.end(), b);

	if (i != a.end())
		std::cout << "Found " << b << " in provided container!" << std::endl;
	else
		std::cout << "Sorry, " << b << " not found!" << std::endl;
}

#endif

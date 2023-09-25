/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:57:41 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/16 08:49:53 by tpereira         ###   ########.fr       */
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
	for (typename T::iterator itr = a.begin(); itr != a.end(); itr++)
	{
		if (b == *itr)
		{
			std::cout << "Found " << b << " in provided container!" << std::endl;
			return ;
		}
	}
	std::cout << "Sorry, " << b << " not found!" << std::endl;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:57:41 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/11 19:45:05 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <iostream>
# include "Easyfind.hpp"

template <typename T>
void easyfind(T& a, int b)
{
	// if nothing found, std::find() returns a.end()
	if (std::find(a.begin(), a.end(), b) != a.end())
		std::cout << "Found " << b << " in provided array!" << std::endl;
	else
		std::cout << "Sorry, " << b << " not found!" << std::endl;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/11 19:43:06 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include "Easyfind.hpp"

int main()
{
	std::array<int, 3> arr{1, 2, 3};

	easyfind(arr, 2);
	easyfind(arr, 5);
	
   return 0;
}

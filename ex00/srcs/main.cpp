/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/01 16:38:22 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
// #include <map>

#include "Easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::list<int> lst;
	std::list<int> empty;
	// don't need to use Map as it's an associative container (key-value)
	// std::map<int, int> map;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);

	// map[1] = 1;
	// map[2] = 2;
	// map[3] = 3;

	// std::cout << map.begin()->first << std::endl;

	std::cout << "Vector (1,2,3)" << std::endl;
	easyfind(vec, 2);
	easyfind(vec, 5);

	std::cout << "\nList (1,2,3)" << std::endl;
	easyfind(lst, 2);
	easyfind(lst, 5);

	std::cout << "\nList (empty)" << std::endl;
	easyfind(empty, 2);
	easyfind(empty, 5);

	// easyfind(map, 2);
	// easyfind(map, 5);
	
   return 0;
}

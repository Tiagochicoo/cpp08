/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/16 21:40:42 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

template <typename Container>
void containerTest(const char* containerName)
{
    std::cout << "\nTesting " << containerName << ":" << std::endl;

    Container container;

    container.push_back(5);
    container.push_back(17);

    std::cout << container.back() << std::endl;

    container.pop_back();

    std::cout << container.size() << std::endl;

    container.push_back(3);
    container.push_back(5);
    container.push_back(737);
    container.push_back(0);

    typename Container::iterator it = container.begin();
    typename Container::iterator ite = container.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int, Container> s(container);
}

int main()
{
	std::cout << "Testing MutantStack:" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		// Test Other Container Types
		containerTest<std::list<int> >("std::list");
		containerTest<std::vector<int> >("std::vector");
		containerTest<std::deque<int> >("std::deque");
	}

	// std::set and std::map are not supported by the stack container adapter
	// they don't have a "top" element and you can't pop elements from a specific position
	// like a stack. They are not LIFO containers.

	return 0;
}

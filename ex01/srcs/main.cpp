/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/11/21 21:01:56 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

// TODO
// Fix assignment operator - Done


int main()
{
	{
		std::cout << "Subject main test:" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	// // testing with 100k numbers (Slow)
	// {
	// 	std::cout << "\n100k numbers test:" << std::endl;
	// 	Span sp = Span(100000);

	// 	for (int i = 0; i < 100000; i++)
	// 		sp.addNumber(rand() % 10000);
		
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;

	// }
	
	{
		std::cout << "\nOut of bounds exception test:" << std::endl;
		Span sp = Span(3);
		
		// testing addNumber()
		try 
		{
			sp.addNumber(0);
			sp.addNumber(2);
			sp.addNumber(42);
			sp.addNumber(4);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		// testing shortestSpan()
		try 
		{
			std::cout << "ShortestSpan(): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		// testing longestSpan()
		try 
		{
			std::cout << "LongestSpan(): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "\nTesting addManyNumbers():" << std::endl;
		Span sp = Span(10);
		Span sp2 = sp;

		std::cout << "Max: " << sp2.getMax() << std::endl;
		sp2.addManyNumbers(10);

		sp.addManyNumbers(10);
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	}
	
	return 0;
}

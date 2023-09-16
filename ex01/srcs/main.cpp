/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:20:18 by tpereira          #+#    #+#             */
/*   Updated: 2023/09/16 09:49:33 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(3);
	
	// testing addNumber()
	try 
	{
		sp.addNumber(0);
		sp.addNumber(2);
		sp.addNumber(42);
		// sp.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// testing shortestSpan()
	try 
	{
		std::cout << "Shortest span: ";
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// testing longestSpan()
	try 
	{
		std::cout << "Longest span: ";
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

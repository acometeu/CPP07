/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define ITER_HPP

#include <iostream>

void	display_char(char &character)
{
	std::cout << character << std::endl;
	return;
}

void	display_int(int	&number)
{
	std::cout << number << std::endl;
	return;
}

template<typename T>
void	function_display(T &address)
{
	std::cout << address << std::endl;
	return;
}

template<typename T>
void	iter(T address[], int length, void (*f)(T &adress))
{
	int	temp = 0;

	while (address[temp] && temp < length)
	{
		f(address[temp]);
		temp++;
	}
	return;
}

#endif
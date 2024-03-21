/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class	Array
{

public:

	Array(void);
	Array(unsigned int n);
	Array(Array &src);
	~Array(void);
	Array	&operator=(Array const &src);

	int	size() const;

	T	&operator[](int index);

private:

	T	*_array;
	int	_size;

};


class	OutOfBoundsException : public std::exception
{
public:
	virtual const char	*what() const throw() {
		return ("Index is Out of Bound !"); }
};

template<typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0)
{
	this->_array = NULL;
	return;
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	// unsigned int i = 0;

	// while (i < n)
	// {
	// 	this->_array[i] = 0;
	// 	i++;
	// }
	// return;
}

template<typename T>
Array<T>::Array(Array &src) : _array(new T[src.size()]), _size(src.size())
{
	int	i = 0;

	while (i < this->_size)
	{
		this->_array[i] = src[i];
		i++;
	}
	return;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &src)
{
	int	i = 0;

	this->_array = new Array[src.size()];
	this->_size = src.size();
	while (i < this->_size)
	{
		this->_array[i] = src[i];
		i++;
	}
	return(*this);
}

template<typename T>
T	&Array<T>::operator[](int index)
{
	if (index >= this->_size || index < 0)
		throw OutOfBoundsException();
	return(this->_array[index]);
}

template<typename T>
int	Array<T>::size(void) const
{
	return (this->_size);
}

#endif

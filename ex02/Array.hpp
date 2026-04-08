/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:36 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/02 12:03:37 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstddef>
#include <exception>

template <typename T>
class Array
{
    private:
        T* _data;
        unsigned int _size;

    public:
        Array();
        Array( unsigned int n );
        Array( const Array& other );
        Array& operator=( const Array& other );
        ~Array();

        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;

        unsigned int size() const; //la fct ne modifie pas l objet
};

#endif
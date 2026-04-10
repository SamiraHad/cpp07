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
        unsigned int _n;

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

template <typename T>
Array<T>::Array() : _data(new[0]), _n(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _n(n) {}

template <typename T>
Array<T>::Array( const Array& other ) : _data(new T[other._n]()), _n(other._n)
                                    //copier la taille, allocation 
{
    for(unsigned int i = 0; i < other._n; i++)
        _data[i] = other._data[i]; // copier element par element
}


template <typename T>
Array<T>& Array<T>::operator=( const Array& other )
{
    if(this != &other)
    {
        delete[] _data; // liberer l'ancienne memoire
        _n = other._n; //copier la taille
        _data = new T[_n](); //allouer une nouvelle memoire
        for(unsigned int i = 0; i < other._n; i++)
            _data[i] = other._data[i]; // copier element par element
    }
    return(*this);
}

template <typename T>
Array<T>::~Array()
{
    delete [] _data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if(index >= _n)
        throw std::exception();
    return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if(index >= _n)
        throw std::exception();
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
        return _n;
}

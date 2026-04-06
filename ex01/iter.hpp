/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:54 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/02 16:19:49 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

template <typename T, typename F>
void iter(T *array, const int len, F function)
{
    if(!array)
        return;
    for (int i = 0; i < len; i++)
        function(array[i]);
}

template <typename T, typename F>
void iter(const T *array, const int len, F function)
{
    if(!array)
        return;
    for (int i = 0; i < len; i++)
        function(array[i]);
}

#endif
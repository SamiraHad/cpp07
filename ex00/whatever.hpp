/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:58 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/02 13:48:59 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATERVER_HPP
#define WHATERVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T a, T b)
{
    if(a < b)
        return a;
    return b;
}

template <typename T>
T max(T a, T b)
{
    if(a > b)
        return a;
    return b;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:51 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/02 16:31:05 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void addThree(T &x)
{
    x = x + 3;
}

template <typename T>
void toUpper(T &x)
{
    x = std::toupper(x);
}

template <typename T>
void addOne(T &x)
{
    x++;
}

int main()
{
    int arrayInt[3] = {1, 2, 3};
    
    std::cout << "Before: " << std::endl;
    iter(arrayInt, 3, print<int>);
    iter(arrayInt, 3, addThree<int>);
    std::cout << "After: " << std::endl;
    iter(arrayInt, 3, print<int>);

    std::cout << std::endl;

    char arrayChar[3] = {'a', 'b', 'c'} ;

    std::cout << "Before: " << std::endl;
    iter(arrayChar, 3, print<char>);
    iter(arrayChar, 3, toUpper<char>);
    std::cout << "After: " << std::endl;
    iter(arrayChar, 3, print<char>);

    std::cout << std::endl;

    float arrayFloat[3] = {42.0f, 48.0f, 6.0f} ;

    std::cout << "Before: " << std::endl;
    iter(arrayFloat, 3, print<float>);
    iter(arrayFloat, 3, addOne<float>);
    std::cout << "After: " << std::endl;
    iter(arrayFloat, 3, print<float>);



    return 0;
}
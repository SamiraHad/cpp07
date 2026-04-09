/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:39 by hsamira           #+#    #+#             */
/*   Updated: 2026/04/02 12:03:40 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime> 
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}



// void printTitle(const std::string &s)
// {
//     std::cout << "\n==== " << s << " ====\n\n";
// }

// int main()
// {
//     //0- value-init (new t[n]())
//     printTitle("Test0: value-init(fresh array values should be 0)");
//     Array<int> zeros(3);
//     std::cout << "zeros content: ";
//     unsigned int i = 0;
//     while (i < zeros.size())
//     {
//         std::cout << zeros[i] << " ";
//         ++i;
//     }
//     std::cout << "\n";

//     //1- empty array:
//     printTitle("Test1: empty array");
//     Array<int> empty;
//     std::cout << "size(): " << empty.size() << "\n";
//     try
//     {
//         empty[0] = 42;
//         std::cout << "ERROR: should have thrown\n";
//     }
//     catch (const std::exception&)
//     {
//         std::cout << "OK: caught exception on empty[0]\n";
//     }

//     //2- array with size
//     printTitle("Test2: int array size 5");
//     Array<int> ai(5);
//     std::cout << "size(): " << ai.size() << "\n";
//     i = 0;
//     while (i < ai.size())
//     {
//         //ai[i] = (i + 1);
//         ai[i] = static_cast<int>(i + 1);
//         ++i;
//     }

//     std::cout << "content: ";
//     i = 0;
//     while (i < ai.size())
//     {
//         std::cout << ai[i] << " ";
//         ++i;
//     }
//     std::cout << "\n";

//     //3- copy constructor (deep copy)
//     printTitle("Test3: copy constructor (deep copy)");
//     Array<int> copy(ai);
//     copy[0] = 1999;
//     std::cout <<"original[0]: " << ai[0] << " | copy[0]: " << copy[0] << "\n";
//     std::cout << ((ai[0] == 1) ? "OK: deep copy(only copy changed)\n"
//                                : "ERROR: shallow copy(original also changed)\n");

//     ai[0] = 777;
//     std::cout << "after changing original: original[0] = " << ai[0]
//               << ", copy[0] = " << copy[0] << "\n";
//     std::cout << ((copy[0] == 1999) ? "OK: deep copy (original changed only)\n"
//                                     : "ERORR: shallow copy (copy changed)\n");
                                    
//     //4-assingment operator deep copy
//     printTitle("Test4: assighment operator (deep copy)");
//     Array<int> assign;
//     assign = ai;
//     assign[1] = 200;
//     std::cout << "original[1]: " << ai[1] << " | assign[1]: " << assign[1] << "\n";
//     std::cout << ((ai[1] == 2) ? "OK: deep copy\n" : "ERROR: shallow copy\n");

//     //5- const access + bounds
//     printTitle("Test5: const access + out of bounds");
//     const Array<int> cai(ai);
//     std::cout << "cai[2]: " << cai[2] << "\n";
//     try 
//     {
//         std::cout << cai[6] << "\n";
//         std::cout << "ERROR: should have thrown\n";
//     }
//     catch (const std::exception&)
//     {
//         std::cout << "OK: caught exception on cai[6]\n";
//     }

//     //6- string array
//     printTitle("Test6: std::string array");
//     Array<std::string> as(3);
//     as[0] = "good";
//     as[1] = "morning";
//     as[2] = "angels";

//     std::cout << "content: ";
//     i = 0;
//     while (i < as.size())
//     {
//         std::cout << as[i] << " ";
//         ++i;
//     }
//     std::cout << "\n";

//     //7- out of bounds write
//     printTitle("Test7: out of bounds write");
//     try
//     {
//         as[3] = "FAIL";
//         std::cout << "ERROR: should have thrown\n";
//     }
//     catch (const std::exception&)
//     {
//         std::cout << "OK: caught exception on as[3]\n";
//     }
//     return 0;
// }
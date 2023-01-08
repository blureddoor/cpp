/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvintila <lvintila@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 09:11:22 by lvintila          #+#    #+#             */
/*   Updated: 2023/01/08 11:33:56 by lvintila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main()
{
    
    MutantStack<int> mstack;
    mstack.push(51);
    mstack.push(12);
    mstack.push(31); 

    std::cout << "mstack top: " << mstack.top() << std::endl;
    std::cout << "mstack pop ..." << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "mstack top: " << mstack.top() << std::endl;
    
    mstack.push(9);
    mstack.push(101);
    mstack.push(18);
    
    mstack.push(1);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    std::cout << "mstack top: " << mstack.top() << std::endl;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "mstack size is: " << mstack.size() <<std::endl;
    std::stack<int> s(mstack);
    std::cout << "s size is: " << s.size() <<std::endl;

    s.push(3);
    s.push(99);

    std::cout << "s size is: " << s.size() <<std::endl;
    std::cout << "s top is: " << s.top() <<std::endl;
    std::cout << "s pop() ..."<< std::endl; 
    s.pop();
    std::cout << "s pop() ..."<< std::endl; 
    s.pop();
    std::cout << "s size is: " << s.size() <<std::endl;
    
    std::cout << "mstack pop() ..."<< std::endl; 
    mstack.pop();
    std::cout << "s top is: " << s.top() <<std::endl;
    std::cout << "mstack top is: " << mstack.top() <<std::endl;
    return (0);
}
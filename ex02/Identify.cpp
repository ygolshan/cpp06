/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:29:28 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 13:41:55 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base * generate(void)
{
    srand(time(0));
    int const i = rand() % 3;

    if (i == 0)
    {
        std::cout << "Original type: A" << std::endl;
        return (new A);
    }
    else if (i == 1)
    {
        std::cout << "Original type: B" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "Original type: C" << std::endl;
        return (new C);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
	else
		throw std::bad_exception();
}

void identify(Base & p)
{
    try
    {
        A & a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e)
    {
    }

    try
    {
        B & b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e)
    {
    }

    try
    {
        C & c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e)
    {
    }
}
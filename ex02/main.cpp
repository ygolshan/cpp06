/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:30:02 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 13:57:10 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <unistd.h>

int main(void)
{
	Base* b;

	for (int i = 0; i < 4; i++)
	{
		b = generate();
		identify(b);
		identify(*b);
		delete b;
		sleep(1);
		std::cout << std::endl;
	}
}
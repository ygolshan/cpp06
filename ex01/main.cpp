/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:26:48 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 13:51:26 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data* A = new Data;
	uintptr_t B = 0;

	std::cout << "&A:	" << A << std::endl;
	B = Serializer::serialize(A);
	std::cout << "serialize output:	" << B << std::endl;
	std::cout << "deserialize output:	" << Serializer::deserialize(B) << std::endl;

	delete A;
	return 0;
}

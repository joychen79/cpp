/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 18:34:24 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int	main()
{
srand(time(NULL));
Base *ptr=generate();

identify(*ptr);
identify(ptr);

delete ptr;
return 0;
}
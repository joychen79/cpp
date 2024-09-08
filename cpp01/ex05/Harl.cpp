/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:05:49 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/08 13:38:12 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
 {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
 }

void Harl::info(void)
 {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!"<< std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
 }
 
void Harl::warning(void)
 {
    std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
 }

void Harl::error(void)
 {
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
 }
 
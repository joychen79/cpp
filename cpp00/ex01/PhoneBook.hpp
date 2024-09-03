/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:11:10 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/03 17:23:09 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_

#include "Contact.hpp"
#include <cctype>
#include <iomanip>
//#include <string>
//#include <bits/stdc++.h>
#include <cstdlib>

class PhoneBook
{
private:
	int added_contacts;
	Contact contacts[8];

public:
	void add();
	void search();
	void exit();
};

#endif
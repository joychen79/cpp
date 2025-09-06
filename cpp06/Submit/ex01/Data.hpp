/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:08:04 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:22:59 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	private:
		int	members;

	public:
		Data();
		~Data();

		Data(const Data &other);
		Data &operator=(const Data &other);

		Data(int _members);

		int getMembers() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:59:55 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/08 12:29:47 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	aux_replacing(std::ifstream	*in_file, std::ofstream	*on_file,
	std::string s1, std::string s2)
{
	std::string	line;
	size_t		ptr;

	ptr = 0;
	while(std::getline(*in_file, line))
	{
		ptr = line.find(s1);
		while (ptr != std::string::npos)
		{
			ptr = line.find(s1);
			if (ptr != std::string::npos)
			{
				line.erase(ptr, s1.size());
				line.insert(ptr, s2);
			}
		}
		*on_file << line << std::endl;
	}
}
void	replacing(std::string filename, std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "error" << std::endl;
		return ;
	}
	std::ifstream	in_file(filename);
	if (in_file.is_open())
	{
		std::ofstream	on_file(filename + ".replace");
		if (on_file.is_open())
			aux_replacing(&in_file, &on_file, s1, s2);
		else
			std::cout << "error" << std::endl;
	}
	else
		std::cout << "error" << std::endl;
}
int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "error" << std::endl;
        return(1);
    }
    replacing(av[1], av[2], av[3]);
    return(0);    
}
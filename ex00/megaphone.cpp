/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 22:30:48 by clouden           #+#    #+#             */
/*   Updated: 2026/04/04 12:47:32 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int		i;
	size_t	j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			std::string str = argv[i];
			while (j < str.length())
			{
				str[j] = (char)std::toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}

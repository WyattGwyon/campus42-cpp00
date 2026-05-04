/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:06:43 by clouden           #+#    #+#             */
/*   Updated: 2026/05/04 16:24:01 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook	pb;
	std::string	name;
	std::string	num;
	std::string	option;

	while (true)
	{
		pb = PhoneBook();
		std::cout << "Select and option [ADD, SEARCH, EXIT]: ";
		std::cin >> option;
		if (option == "ADD")
			pb.addContact();
		if (option == "SEARCH")
			std::cout << "will search" << std::endl;
		else if (option == "EXIT")
			break;
	}
	return (0);
}

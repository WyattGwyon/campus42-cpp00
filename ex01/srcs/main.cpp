/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:06:43 by clouden           #+#    #+#             */
/*   Updated: 2026/05/05 19:50:08 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	PhoneBook	pb;
	std::string	name;
	std::string	num;
	std::string	option;
	pb = PhoneBook();

	while (true)
	{
		std::cout << "\n";
		std::cout << "Select an option [ADD, SEARCH, EXIT]: ";
		if (!(std::cin >> option))
			break;
		if (option == "ADD")
			pb.addContact();
		if (option == "SEARCH")
			pb.search();
		else if (option == "EXIT")
			break;
	}
	return (0);
}

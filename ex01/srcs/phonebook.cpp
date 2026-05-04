/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:06 by clouden           #+#    #+#             */
/*   Updated: 2026/05/04 17:54:16 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() :
	i(0)
{}

void	PhoneBook::print(const Contact &c)
{
	std::cout << "First Name: " << c.getFirstName() << "\n";
	std::cout 	<< "Last Name: " << c.getLastName() << "\n";
	std::cout 	<< "Nick Name: " << c.getNickName() << "\n";
	std::cout << "Phone number: " << c.getNumber() << "\n";
	std::cout 	<< "Dark Secret: " << c.getSecret() << "\n";
}

void	PhoneBook::addContact()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	num;
	std::string	secret;

	std::cout << "Enters first name: ";
	std::cin >> first_name;
	std::cout << "Enters last name: ";
	std::cin >> last_name;
	std::cout << "Enters nick name: ";
	std::cin >> nick_name;
	std::cout << "Enter num: ";
	std::cin >> num;
	std::cout << "Enters darkest secret: ";
	std::cin >> secret;
	contacts[i].setContact(first_name, last_name, nick_name, num, secret);
	this->print(contacts[i]);
	i = (i + 1) % 8;
}


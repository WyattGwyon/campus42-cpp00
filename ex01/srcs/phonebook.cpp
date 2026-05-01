/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:06 by clouden           #+#    #+#             */
/*   Updated: 2026/05/01 20:18:36 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::addContact(Contact &c)
{
	this->con = c;
	std::string	name;
	std::string	num;
	
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter num: ";
	std::cin >> num;
	c = setContact(_first_name, _last_name, _nick_name, _num, _secret);
}

void	PhoneBook::print(const Contact &c)
{
	std::cout << c.get_name() << c.get_number() << std::endl;
}

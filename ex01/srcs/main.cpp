/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phone_book.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:06:43 by clouden           #+#    #+#             */
/*   Updated: 2026/04/29 15:27:55 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	Contact		c;
	PhoneBook	pb;
	std::string	name;
	std::string	num;

	while (true)
	{
		std::cout << "Enter name: ";
		std::cin >> name;
		std::cout << "Enter num: ";
		std::cin >> num;
		c = Contact(name, num);
		std::cout << "main " << c.get_name() << std::endl;
		pb = PhoneBook();
		pb.addContact(c);
		pb.print(c);
		std::cout << c.get_name() << std::endl;
	}
	return (0);
}

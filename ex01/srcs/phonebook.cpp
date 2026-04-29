/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:06 by clouden           #+#    #+#             */
/*   Updated: 2026/04/29 15:17:23 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::addContact(Contact &c)
{
	this->con = c;
	std::cout << "add: "<< con.get_name() << con.get_number() << std::endl;

}
void	PhoneBook::print(const Contact &c)
{
	std::cout << c.get_name() << c.get_number() << std::endl;
}

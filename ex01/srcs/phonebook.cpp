/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:06 by clouden           #+#    #+#             */
/*   Updated: 2026/06/01 12:56:12 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() :
	idx_(0),
	cnt_(0)
{}

void	PhoneBook::print(const Contact &c)
{
	std::cout	<< "First Name: "	<< c.getFirstName()	<< "\n";
	std::cout	<< "Last Name: "	<< c.getLastName()	<< "\n";
	std::cout	<< "Nick Name: "	<< c.getNickName()	<< "\n";
	std::cout	<< "Phone number: "	<< c.getNumber()	<< "\n";
	std::cout	<< "Dark Secret: "	<< c.getSecret()	<< "\n";
}

void	PhoneBook::table(int &i)
{
	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|"
			<< std::setw(10) << "ID"	<< "|" 
			<< std::setw(10) << "First"	<< "|"
			<< std::setw(10) << "Last"	<< "|"
			<< std::setw(10) << "Nick"	<< "|\n";
	std::cout << "+----------+----------+----------+----------+\n";	
	while(i < this->cnt_)
	{
		std::string	first	= contacts_[i].getFirstName();
		std::string	last	= contacts_[i].getLastName();
		std::string	nick	= contacts_[i].getNickName();
		
		std::cout << "|"
			<< std::setw(10) << i << "|" 
			<< std::setw(10) << first.substr(0, 9) + ((first.length() >= 10) ? "." : "") << "|" 
			<< std::setw(10) << last.substr(0, 9) + ((last.length() >= 10) ? "." : "") 	<< "|"
			<< std::setw(10) << nick.substr(0, 9) + ((nick.length() >= 10) ? "." : "")	<< "|\n";
		i++;
	}
	std::cout << "+----------+----------+----------+----------+\n";	
}

void	PhoneBook::search()
{
	int	i = 0;
	this->table(i);
	if (cnt_ == 0)
	{
		std::cout << "There are no entries yet..." << std::endl;
		return ;
	}
	std::cout << "Enter an index: ";
	std::cin >> i;
	while (i > (cnt_ - 1))
 	{
		std::cout << i << " is out of range...please choose again.\n";
		std::cout << "Enter an index: ";
		std::cin >> i;
	}
	std::cout << "\n";
	this->print(contacts_[i]);
}

void	PhoneBook::addContact()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	 std::string	num;
	std::string	secret;

	std::cout << "Enter first name: ";
	std::cin >> first_name;
	std::cout << "Enter last name: ";
	std::cin >> last_name;
	std::cout << "Enter nick name: ";
	std::cin >> nick_name;
	std::cout << "Enter num: ";
	std::cin >> num;
	std::cout << "Enter darkest secret: ";
	std::cin >> secret;
	contacts_[idx_].setContact(first_name, last_name, nick_name, num, secret);
	std::cout << "\n";
	std::cout << "An entry had been created for " << contacts_[idx_].getFirstName() << std::endl;
	idx_ = (idx_ + 1) % 8;
	if (cnt_ < 8)
		cnt_ += 1;
}


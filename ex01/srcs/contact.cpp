/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:51 by clouden           #+#    #+#             */
/*   Updated: 2026/05/01 20:18:36 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string name, std::string num)
{
	_Ñname = name;
	_num = num;
}

std::string	Contact::getFirstName() const
{
	return _first_name;
}

std::string	Contact::getLastName() const
{
	return _last_name;
}

std::string	Contact::getNickName() const
{
	return _nick_name;
}

std::string	Contact::getNumber() const
{
	return _num;
}

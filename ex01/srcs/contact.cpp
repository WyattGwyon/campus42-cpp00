/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:51 by clouden           #+#    #+#             */
/*   Updated: 2026/05/01 14:31:43 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string name, std::string num)
{
	_name = name;
	_num = num;
}

std::string	Contact::get_name() const
{
	return _name;
}

std::string	Contact::get_number() const
{
	return _num;
}

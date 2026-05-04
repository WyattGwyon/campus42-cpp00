/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:51 by clouden           #+#    #+#             */
/*   Updated: 2026/05/04 17:10:22 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() :
	first_name_(""),
	last_name_(""),
	nick_name_(""),
	num_(""),
	secret_("")
{}

void	Contact::setContact(const std::string &first_name, 
							const std::string &last_name, 
							const std::string &nick_name, 
							const std::string &num, 
							const std::string &secret)
{
	first_name_ = first_name;
	last_name_ = last_name;
	nick_name_ = nick_name;
	num_ = num;
	secret_ = secret;
}

std::string	Contact::getFirstName() const
{
	return first_name_;
}

std::string	Contact::getLastName() const
{
	return last_name_;
}

std::string	Contact::getNickName() const
{
	return nick_name_;
}

std::string	Contact::getNumber() const
{
	return num_;
}

std::string	Contact::getSecret() const
{
	return secret_;
}

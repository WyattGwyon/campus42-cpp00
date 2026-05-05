/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:30 by clouden           #+#    #+#             */
/*   Updated: 2026/05/04 21:04:30 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <string>

class	Contact
{
private:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nick_name_;
	std::string	num_;
	std::string	secret_;

public:
	Contact();
//	~Contact();

	void setContact(const std::string &firstname,
					const std::string &lastname,
					const std::string &nickname,
					const std::string &num,
					const std::string &secret);

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getNumber() const;
	std::string	getSecret() const;
};

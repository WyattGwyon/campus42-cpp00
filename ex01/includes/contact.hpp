/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:30 by clouden           #+#    #+#             */
/*   Updated: 2026/05/01 00:23:04 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_num;
	std::string	_secret;

public:
	Contact();
	~Contact();

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:56 by clouden           #+#    #+#             */
/*   Updated: 2026/05/04 17:47:42 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		i;
public:
	PhoneBook();
//	~PhoneBook();
	
	void	addContact();
	void	print(const Contact &c);
};

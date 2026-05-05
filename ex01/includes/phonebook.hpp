/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:14:56 by clouden           #+#    #+#             */
/*   Updated: 2026/05/05 20:36:47 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "contact.hpp"

class PhoneBook
{
private:
	Contact	contacts_[8];
	int		idx_;
	int		cnt_;
public:
	PhoneBook();
//	~PhoneBook();
	
	void	addContact();
	void	table(int &i);
	void	search();
	void	print(const Contact &c);
};

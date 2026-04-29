/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:56:30 by clouden           #+#    #+#             */
/*   Updated: 2026/04/29 15:00:02 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Contact
{
private:
	std::string	_name;
	std::string	_num;

public:
	Contact() {}
	Contact(std::string name, std::string num);
	std::string	get_name() const;
	std::string	get_number() const;
	
};

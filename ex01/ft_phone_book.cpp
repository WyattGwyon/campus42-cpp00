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
///////////////////////////////////////////////////
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
////////////////////////////////////////////////////
class PhoneBook
{
public:
	Contact	con;
	void	addContact(Contact &c);
	void	print(const Contact &c);
};

/////////////////////////////////////////////////////
void	PhoneBook::addContact(Contact &c)
{
	this->con = c;
	std::cout << "add: "<< con.get_name() << con.get_number() << std::endl;

}
void	PhoneBook::print(const Contact &c)
{
	std::cout << c.get_name() << c.get_number() << std::endl;
}

/////////////////////////////////////////////////////
int main(void)
{
	Contact		c;
	PhoneBook	pb;
	std::string	name;
	std::string	num;

	while (true)
	{
		std::cout << "Enter name: ";
		std::cin >> name;
		std::cout << "Enter num: ";
		std::cin >> num;
		c = Contact("clay", "211");
		std::cout << "main " << c.get_name() << std::endl;
		pb = PhoneBook();
		pb.addContact(c);
		pb.print(c);
		std::cout << c.get_name() << std::endl;
	}
	return (0);
}

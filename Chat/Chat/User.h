#pragma once
#include <iostream>


class User
{
public:

	User();

	void setUser() 
	{
		std::string pasword, login, name, surname;

		std::cout << "������� �����: ";
		std::cin >> login;
		std::cout << "������� ������: ";
		std::cin >> pasword;
		std::cout << "������� ���� ���: ";
		std::cin >> name;
		std::cout << "������� ���� �������: ";
		std::cin >> surname;
	}

	~User() = default;

private:

	std::string _pasword;
	std::string _login;
	std::string _name;
	std::string _surname;

};


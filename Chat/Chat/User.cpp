#include "User.h"
#include <iostream>

User::User()
{
	std::cout << "������� �����: " << std::endl;
	std::cin >> _login;
	std::cout << "������� ������: " << std::endl;
	std::cin >> _password;
	std::cout << "������� ���� ���: " << std::endl;
	std::cin >> _name;
	std::cout << "������� ���� �������: " << std::endl;
	std::cin >> _surname;
};

std::string User::getLogin() 
{
	return _login;
}

std::string User::getPassword()
{
	return _password;
}
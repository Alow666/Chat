#include "User.h"
#include <iostream>

User::User()
{
	std::cout << "������� �����: " << std::endl;
	std::cin >> _login;
	std::cout << "������� ������: " << std::endl;
	std::cin >> _pasword;
	std::cout << "������� ���� ���: " << std::endl;
	std::cin >> _name;
	std::cout << "������� ���� �������: " << std::endl;
	std::cin >> _surname;
};

void User::getInfoUser() 
{
	std::cout << _login << std::endl;
}
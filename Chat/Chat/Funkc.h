#pragma once
#include <iostream>
#include "User.h"



User reg() 
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

	return 
}
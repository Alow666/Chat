#pragma once
#include <iostream>
#include "User.h"



User reg() 
{
	std::string pasword, login, name, surname;

	std::cout << "¬ведите логин: ";
	std::cin >> login;
	std::cout << "¬ведите пароль: ";
	std::cin >> pasword;
	std::cout << "¬ведите свое им€: ";
	std::cin >> name;
	std::cout << "¬ведите свою фамилию: ";
	std::cin >> surname;

	return 
}
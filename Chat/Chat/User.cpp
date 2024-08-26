#include "User.h"
#include <iostream>

User::User()
{
	std::cout << "¬ведите логин: " << std::endl;
	std::cin >> _login;
	std::cout << "¬ведите пароль: " << std::endl;
	std::cin >> _password;
	std::cout << "¬ведите ваше им€: " << std::endl;
	std::cin >> _name;
	std::cout << "¬ведите вашу ‘амилию: " << std::endl;
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
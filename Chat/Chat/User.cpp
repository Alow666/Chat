#include "User.h"
#include <iostream>

User::User()
{
	std::cout << "¬ведите логин: " << std::endl;
	std::cin >> _login;
	std::cout << "¬ведите пароль: " << std::endl;
	std::cin >> _pasword;
	std::cout << "¬ведите ваше им€: " << std::endl;
	std::cin >> _name;
	std::cout << "¬ведите вашу ‘амилию: " << std::endl;
	std::cin >> _surname;
};

void User::getInfoUser() 
{
	std::cout << _login << std::endl;
}
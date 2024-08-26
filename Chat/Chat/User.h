#pragma once
#include <iostream>


class User
{
public:

	User();

	void setUser() 
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
	}

	~User() = default;

private:

	std::string _pasword;
	std::string _login;
	std::string _name;
	std::string _surname;

};


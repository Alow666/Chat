#pragma once
#include <iostream>


class User
{
public:

	User();
	std::string getLogin();
	std::string getPassword();
	~User() = default;

private:

	std::string _password;
	std::string _login;
	std::string _name;
	std::string _surname;

};


#include <iostream>
#include <vector>

#include "User.h"
#include "Funkc.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	short int a;
	std::string loginScan;
	bool exit = true;
	std::cout << "Добро пожаловать в чат!" << std::endl;
	std:: vector <User> vectorUser;

	while (exit)
	{
		std::cout << "1)Войти в аккаунт \n2)Зарегистрировать аккаунт \n3)Выйти" << std::endl;
		std::cin >> a;

		switch (a)
		{
		case 1:
			std::cout << "Введите логин: " << std::endl;
			std::cin >> loginScan;
			for ( int i = 0; i < vectorUser.size(); i++)
			{
				
			}
			std::cout << "Введите пароль: " << std::endl;
			/*std::cin >>*/
		case 2:
			vectorUser.push_back(User());
			std::cout << "Теперь вы можете войти в аккаунт." << std::endl;
			continue;
		case 3:
			std::cout << "До скорой встречи!" << std::endl;
			exit = false;
			break;
		default:
			std::cout << "Выберите что то из списка !" << std::endl;
			break;
		}
	}

}
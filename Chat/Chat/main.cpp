#include <iostream>
#include "User.h"
#include "Funkc.h"

static int id{};

int main()
{
	setlocale(LC_ALL, "Rus");
	short int a;
	std::cout << "Добро пожаловать в чат!" << std::endl;

	while (true)
	{
		std::cout << "1)Войти в аккаунт \n2)Зарегистрировать аккаунт \n3)Выйти" << std::endl;
		std::cin >> a;

		switch (a)
		{
		case 1:


		case 2:

			std::cout << "Теперь вы можете войти в аккаунт." << std::endl;
			continue;
		default:
			break;
		}
	}

}
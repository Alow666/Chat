#include <iostream>
#include <vector>

#include "User.h"
#include "Entrance.h"



int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	bool exit = true;
	bool exit2 = false;
	std:: vector <User> vectorUser; //Вектор с пользователями
	std::unique_ptr<Entrance> ptr_Vxod = std::make_unique <Entrance>();// надо походу обычное выделение


	std::cout << "Добро пожаловать в чат!" << std::endl;

	while (exit)
	{
		std::cout << "1)Войти в аккаунт \n2)Зарегистрировать аккаунт \n3)Выйти" << std::endl;
		std::cin >> a;

		switch (a)
	{
		case 1:
			if (vectorUser.size() == 0)//Проверка наличия пользователей
			{
				std::cout << "В чате еще никого нету(" << std::endl;
				continue;
			}

			exit2 = ptr_Vxod->entranceLogin(vectorUser);

			if (exit2 == false)
			{
				continue;
			}

			exit2 = ptr_Vxod->entrancePassword(vectorUser);

			while (exit2) // Управление учеткой 
			{
				



			
				
			}
			continue;




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



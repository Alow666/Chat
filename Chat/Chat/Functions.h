#pragma once
#include <iostream>
#include <vector>
#include "User.h"


void entrance(std::string loginScan, std::string passwordScan, std::vector<User>& other)
{

	short int b;
	for (int i = 0; i < other.size(); i++)
	{
		if (other.size() == 0)
		{
			std::cout << "Пользователей еще нет(" << std::endl;
			exit2 = false;
			break;
		}
		std::cout << "Введите логин: " << std::endl;
		std::cin >> loginScan;

		if (other[i].getLogin() == loginScan)
		{
			std::cout << "Введите пароль: " << std::endl;
			std::cin >> passwordScan;

		}
		if (i == other.size())
		{
			std::cout << "Такого пользователя не существует( \n1)Если хотите выйти\n2)Если хотите продолжить" << std::endl;
			std::cin >> b;
			if (b == 1) { break; }
			if (b > 2 || b < 1)
			{
				for (; b == 1 || b == 2;)
				{
					std::cout << "Введите 1 или 2" << std::endl;
					std::cin >> b;
				}
			}
		}
		if (vectorUser.size() == 0)
		{
			std::cout << "Пользователей еще нет(" << std::endl;
			exit2 = false;
			break;
		}
}


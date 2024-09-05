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
	std:: vector <User> vectorUser; //������ � ��������������
	std::unique_ptr<Entrance> ptr_Vxod = std::make_unique <Entrance>();// ���� ������ ������� ���������


	std::cout << "����� ���������� � ���!" << std::endl;

	while (exit)
	{
		std::cout << "1)����� � ������� \n2)���������������� ������� \n3)�����" << std::endl;
		std::cin >> a;

		switch (a)
	{
		case 1:
			if (vectorUser.size() == 0)//�������� ������� �������������
			{
				std::cout << "� ���� ��� ������ ����(" << std::endl;
				continue;
			}

			exit2 = ptr_Vxod->entranceLogin(vectorUser);

			if (exit2 == false)
			{
				continue;
			}

			exit2 = ptr_Vxod->entrancePassword(vectorUser);

			while (exit2) // ���������� ������� 
			{
				



			
				
			}
			continue;




		case 2:
			vectorUser.push_back(User());
			std::cout << "������ �� ������ ����� � �������." << std::endl;
			continue;
		case 3:
			std::cout << "�� ������ �������!" << std::endl;
			exit = false;
			break;
		default:
			std::cout << "�������� ��� �� �� ������ !" << std::endl;
			break;
		}
	}

}



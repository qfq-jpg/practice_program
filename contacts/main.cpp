#include"contact_manager.h"
#include<iostream>

using namespace std;
void menu();

int main()
{
	contact_manager manager;
	manager.intext();
	int choice = 0;
	int flag = 0;
	while (flag==0)
	{
		menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			manager.show();
			break;
		case 2:
			manager.add();
			break;
		case 3:
			manager.erase();
			break;
		case 4:
			manager.find();
			break;
		case 0:
			flag++;
			break;
		}
	}
	manager.outtext();
}

void menu()
{
	cout <<endl<< "1,ÏÔÊ¾" << endl << "2,Ìí¼Ó" << endl << "3,É¾³ý" << endl << "4,²éÕÒ" << endl;
}
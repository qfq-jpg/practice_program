#include "contact_manager.h"
#include<iostream>
#include<fstream>
using namespace std;


void contact_manager::add()
{
	cout << "添加联系人" << endl << "输入信息:" << endl << endl;
	contact a;
	cout << "名字:";
	cin >> a.name;
	cout << "年龄:";
	cin >> a.age;
	cout << "电话号码:" ;
	cin >> a.phone;
	cout << "性别:";
	cin >> a.gender;
	cout << "住址:";
	cin >> a.address;
	cout  << "邮箱:";
	cin >> a.email;
	contacts.push_back(a);
}
void contact_manager::erase()
{
	cout << "删除联系人" << endl;
	cout << "输入要删除的人的姓名" << endl;
	string y;
	cin >> y;
	for (auto x = contacts.begin();x != contacts.end();)
	{
		if (x->name == y)
		{
			x = contacts.erase(x);
		}
		else
		{
			x++;
		}
	}
}
void contact_manager::show()
{
	cout << "show" << endl;
	for (const contact& x : contacts)
	{
		cout << endl;
		cout << "姓名:" << x.name << endl;
		cout <<"年龄:" << x.age << endl;
		cout <<"性别:" << x.gender << endl;
		cout <<"地址:" << x.address << endl;
		cout <<"电话号码:" << x.phone << endl;
		cout <<"邮件:" << x.email << endl << endl;
	}
}
void contact_manager::find()
{
	cout << "查找联系人" << endl;
	cout << "请输入被查找人的任意一项信息" << endl;
	string y;
	cin >> y;
	int flag = 0;
	for (const contact &x : contacts)
	{
		if (x.name == y || x.age == y || x.phone == y || x.email == y || x.gender == y || x.address == y)
		{
			flag = 1;
			cout << endl;
			cout << "姓名:" << x.name << endl;
			cout << "年龄:" << x.age << endl;
			cout << "性别:" << x.gender << endl;
			cout << "地址:" << x.address << endl;
			cout << "电话号码:" << x.phone << endl;
			cout << "邮件:" << x.email << endl << endl;
		}
	}
	if (flag == 0)
	{
		cout << "没有这个人" << endl;
	}
}
void contact_manager::outtext()
{
	ofstream outFile("contacts.txt");
	for (const contact& x : contacts)
	{
		outFile <<x.name << endl;
		outFile << x.gender << endl;
		outFile << x.age << endl;
		outFile << x.email << endl;
		outFile << x.address << endl;
		outFile << x.phone << endl;
	}
	outFile.close();
}
void contact_manager::intext()
{
	ifstream inFile("contacts.txt");
	contact a;
	while (inFile >> a.name >> a.gender >> a.age >> a.email >> a.address >> a.phone)
	{
		contacts.push_back(a);
	}
	inFile.close();
}
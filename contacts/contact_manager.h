#pragma once
#include<string>
#include<vector>
#include "contact.h"

class contact_manager
{
private:
	std::vector<contact> contacts;
public:
	void add();
	void show();
	void find();
	void erase();
	void change();
	void outtext();
	void intext();
};
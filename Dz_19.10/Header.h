#pragma once
#include <iostream>
#include <fstream>
#include "Header1.h"
using namespace std;

void search_by_company(const char* a)
{
	ifstream in;
	in.open("Book.txt");
	cout << "We found: \n";
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		if (strstr(buf, check))
		{
			if (strstr(buf, a))
			{
				cout << endl;
				cout << buf << endl;
			}
		}
	} while (in);
	in.close();
}

void search_by_name(const char* a)
{
	ifstream in;
	in.open("Book.txt");
	cout << "We found:\n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Name:";
		if (strstr(buf, check))
		{
			strncpy(buf_check, buf, size);
		}
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_address(const char* a)
{
	ifstream in;
	in.open("Book.txt");
	cout << "We found: \n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Address:";

		if (strstr(buf, check))
		{
			strncpy(buf_check, buf, size);
		}
		if (strstr(buf, check2))
		{
			if (strstr(buf, a))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
		}
	} while (in);

	in.close();
}

void search_by_type(const char* a)
{
	ifstream in;
	in.open("Book.txt");
	cout << "We found: \n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Type:";
		if (strstr(buf, check))
		{
			strncpy(buf_check, buf, size);
		}
		if (strstr(buf, check2))
		{
			if (strstr(buf, a))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
		}
	} while (in);

	in.close();
}

void search_by_num(int a)
{
	ifstream in;
	in.open("Book.txt");
	cout << "We found: \n";
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		in.getline(buf, size);
		const char check[] = "Company:";
		const char check2[] = "Number:";
		if (strstr(buf, check))
		{
			strncpy(buf_check, buf, size);
		}
		if (strstr(buf, check2))
		{
			if (strstr(buf, buf_num))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
		}
	} while (in);
	in.close();
}

void PrintFile()
{
	ifstream in;
	in.open("Book.txt");
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		cout << buf << endl;
	} while (in);
	in.close();
}
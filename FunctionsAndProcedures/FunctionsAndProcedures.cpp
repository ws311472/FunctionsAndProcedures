// FunctionsAndProcedures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

void Welcome()
{
	cout << "	Welcome to life." << endl;
}

int SetNo()
{

	int iNum = 0;
	cout << "	Please enter the Number: " << endl;
	cin >> iNum;
	return iNum;
}

void Menu(int iNum1, int iNum2);
{
	cout << "	Please select Option:" << endl;
	cin >> iMenu;
	cout << "1. Add" << endl;

	int iMenu = 0;

	switch (iMenu)
	{
	case 1:
		cout << "The Total is:" << iNum1 + iNum2 << endl;
		break;
	default:
		cout << "Input not recognised." << endl;
		break;
	}

}

int main()
{
	Welcome();

	int iNum1 = 0, iNum2 = 0;

	iNum1 = SetNo();
	iNum2 = SetNo();

	Menu(int iNum1, int iNum2);
}
// FunctionsAndProcedures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "	Welcome to life." << endl;
	int iNum1 = 0, iNum2 = 0;
	
	cout << "	Please enter Number 1: " << endl;
	cin >> iNum1;

	cout << "	Please enter Number 2: " << endl;
	cin >> iNum2;

	cout << "	Please select Option:" << endl;
	cout << "1. Add" << endl;

	int iMenu;

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


// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void star()
{
	cout << "This is lab 4" << endl;
	cout << "Nik Nor Alifah Ilyana,Do Exercise" << endl;
}
int main()
{

	star();
	float price=9.90,totalprice=0;
	int quantity=0;
	const int DISC=10;

	cout << "Enter quantity : ";
	cin >> quantity;
	totalprice = (price*quantity)*(100 - DISC) / 100.0;
	cout << "Total price : " << totalprice << endl;
}
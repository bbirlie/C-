/*
File: Pay.cpp
Name: Brandon Birlie
Date: 15/09/20
ID: 100408292
Section: S10
Lab #1
Purpose: This program is designed to calculate the employee's pay based on their hourly rate and the amount of hours worked.
*/


#include <iostream>

using namespace std;

int main() {

	cout << "Calculation of and employee's pay\n";
	cout << "=================================\n";

	double hours;
	double payRate;
	double totalPay;

	cout << "How many hours did you work?\n";
	cin >> hours;

	cout << "How much is your hourly rate?\n";
	cin >> payRate;

	totalPay = hours * payRate;

	cout << "Your total pay is $" << totalPay << endl << endl;

	cout << "Brandon Birlie, INFO 1112 S10" << endl << endl;

	system("pause");
	return 0;
}
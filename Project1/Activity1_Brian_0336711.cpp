/*#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void menu() 
{
	cout << "1. 24-hour notation to 12-hour notation" << endl;
	cout << "2. 12-hour notation to 24-hour notation" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your selection: ";
}

int selection()
{
	int selection;
	cin >> selection;

	return selection;
}

void n24ton12(int &time12, int time24, string ampm)
{
	time24 = time12 % 12;
	
	if (time24 > 12)
		ampm = "pm";
	else
		ampm = "am";

	if (time12 == 0)
		time12 = 12;

}

void n12ton24(int time12, string ampm, int &time24)
{
	if (ampm == "am")
		time24 = time12;
	else
		time24 = time12 + 12;
}

void function(int select)
{
	int 
}*/
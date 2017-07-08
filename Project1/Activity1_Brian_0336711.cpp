#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void menu() 
{
	cout << endl<< "1. 24-hour notation to 12-hour notation" << endl;
	cout << "2. 12-hour notation to 24-hour notation" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your selection: ";
}

string restart()
{
	string x;
	cout << endl<< "Do you want to try again? yes/no" << endl;
	cin >> x;
	return x;
}

int selection()
{
	int selection;
	cin >> selection;

	return selection;
}

void n24ton12(int &time12, int time24, string &ampm)
{
	time12 = time24 % 12;
	
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
	int min;
	int sec;
	int time12;
	int time24;
	string ampm;

	switch (select)
	{
		case 1:  //24-12
			cout << "Please enter hour : ";
			cin >> time24;
			cout << "Please enter min: ";
			cin >> min;
			cout << "Please enter sec: ";
			cin >> sec;

			if (time24>=0 || time24<25)
			{
				n24ton12(time12, time24, ampm);
			}
			cout << "The time is " << time12 <<":"<<min<<":"<<sec << ampm << endl;
			break;
		case 2:   //12-24
			cout << "Please enter the time: ";
			cin >> time12;
			cout << "Please enter min: ";
			cin >> min;
			cout << "Please enter sec: ";
			cin >> sec;
			cout << "am/pm? ";
			cin >> ampm;
			if (time12>=0 ||time12<=12)
			{
				n12ton24(time12, ampm, time24);
			}
			cout << "The time is " << time24 <<":"<<min<<":"<<sec<< endl;
			break;
		case 3:
			cout << "Thank you for using!" << endl;
			break;
		
	}
}

void main()
{
	int select;
	string x;
	do 
	{
		menu();
		select = selection();
		function(select);
		x = restart();
	} while (x == "yes");
	
	system("pause");
	

}
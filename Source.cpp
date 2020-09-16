//***************************************
//***************************************
/*
* Nicholas Olesen
* C++ 2020
* Due: September 14th 2020
* Lab 2 Exploring Output
* To get used to outputting to the command prompt using C++
*/
//****************************************
//****************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string Day1 = "Monday		"; 
	const string Day2 = "Tuesday		";   //I'm asigning my classes to string variables. 
	const string Day3 = "Wednesday	";
	const string Day5 = "Friday		";
	const string Calc = "8:00 - 9:30	  Calculus";
	const string Music = "11:00 - 12:30	Music Appreciation";
	const string C = "1:30 - 2:30 C++  ";
	const string Eng = "	9:00 - 10:30 Engineering Problems";

		const string Second = "*       *       *       *";  //These are my checkerboard pattern being assigned to string variables. 
		const string First = "    *       *       *       *";

	cout << Day1 << Calc << endl;
	cout << Day1 << Music << endl;    //Here I am displaying the lines to the screen for my schedule. 
	cout << Day1 << C << endl;
	cout << Day2 << C << endl;
	cout << Day2 << Eng << endl;
	cout << Day3 << Music << endl;
	cout << Day3 << Calc << endl;
	cout << Day5 << Calc << endl;

	cout << First << endl << Second << endl << First << endl << Second << endl << First << endl << Second << endl << First << endl << Second << endl;
	                                // Above are is my checkerboard pattern being displayed to the screen. 
}



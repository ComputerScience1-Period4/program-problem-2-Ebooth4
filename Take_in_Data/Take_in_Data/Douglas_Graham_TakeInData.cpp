/*
Douglas Graham 9/27/2017 Period 4
Assignment Name: Take in Data
Introduction to C++ Visual Studios
*/

// Libraries
#include <iostream> // This gives access to cin, cout, end, <<, >>, boolalpha, noboolalpha
#include <conio.h> // This gives access to _kbhit() and _getch() for pause()
#include <string>
#include <thread>
#include <chrono>


// Namespaces
using namespace std;


string name;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	int age;
	char last_name;
	int feeling;
	double math;
	char Y_N;

	cout << "Hello World!" << endl;
	cout << "I am the computer XD" << endl;
	cout << " " << endl;
	cout << "Please enter your first name." << endl;
	cout << " " << endl;
	cout << "Name: " << endl;
	cin >> name;
	cout << " " << endl;
	cout << "Hello" << " " << name << "!" << endl;
	cout << " " << endl;
	cout << "How old are you " << name << " (in years)" << endl;
	cin >> age;
	cout << " " << endl;
	cout << "Wow I have never met a " << age << " year old" << endl;
	cout << "Ok, " << name << " what is the first initial of your last name?" << endl;
	cin >> last_name;
	cout << " " << endl;
	cout << "Hello, " << name << " " << last_name << ", who is " << age << " years old" << endl;
	cout << " " << endl;
	cout << "How are you. Please enter 1,2, or 3 (Good = 1, Bad = 2, or Unsure = 3)" << endl;
	cin >> feeling;
	cout << " " << endl;
	if (feeling == 1) {
		cout << "That's good" << endl;
	}
	else if (feeling == 2) {
		cout << "Well that's too bad" << endl;
	}
	else if (feeling == 3) {
		cout << "Well that's a predicament" << endl;
	}
	cout << " " << endl;
	cout << "Are you good at math? Y (Yes) or N (No)." << endl;
	cin >> Y_N;
	cout << "Ok, what is 1.3 + 2.5" << endl;
	cin >> math;
	if (math = 3.8) {
		cout << "Good job! You aren't a waste of time!" << endl;
	}
	else {
		cout << "I can't believe you are this dumb. I'm upset with you" << endl;
	}
	this_thread::sleep_for(chrono::seconds(2));
	cout << "I have to go now bye!" << endl;

	pause();
	return;
}
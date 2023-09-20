// Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
	// The rest of this function is an exercise to the reader
}
void firstChoice(float A, float B) {
	float C;
	C = A + B;
	std::cout << "\n" << A << "+" << B << " = " << C << "\n";
}
void secondChoice(float A, float B) {
	float C;
	C = A - B;
	std::cout << "\n" << A << "-" << B << " = " << C << "\n";
}
void thirdChoice(float A, float B) {
	float C;
	C = A * B;
	std::cout << "\n" << A << "*" << B << " = " << C << "\n";
}
void fourthChoice(float A, float B) {
	float C;
	C = A / B;
	std::cout << "\n" << A << "/" << B << " = " << C << "\n";
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 2) {
		fourthChoice(A, B);
	}
	return 0;
}


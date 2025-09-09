/*
Programmer: Cameron Bush
8/19/25
Description: Hello World program
*/

#include <iostream>

using namespace std;

int main(void)
{ 
	char letter = 'A'+32;
	int number = 0b10101;
	float f_number = 6.2;

	string fname = "bob";
	string lname = "bober";
	char middlei = 'b';
	int age = 300;
	double gpa = 1.3;
	//char letter = 65; 

	cout << "The size of char letter is" << sizeof (char) << " bytes " << endl;
	cout << letter << endl;
	cout << "Hello \n World!" << endl;
	printf("f_number = %.2f", f_number);

	cout << "name: " << fname << ' ' << middlei << ' ' << lname << " " << endl;
	cout << fname << "is" << age << "years old" << endl;
	cout << fname << " 's gpa is " << gpa << '\n';
    
	string line1 = "   /\"\\";
	string line2 = "  /@ @\\"; 
	string line3 = "   ====";
	string line4 = "    || ";

	cout << line1 << endl << line2 << endl << "Corndawg! " << endl << line3 << endl << line4 << endl;

	return 0;
}
/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: Cameron Bush #FIXed
    Date: 9/9/2025 #FIXED
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXED: declare a variable to store name
    string name;
    string semester = "Fall";
    int semesterYear = 2025;
    //FIXED: prompt user to enter their name and store the value into name variable using getline function
    cout << "Enter your name: ";
    getline(cin,name);

    /*
    int nameLength = name.length();
    int nameAndSpacesLength = 13;
    int spaces = nameAndSpacesLength - nameLength;
    
    string gapAfterName = "";
    for (int i = 0; i < spaces; i++) {
        gapAfterName += " ";
    }
    */

    //FIXED: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>!
    cout << "Nice meeting you, " << name << "!" << endl;

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "  |\\_/|   **********************      (\\_/)\n";
    cout << line1;

    string line2 = " / @ @ \\  *     ASCII Lab      *     (='.'=)\n";
    cout << line2;

    string line3 = "( > 0 < ) *     " + name + "         *   ( \" )_( \" )\n"; //string line3 = "( > 0 < ) *       " + name + gapAfterName + "       *   ( \" )_( \" )\n"; 
    cout << line3;

    string line4 = "  >>x<<   *     " + semester + " " + to_string(semesterYear)  + "      *\n";
    cout << line4;

    string line5 = "  / O \\   *     CSCI 130       *\n";
    cout << line5;

    string line6 = "          **********************\n";
    cout << line6;

    //FIXED: use variable to print the second line line of the graphic
    //FIXED: print the third line of the graphics
    //FIXED: use variable to print the fourth line
    //FIXED: use variable to print the fifth line
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input
    
    cin.ignore();
    cin.get();
    
    return 0; //exit program by returning 0 status to the system
}
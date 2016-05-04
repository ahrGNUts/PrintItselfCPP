#include <iostream>
#include <fstream>
#include <sstream>
#include <conio.h>
using namespace std;

int main(){
	fstream self;

	self.open("main.cpp", ios::in);

	if(!self)
		cout << "There was a problem opening the file\n.";
	else
	{
		string line;

		while(getline(self, line))
		{
			stringstream linestream(line);

			getline(linestream, line, '\n');
			cout << line << endl;
		}// end while
	}// end if

	cout << "Press any key to continue...";
	_getch();
}// end main
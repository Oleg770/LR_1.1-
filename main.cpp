#include <iostream>
#include "Line.h"
using namespace std;

int main()
{ 
	Line L3;
	try {
		L3 = MakeLine(11, 22);
	}
	catch (const char* msg) {
		return 1; // за умовою завдання зробити вихід
	}
	L3.Display();



	Line L1;
	L1.Display();

	try {
		L1.Read();
	}
	catch (const char* msg) {
		cout << msg << endl; // тут просто друкуємо повідомлення, що це константа
	}


	L1.Display();

	Line L2(7, 3);
	L2.Display();




	cout << "\n\n";system("pause"); // нужно для вижул только

	return 0; 
}
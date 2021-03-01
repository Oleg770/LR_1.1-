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
		return 1; // �� ������ �������� ������� �����
	}
	L3.Display();



	Line L1;
	L1.Display();

	try {
		L1.Read();
	}
	catch (const char* msg) {
		cout << msg << endl; // ��� ������ ������� �����������, �� �� ���������
	}


	L1.Display();

	Line L2(7, 3);
	L2.Display();




	cout << "\n\n";system("pause"); // ����� ��� ����� ������

	return 0; 
}
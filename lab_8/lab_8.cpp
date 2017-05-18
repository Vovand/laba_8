// lab_8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Mark.h"

using namespace std;

int main()
{
	Mark mark(5);
	
	mark.show();
	mark = 2 + mark;
	cout << "mark=" << mark << endl;
	cin >> mark;
	mark.show();
	mark = mark * 2;
	mark.show();
	mark = 2 * mark;
	mark.show();
    return 0;
}


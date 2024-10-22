#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number=100;
	cout << "A leaf is on the ground." << endl;
	for (int i = 1; i < number; i++) {
		cout << "Another leaf falls " << i << " leaves is on the ground." << endl;
		if (i == 20) 
		{ 
			break; 
		}
	
	}
	cout << "All of the leaves have fallen down." <<endl;
}



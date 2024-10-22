#include <iostream>
#include <string>

using namespace std;

int main()
{
	int LeafNumber;
	cout << "How many leaves are there on the tree?" <<endl;
	cin >> LeafNumber;
	cout << "A leaf is on the ground." << endl;
	for (int i = 1; i < LeafNumber; i++) {
		cout << "Another leaf falls, " << i << " leaves is on the ground." << endl;
		if (i == LeafNumber) 
		{ 
			break; 
		}
	
	}
	cout << "All of the leaves have fallen down." <<endl;
}



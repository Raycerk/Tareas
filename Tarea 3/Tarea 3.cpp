#include <iostream>
using namespace std;

int main()
{
	int diag = 0;
	int lad = 0;
	
	cout << "Inserte el numero de lados de la figura: ";
	cin >> lad;
	
	diag= (lad*(lad-3))/2;
	
	cout << "El numero de diagonales de la figura son: " << diag << endl;
	
	system: ("Pause");
}

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float rad;
	float ang;
	float x;
	float y;
	
	cout << "Introduzca el radio de las coordenadas: ";
	cin >> rad;
	
	cout << "\nIntroduzca el angulo de las coordenadas: ";
	cin >> ang;
	
	x = rad*cos(ang);
	y = rad*sin(ang);
	
	x = round(x);
	y = round(y);
	
	cout << "\nLas coordenadas son: (" << x << ", " << y << ")" << endl;
	
	
	
	system("pause");
	
}

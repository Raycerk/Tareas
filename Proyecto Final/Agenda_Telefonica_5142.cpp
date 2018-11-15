#include <iostream>
#include <string.h>

using namespace std;

int registrar();
int editar();
int mostrar();
int borrar();

int cant = 0;
string busqueda;
int sel = 0;

struct alumnos
{
	string nombre;
	string apellido;
	string matricula;
	string telefono;
	string email;
}x[100];

int main ()
{
	int ele;
	
	system ("cls");
	
	cout << "MENU." << endl << endl;
	cout << "1. Registrar alumno." << endl;
	cout << "2. Editar alumno." << endl;
	cout << "3. Mostrar alumnos." << endl;
	cout << "4. Borrar alumno." << endl;
	cout << "5. Salir del pograma." << endl << endl;
	
	cout << "Elige la opcion que deseas ejecutar." << endl;
	cout << "Eleccion: ";
	cin >> ele;
	
	switch(ele)
	{
	case 1:
		registrar();
		break;
		
	case 2:
		editar();
		break;
	
	case 3:
		mostrar();
		break;
		
	case 4:
		borrar();
		break;	
	
	case 5:
		return 0;
		break;
	}
}

int registrar ()
{
	int des;
	
	des = 1;
	
	while (des==1)
	{
		system("cls");
		
		cout << "Registrar alumno." << endl << endl;
		
		cout << "Introduza nombre del alumno:" << endl;
		getchar();
		getline(cin, x[cant].nombre);
		system("cls");
		
		cout << "Introduzca apellido del alumno:" << endl;
		getline(cin, x[cant].apellido);
		system("cls");
		
		cout << "Introduzca matricula del alumno:" << endl;
		getline(cin, x[cant].matricula);
		system("cls");
		
		cout << "Introduzca telefono del alumno:" << endl;
		getline(cin, x[cant].telefono);
		system("cls");
		
		cout << "Introduzca email del alumno:" << endl;
		getline(cin, x[cant].email);
		system("cls");
		
		cant++;
		
		cout << "�Quieres registrar mas alumnos?" << endl;
		cout << "1.Si\n2.No" << endl;
		cin >> des;
	}
	
	main ();
}

int editar ()
{
	system ("cls");
	
	cout << "Editar alumno." << endl << endl;
	cout << "Introduzca matricula a buscar:" << endl;
	cin.ignore();
	getline (cin,busqueda);
	
	for(int i=0;i<cant;i++)
	{
		if(busqueda == x[i].matricula)
		{
			cout << x[i].nombre << " " << x[i].apellido << " " << x[i].matricula << " " << x[i].telefono  << " " << x[i].email << endl << endl;
			cout << "�Que dato deseas editar de este alumno?" <<endl << endl;
			cout << "1.Nombre\n2.Apellido\n3.Matricula\n4.Telefono\n5.Email\nOtro valor.Cancelar\n";
			cin >> sel;
			
			switch(sel)
			{
			case 1:
				cout << "Inserte nuevo nombre:" << endl;
				cin.ignore();
				getline (cin,x[i].nombre);
				
				cout << "Nuevo nombre aplicado." << endl;
				
				break;
			case 2:
				cout << "Inserte nuevo apellido:" << endl;
				cin.ignore();
				getline (cin,x[i].apellido);
				
				cout << "Nuevo apellido aplicado." << endl;
				
				break;
			case 3:
				cout << "Inserte nueva matricula:" << endl;
				cin.ignore();
				getline (cin,x[i].matricula);
				
				cout << "Nueva matricula aplicada." << endl;
				
				break;
			case 4:
				cout << "Inserte nuevo telefono:" << endl;
				cin.ignore();
				getline (cin,x[i].telefono);
				
				cout << "Nuevo telefono aplicado." << endl;
				break;
			case 5:
				cout << "Inserte nuevo Email:" << endl;
				cin.ignore();
				getline (cin,x[i].email);
				
				cout << "Nuevo Email aplicado." << endl;
				
				break;
			default:
				main();
			}
		}
		else
		{
			cout << "No se encontraron resultados que coincidan con la busqueda." << endl << endl;
		}
	}
	
	system ("pause");
	
	main ();
}


int mostrar ()
{
	system ("cls");
	
	cout << "Mostrar alumnos." << endl << endl;
	
	
	for(int i=0;i<cant;i++)
	{
	cout << x[i].nombre << " " << x[i].apellido << " " << x[i].matricula << " " << x[i].telefono  << " " << x[i].email << endl << endl;   
	}
	
	
	system ("pause");
	
	main ();
}


int borrar ()
{
	system ("cls");
	
	cout << "Borrar alumno." << endl;
	cout << "Introduzca matricula a buscar:" << endl;
	cin.ignore();
	getline (cin,busqueda);
	
	for(int i=0;i<cant;i++)
	{
		if(busqueda == x[i].matricula)
		{
			cout << x[i].nombre << " " << x[i].apellido << " " << x[i].matricula << " " << x[i].telefono  << " " << x[i].email << endl << endl;
			cout << "�Seguro de que desea borrar este alumno del registro?\n1.Si\n2.No\n";
			cin >> sel;
			switch(sel)
			{
			case 1:
				x[i].nombre = " ";
				x[i].apellido = " ";
				x[i].matricula = " ";				
				x[i].telefono = " ";
				x[i].email = " ";
				
				cout << "\nRegistro del alumno borrado.";
				
				break;
			case 2:
				main();
				break;
			}
			
		}
		else
		{
			cout << "No se encontraron resultados que coincidan con la busqueda." << endl << endl;
		}
		
	}
	
	system ("pause");
	
	main ();
}

















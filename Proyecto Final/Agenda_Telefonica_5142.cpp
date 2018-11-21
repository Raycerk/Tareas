#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int registrar();
int editar();
int mostrar();
int borrar();
int lista();
int manual();

int cant = 0;
string busqueda;
int sel = 0;

int valtel = 0;
int conftel = 0;

int confemail = 0;
int puntos = 0;
int arrobas = 0;

int confcal1 = 0;
int confcal2 = 0;
int confcal3 = 0;

struct alumnos
{
	string nombre;
	string apellido;
	string matricula;
	string telefono;
	string email;
	float cal1;
	float cal2;
	float cal3;
	float calfinal;
	string domcalle;
	string domnum;
	string domcol;
	
}x[100];

int main ()
{
	ofstream archivo;
	archivo.open ("Registro.txt");
	
	int ele;
	
	conftel = 0;
	confemail = 0;
	confcal1 = 0;
	confcal2 = 0;
	confcal3 = 0;
	
	system ("cls");
	
	cout << "MENU." << endl << endl;
	cout << "1. Registrar alumno." << endl;
	cout << "2. Editar alumno." << endl;
	cout << "3. Mostrar alumnos." << endl;
	cout << "4. Borrar alumno." << endl;
	cout << "5. Lista de alumnos." << endl;
	cout << "6. Manual de usuario." << endl;
	cout << "7. Salir del pograma." << endl << endl;
	
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
		lista();
		break;		
	
	case 6:
		manual();
		break;		
	
	case 7:
		return 0;
		break;
	default:
		cout << "Valor fuera de rango" << endl;
		system ("pause");
		main();
	}	

	for(int i=0;i<cant;i++)
	{
	archivo << x[i].nombre << " " << x[i].apellido << " " << x[i].matricula << " " << x[i].telefono  << " " << x[i].email << endl << endl;   
	}
	
	archivo.close();
	
}

int registrar ()
{
	int des;
	
	des = 1;
	
	while (des==1)
	{
	
		conftel = 0;
		confemail = 0;
		confcal1 = 0;
		confcal2 = 0;
		confcal3 = 0;
	
		system("cls");
		
		cout << "Registrar alumno." << endl << endl;
		
		cout << "Introduzca nombre del alumno:" << endl;
		getchar();
		getline(cin, x[cant].nombre);
		system("cls");
		
		cout << "Introduzca apellido del alumno:" << endl;
		getline(cin, x[cant].apellido);
		system("cls");
		
		cout << "Introduzca matricula del alumno:" << endl;
		getline(cin, x[cant].matricula);
		system("cls");
		
		while (conftel == 0)
		{
			cout << "Introduzca telefono del alumno:" << endl;
			getline(cin, x[cant].telefono);
			valtel = (x[cant].telefono).size();
			if (valtel >= 8 && valtel <= 11)
				{
					conftel = 1;
				}
			else
				{
					cout << "El telefono no esta dentro del rango de digitos 8 a 11" << endl;
					system ("pause");
				}
			system("cls");
		}
		
		while (confemail == 0)
		{
			system ("cls");
			arrobas = 0;
			puntos = 0;
			
			cout << "Introduzca email del alumno:" << endl;
			getline(cin, x[cant].email);
		
			for (int i = 0; x[cant].email[i] != NULL; i++) 
			{
				if (x[cant].email[i] == 64) 
				{
					arrobas++;
				}
			
				if (x[cant].email[i] == 46)
				{
					puntos++;
				}
			}
		
			if(arrobas == 0)
			{
				cout << "No hay ninguna arroba presente." << endl;
			}
		
			if(puntos == 0)
			{
				cout << "No hay ningun punto presente." << endl;
			}
		
			if(arrobas > 1)
			{
				cout << "Hay mas de una arroba presente." << endl;
			}
		
			if(puntos > 1)
			{
				cout << "Hay mas de un punto presente." << endl;
			}
		
			if(arrobas == 1 && puntos == 1)
			{
				confemail = 1;
			}
			
			if(confemail == 0)
			{
			system ("pause");
			}
			
		}	
		
		system("cls");
		
		while(confcal1 == 0)
		{
			cout << "Introduza calificacion 1 del alumno:" << endl;
			cin >> x[cant].cal1;
			
			if (x[cant].cal1 > 0 && x[cant].cal1 < 100)
				{
					confcal1 = 1;
				}
			else
				{
					cout << "Solo se admiten valores del 0 al 100" << endl;
					system ("pause");
					editar();
				}
			
			system("cls");
		}
		
		while(confcal2 == 0)
		{
			cout << "Introduza calificacion 2 del alumno:" << endl;
			cin >> x[cant].cal2;
			
			if (x[cant].cal2 > 0 && x[cant].cal2 < 100)
				{
					confcal2 = 1;
				}
			else
				{
					cout << "Solo se admiten valores del 0 al 100" << endl;
					system ("pause");
					editar();
				}
			
			system("cls");
		}
		
		while(confcal3 == 0)
		{
			cout << "Introduza calificacion 3 del alumno:" << endl;
			cin >> x[cant].cal3;
			
			if (x[cant].cal3 > 0 && x[cant].cal3 < 100)
				{
					confcal3 = 1;
				}
			else
				{
					cout << "Solo se admiten valores del 0 al 100" << endl;
					system ("pause");
					editar();
				}
			
			system("cls");
		}
		
		x[cant].calfinal = (x[cant].cal1 * 0.3) + (x[cant].cal2 * 0.45) + (x[cant].cal3 * 0.25);
	
		cout << "Introduzca el domicilio del alumno:" << endl;
		cout << "Calle:" << endl;
		getchar();
		getline(cin, x[cant].domcalle);
		
		cout << "Numero:" << endl;
		getchar();
		getline(cin, x[cant].domnum);
		
		cout << "Colonia:" << endl;
		getchar();
		getline(cin, x[cant].domcol);
		
	
		system("cls");
		
		cant++;
		
		cout << "¿Quieres registrar mas alumnos?" << endl;
		cout << "1.Si\nCualquier otro valor.No" << endl;
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
			cout << "¿Que dato deseas editar de este alumno?" <<endl << endl;
			cout << "1.Nombre\n2.Apellido\n3.Matricula\n4.Telefono\n5.Email\n6.Calificaciones\nOtro valor.Cancelar\n";
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
				
				while (conftel == 0)
				{
					cout << "Inserte nuevo telefono:" << endl;
					getline(cin, x[i].telefono);
					valtel = (x[i].telefono).size();
					if (valtel >= 8 && valtel <= 11)
						{
							conftel = 1;
						}
					else
						{
							cout << "El telefono no esta dentro del rango de digitos 8 a 11" << endl;
							system ("pause");
						}
					system("cls");
				}
				
				cout << "Nuevo telefono aplicado." << endl;
				
				break;
			case 5:		
				while (confemail == 0)
				{
					system ("cls");
					arrobas = 0;
					puntos = 0;
			
					cout << "Inserte nuevo email:" << endl;
					getline(cin, x[cant].email);
		
					for (int i = 0; x[cant].email[i] != NULL; i++) 
					{
						if (x[cant].email[i] == 64) 
						{
							arrobas++;
						}
			
						if (x[cant].email[i] == 46)
						{
							puntos++;
						}
					}
		
					if(arrobas == 0)
					{
						cout << "No hay ninguna arroba presente." << endl;
					}
		
					if(puntos == 0)
					{
						cout << "No hay ningun punto presente." << endl;
					}
		
					if(arrobas > 1)
					{
						cout << "Hay mas de una arroba presente." << endl;
					}
		
					if(puntos > 1)
					{		
						cout << "Hay mas de un punto presente." << endl;
					}		
		
					if(arrobas == 1 && puntos == 1)
					{
						confemail = 1;
					}
			
				}
					
				cout << "Nuevo Email aplicado." << endl;
				
				break;
			case 6:
			
				while(confcal1 == 0)
				{
				cout << "Introduza nueva calificacion 1 del alumno:" << endl;
				cin >> x[cant].cal1;
			
				if (x[cant].cal1 > 0 && x[cant].cal1 < 100)
					{
						confcal1 = 1;
					}
				else
					{
						cout << "Solo se admiten valores del 0 al 100" << endl;
						system ("pause");
					}
			
				system("cls");
				}
		
				while(confcal2 == 0)
				{
				cout << "Introduza nueva calificacion 2 del alumno:" << endl;
				cin >> x[cant].cal2;
			
				if (x[cant].cal2 > 0 && x[cant].cal2 < 100)
				{
					confcal2 = 1;
				}
				else
				{
					cout << "Solo se admiten valores del 0 al 100" << endl;
					system ("pause");
				}
			
				system("cls");
				}
		
				while(confcal3 == 0)
				{
				cout << "Introduza nueva calificacion 3 del alumno:" << endl;
				cin >> x[cant].cal3;
			
				if (x[cant].cal3 > 0 && x[cant].cal3 < 100)
					{
						confcal3 = 1;
					}
				else
					{
						cout << "Solo se admiten valores del 0 al 100" << endl;
						system ("pause");
					}
			
				system("cls");
				}
				
				x[cant].calfinal = (x[cant].cal1 * 0.3) + (x[cant].cal2 * 0.45) + (x[cant].cal3 * 0.25);
				break;
			
			default:
				main();
				break;
			}
		}
		else if (i == cant)
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

int lista ()
{
	system("cls");
	
	for(int i=0;i<cant;i++)
	{
	cout << x[i].nombre << " " << x[i].apellido << " ";   
	if (x[i].cal1 < 100.1)
		{
			cout<< x[i].cal1 << " " <<  x[i].cal2 << " " << x[i].cal3 << " " << x[i].calfinal << endl << endl;
		}
	}
	main();
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
			cout << "¿Seguro de que desea borrar este alumno del registro?\n1.Si\n2.No\n";
			cin >> sel;
			switch(sel)
			{
			case 1:
				x[i].nombre = " ";
				x[i].apellido = " ";
				x[i].matricula = " ";				
				x[i].telefono = " ";
				x[i].email = " ";
				x[i].cal1 = 101;
				x[i].cal2 = 101;
				x[i].cal3 = 101;
				
				cout << "\nRegistro del alumno borrado.";
				
				break;
			case 2:
				main();
				break;
			}
			
		}
		else if (i == cant)
		{
			cout << "No se encontraron resultados que coincidan con la busqueda." << endl << endl;
		}
		
	}
	
	system ("pause");
	
	main ();
}



int manual ()
{
	system("cls");
	cout << "MANUAL DE USUARIO.\n\n\nEn este manual se explica como darle uso a este pograma.\n\n¿Cual es el proposito de este programa?\nPoder tener un registro de los datos y control de las calificaciones de los alumnos que se deseen registrar por el usuario.\n\n¿Como se le da uso a este programa?\nAl estar en la pantalla del menu principal, inserte el numero de la opcion correspondiente a lo que desee realizar.\n\nOPCION REGISTRAR.\nEn esta opcion, es capaz de introducir un alumno al registro, capturando sus datos personales, y sus calificaciones.\n\nOPCION EDITAR.\nEn esta opcion se le permite cambiar cualquiera de los datos de un alumno ya registrado.\n\nOPCION MOSTRAR.\nEn esta opcion puede visualizar en forma de lista a todos los alumnos registrados con sus respectivos datos personales\n\nOPCION BORRAR.\nEsta opcion se encarga de elminar el registro de un alumno, incluyendo todos sus datos y calificaciones.\n\nOPCION LISTA.\nEn esta opcion se desplega un listado de todos los alumnos con sus respectivas calificaciones y promedio final.\n\nOPCION MANUAL.\nDesplega el manual de usuario, el que esta leyendo ahora mismo.\n\nOPCION SALIR.\nAl seleccionar esta opcion el pograma termina, y sale del mismo.\n\n";                                                                                                                             
	system("pause");
	main();
}













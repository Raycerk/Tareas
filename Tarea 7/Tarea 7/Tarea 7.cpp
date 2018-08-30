
//No se porque hice esto tan largo, JAJA.
//Me diverti bastante, tomelo como un regalo(?
//Diviertase~

#include <iostream>
using namespace std;

int opcion;
int opciondos;
int opciontres;

void entrada();
void casa();
void sotano();

int main() 
{
	cout << "Te encuentras frente a la puerta de la casa, preguntandote, si entrar es una buena idea." << endl;
	system ("pause");
	system ("cls");
	entrada();

	cout << "GRACIAS POR JUGAR.\nPRESENTADO POR CAPCOM.\nGAME OVER." << endl;
	cout << "Creditos:\nDavid (Programador)\nProfe Jose (Motivarme a hacer esta cosa, jeje)" << endl;
	

	system("pause");
}


void entrada() 
{
	cout << "¿Procederas a entrar a la casa?" << endl;
	cout << "1. Si \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) 
	{
		system ("cls");
		cout << "Giras la perilla, y te das cuenta de que esta cerrada.\nAhora te preguntas porque pensaste que estaria abierta." << endl;
		system ("pause");
		system ("cls");
		cout << "Talves el sea de la gente que suele dejar la llave escondida en los alrededores, como en las caricaturas, pensaste." << endl;
		system ("pause");
		system ("cls");
		cout << "¿Donde buscaras?" << endl;
		cout << "1. En los arbustos. \n2. Debajo del tapete. \n3. En la casa del perro." << endl;
		
		cin >> opciondos;
		
		if (opciondos == 1)
		{
			system ("cls");
			cout << "Buscas en los arbustos...\nEncontraste un escarabajo, talves funcione."<< endl;
			system ("pause");
			system ("cls");
			cout << "Pones al escarabajo frente a la perilla, saca sus llaves, y te abre la puerta, pidiendote que te limpies los pies antes de entrar."<< endl;
			system ("pause");
			system ("cls");
			cout << "Entras a la casa..., quedas asombrado por la increible cantidad de huesos en ella."<< endl;
			system ("pause");
			system ("cls");
			casa();
		}
		
		else if (opciondos == 2)
		{
			system ("cls");
			cout << "Buscas en bajo el tapete...\nPoco sorpresivamente, encuentras lo que esperabas.\nUna compuerta secreta.\nTu eres una persona muy curiosa, asi que entras sin pensarlo dos veces."<< endl;
			system ("pause");
			system ("cls");
			sotano();
		}
		
		else if (opciondos == 3)
		{
			system ("cls");
			cout << "Observas el interior de la casa del perro...\nNo parece haber nadie, solo una nota.\n"<< endl;
			system ("pause");
			system ("cls");
			cout << "¿Leer la nota del perro?"<< endl;
			cout << "1. Si \n2. No" << endl;
			cin >> opciontres;
			
			if(opciontres == 1)
			{
				system ("cls");
				cout << "Increible, trataste de leer la escritura de un perro.\nEste viaje no ha ni comenzado, y ya decendiste en la locura."<< endl;
				system ("pause");
				system ("cls");
				entrada();
			}
	
			else if(opciontres == 2)
			{
				system ("cls");
				cout << "Muy bien, es mejor respetar la privacidad de un respetable perro escritor."<< endl;
				system ("pause");
				system ("cls");
				entrada();
				
			}
			
			else
			{
				cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
				system("pause");
				system ("cls");
			}
			
		}
		else
		{
			cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
			system("pause");
			system ("cls");
		}
		
		
	}
	
	else if (opcion == 2) 
	{
		system ("cls");
		cout << "Sabia decision de tu parte, viajero.\nNo es como si esto fuera un juego de un duende verde que puede entrar a la casa de cualquiera y salirse con la suya." << endl;
		system ("pause");
		system ("cls");
	}
	else
	{
		cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
		system("pause");
		system ("cls");
	}
	
	
	
}


void casa()
{
	cout << "¿Que haras aqui adentro?" << endl;
		cout << "1. Jugar al Wii U. \n2. Abrir la nevera y comer algo. \n3. Subir a la planta alta." << endl;
		
		cin >> opcion;
		
		if (opcion == 1)
		{
			system ("cls");
			cout << "Enciendes el Wii U..., el stick del gamepad no funciona, asi que solo podras jugar Smash 4 con el control de Gamecube." << endl;
		    system ("pause");
		    system ("cls");
			cout << "Entras al modo en linea porque te sientes competitivo hoy.\nAl parecer tiene una version hackeada con menos personajes, por alguna razon."<< endl;
		    system ("pause");
		    system ("cls");
		    cout << "¿A quien elijiras?"<< endl;
		    
		    cout << "1. Ness \n2. Zelda \n3. Shulk " << endl;
		    
		    cin >> opciondos;
		    
		    if(opciondos == 1)
		    {
		    	cout << "Anunciador: NESS"<< endl;
		    	system ("pause");
		    	system ("cls");
		    	cout << "Juegas algunos combates en linea usando a Ness...\nEncuentras puras Rosalinas y Villagers que se llevan tu PK tunder al recuperarte, y mueres en 0%"<< endl;
			    system ("pause");
		    	system ("cls");
		    	cout << "Te pones bastante salado, avientas el control, gritas la palabra con F, apagas la consola, y te vas."<< endl;
				system ("pause");
		    	system ("cls");
		    	casa ();
			}
		    else if(opciondos == 2)
		    {
		    	cout << "Anunciador: ZELDA"<< endl;
		    	system ("pause");
		    	system ("cls");
		    	cout << "Sabia decision, es lo que tu pensabas.\nPero no, tu pesima framedata te lleva a que muchos Foxs y Clouds abusen de ti.\nPor mucho que te gusta este personaje, no puedes continuar, y prefieres esperar al Ultimate, donde porfin ella no es basura."<< endl;
		    	system ("pause");
		    	system ("cls");
		    	cout << "Te pones bastante salado, avientas el control, gritas la palabra con F, apagas la consola, y te vas."<< endl;
				system ("pause");
		    	system ("cls");
		    	casa ();
			}
			else if(opciondos == 3)
		    {
		    	cout << "Anunciador: SHULK"<< endl;
		    	system ("pause");
		    	system ("cls");
		    	cout << "Parece que eres un hombre de cultura tambien, confiado en tu fanatismo por Xenoblade, el poder del Monado, y en tus Speed Art Buffered Deactivated Jump Cancelled Up Smashes, te lanzas a la batalla.\nPeeeero, fallas estrepitosamente, ya que tus ataques toman cinco meses en salir."<< endl;
		    	system ("pause");
		    	system ("cls");
		    	cout << "Te pones bastante salado, avientas el control, gritas la palabra con F, apagas la consola, y te vas."<< endl;
				system ("pause");
		    	system ("cls");
		    	casa();
			}
			else
			{
				cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
				system("pause");
				system ("cls");
			}
		}
		
		else if (opcion == 2)
		{
			system ("cls");
			cout << "Abres la nevera..., notas que, tambien, esta llena de huesos.\nTe sientes intrigado por el misterio de los huesos."<< endl;
			system ("pause");
			system ("cls");
			cout << "¿Comeras un hueso?"<< endl;
			cout << "1. Si \n2. No" << endl;
			
			cin >> opcion;
			
			if (opcion == 1)
			{
				system ("cls");
				cout << "Te metes el hueso entero a la boca.\nTratas de masticar, pero no puedes, asi que te lo tragas.\nSorpresivamente, sabe muy rico, sientes que vuelas." << endl;
				system ("pause");
				system ("cls");
				cout << "Te das cuenta que sientes que vuelas, porque en realidad lo estas haciendo.\nTu espiritu esta volando al paraiso.\nAsi es, te asfixiaste y moriste, ¿que esperabas?" << endl;
				system ("pause");
				system ("cls");
			}
			
			else if (opcion == 2)
			{
				cout << "Bravo, tu primera buena decision del dia. No esperaba mucho de ti desde que decidiste meterte a la casa de un desconocido." << endl;
				system ("pause");
				system ("cls");
				cout << "Escuchas cosas caer en el piso de arriba, hay todo un alboroto ahi.\n" << endl;
				system ("pause");
				system ("cls");
				casa();
			}
			
			else
			{
				cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
				system("pause");
				system ("cls");
			}
		}
		
		else if (opcion == 3)
		{
			system ("cls");
			cout << "Subes a la planta alta...\nAbres la unica puerta que ves, y observas algo perturbador..."<< endl;
			system ("pause");
			system ("cls");
			cout << "Es un perrito, blanco, y mediano.\nTiene una computadora y solo esta golpeando las teclas del teclado, sin aparente orden."<< endl;
			system ("pause");
			system ("cls");
			cout << "Miras los alrededores, ves un disco con algo escrito:\nUNDERTALE\nTe daz cuenta de que te equivocaste de casa, estas en la precencia del legendario Toby Fox."<< endl;
			system ("pause");
			system ("cls");
			cout << "El perrito Toby se da cuenta de que estuviste husmeando en su casa, se ve molesto\nTu alma se vuelve azul, y sales volando por la ventana.\nDecides no pasar un mal rato, y salir corriendo."<< endl;
			system ("pause");
			system ("cls");
		}
		else
		{
			cout << "Elige una opcion de las de arriba, please.\nSe que en la vida hay decisiones infinitas, pero aqui no aplica."<< endl;
			system("pause");
			system ("cls");
		}
	
	
	
	
	
	
}

void sotano()
{
	cout << "Entras al sotano..., esta increiblemente caliente aqui abajo.\nVes algo raro en la distancia..."<< endl;
	system ("pause");
	system ("cls");
	cout << "Te adentras mas en el sotano.\nPor fin ves bien la figura extraña, es una montaña de bananas\nJuntas tus manos y las alzas hacia arriba, moviendolas de adelante a atras, mirando a la camara con felicidad, y haciendo ruidos de mono mientras una cancion de victoria de reproduce."<< endl;
	system ("pause");
	system ("cls");
	cout << "Decides salir del sotano, antes de que te den ganas de comerte esas deliciosas bananas como el Kong que eres."<< endl;
	system ("pause");
	system ("cls");
	entrada();
}












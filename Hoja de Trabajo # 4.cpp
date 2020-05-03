/ * Hoja de Trabajo # 4 - (Ejercicio en Clase)
En la regi�n de la sierra de los Cuchumatanes la compa��a Xterminio sa, tiene las siguientes tarifas:
________________________________________________
| tipo | servicio | costo por ectaria. El |
| _______ | ___________________ | ___________________ |
| 1 | Mala hierba | 10 |
| 2 | Langostas | 20 |
| 3 | Gusanos | 30	
| 4 | Todo lo anterior | 40 |
| _______ | ___________________ | ___________________ |
Adem�s del �rea a fumigar es mayor a 500.00 hect�reas se tiene un descuento del 5%. Adicionalmente
si el total a pagar por el servicio es mayor a Q1500.00 se tiene un descuento adicional del 10% sobre el
excedente
La compa��a necesita las estad�sticas de los servicios que ha ofrecido un grupo de agricultores durante
un periodo de tiempo. Por cada servicio debe ingresar los datos siguientes: Tipo de Fumigaci�n (1 a 4) y
el n�mero de hect�reas, toda esta informaci�n debe almacenarse en una base de datos (archivo plano).
Se le pide que realice un programa en C ++ que solicite el ingreso de la informaci�n de cada servicio
realizado a un grupo de agricultores. El programa debe de leer los datos del archivo que tiene la
informaci�n antes almacenada y mostrar la cantidad de servicios de cada tipo de fumigaci�n, determinar
el tipo de servicio con mayor demanda y el monto total pagado por los clientes.
* /

# include  < iostream >
# include  < string >
# include  < fstream >
# include  < vector >
usando el  espacio de nombres  est�ndar ;

struct  tipo_fumigacion {
	int tipo;
	descripcion de cuerdas;
	costo de flotaci�n ;
};

struct  regar {
	int tipo;
	flotador tamanio;
	flotador total;
};

struct  contar {
	int tipo;
	int cs;
} cuenta [ 4 ];

vector <tipo_fumigacion> tfumigacion;
 men� vac�o ();
anular  grabar ();
 leer vac�o ();
 opciones nulas ();
int  main () {
	men� ();
	opciones ();
	devuelve  0 ;
}
vac�o  inicio () {
	tfumigacion. push_back ({ 1 , " mala hierva " , 10.00 });
	tfumigacion. push_back ({ 2 , " langostas " , 20.00 });
	tfumigacion. push_back ({ 3 , " gusanos " , 30.00 });
	tfumigacion. push_back ({ 4 , " todo lo anterior " , 50.00 });
	
	cuenta [ 0 ] = { 1 , 0 };
	cuenta [ 1 ] = { 2 , 0 };
	cuenta [ 2 ] = { 3 , 0 };
	cuenta [ 3 ] = { 4 , 0 };
}

 opciones nulas () {
	cout << "     -------- Xterminaciones, SA -------- " << endl;
	cout << " ============================================== ==================== " << endl;
	cout << " 	--Tipo-- " << " \ t  \ t " << " --Servicio-- " << " \ t  \ t " << " --Costo x Hectaria-- " << endl;
	cout << " ============================================== ==================== " << endl;
	cout << " 	1 " << " \ t  \ t  \ t " << " Mala Hierba " << " \ t  \ t  \ t " << " 10.00 " << endl;
	cout << " 	2 " << " \ t  \ t  \ t " << " Langostas " << " \ t  \ t  \ t " << " 20.00 " << endl;
	cout << " 	3 " << " \ t  \ t  \ t " << " Gusanos " << " \ t  \ t  \ t  \ t " << " 30.00 " << endl;
	cout << " 	4 " << " \ t  \ t  \ t " << " Todo lo anterior " << " \ t  \ t " << " 40.00 " << endl;
	cout << " ============================================== ==================== " << endl;
}

float  calcular ( int tipo, float tamanio) {
  flotador cal1, total, precio;
  
  if (tipo == 1 ) {
    precio = tfumigacion [ 0 ]. costo ;
  } else  if (tipo == 2 ) {
    precio = tfumigacion [ 1 ]. costo ;
  } else  if (tipo == 3 ) {
    precio = tfumigacion [ 2 ]. costo ;
  } else  if (tipo == 4 ) {
    precio = tfumigacion [ 3 ]. costo ;
  } 
  
  precio = tamanio * precio;

  if (tamanio> 500 ) {
    precio = precio- (precio * 0.05 );
  }

  if (precio> 1500 ) {
    cal1 = precio- 1500 ;
    cal1 = cal1- (cal1 * 0.10 );
    total = 1500 + cal1;
  }
  
  m�s {
    total = precio;
  }
  
  retorno total;
}

anular  grabar () {
  opciones (); // Mostramos las opciones de fumigacion

  // declaramos la estructura reg -> registro la variable x
  regar x;

  cout << " Ingrese el tipo de servicio: " << endl;
  cin >> x. tipo ;
  cout << " Ingrese el tama�o a fumigar: " << endl;
  cin >> x. tamanio ;
  // llamamos la funcion y le asignamos el resultado
  // de la funcion
  X. total = calcular (x. tipo , x. tamanio );
  // grabamos en el archivo
  ofstream archivo ( " registro.txt " , ios :: app);
  archivo << x. tipo << " \ t " << x. tamanio << " \ t " << x. total << endl;
  // Cerrar el archivo
  archivo. cerrar ();  

}

 leer vac�o () {
  regar x; // declaramos la estructura reg -> registro la variable x

  flotante sumatotal = 0 ; // esta variable sumara el total de los servicios brindados
  
  // generamos el objeto de la clase ofstream, que es archivo
  ifstream archivo;

  // abrimos el archivo.
  archivo. abierto ( " registro.txt " , ios :: in);

  // aca leemos el archivo y lo pasamos ax con estructura de reg.
  while (archivo >> x. tipo >> x. tamanio >> x. total ) {

    // Al obtener el tipo de servicio seg�n la l�nea del archivo
    // sumamos al arreglo a cuenta el servicio registrado.
    cuenta [x. tipo - 1 ]. cs = cuenta [x. tipo - 1 ]. cs + 1 ;

    // sumamos x.total seg�n registro de l�nea del archivo.
    sumatotal = sumatotal + x. totalizar� ; // es el gran total


  }

  // Cerramos el archivo.
  archivo. cerrar ();

  para ( int i = 0 ; i < 4 ; i ++) {
    cout << tfumigacion [i]. descripcion << " : " << cuenta [i]. cs << endl;
  }

  cout << " El total vendido es de: " << sumatotal << endl;

}

 men� vac�o () {
	int contador;
	bool fin = falso ;
	char tecla;
	cadena vac�a;
	hacer {
		sistema ( " CLS " );
		cout << " men� " << endl;
		cout << " ___________________________________________________________________________________ " << endl;
		cout << " 1). ~ GRABAR. " << endl;
		cout << " 2). ~ LEER. " << endl;
		cout << " 3). ~ SALIR. " << endl;
		cout << " ___________________________________________________________________________________ " << endl;
		cout << " Elije una opcion: " ;
		
		cin >> tecla;
		interruptor (tecla) {
			caso  ' 1 ' :
			sistema ( " CLS " );
			grabar ();
			contador = contador + 1 ;
			romper ;
			
			caso  ' 2 ' :
			sistema ( " CLS " );
			leer ();
			romper ;
			
			caso  ' 3 ' :
			fin = verdadero ;
			romper ;
			
			por defecto :
			cout << " Opcion no valida. " ;
			getchar ();
			getline (cin, vac�o);
			romper ;
		}
	} while (fin! = verdadero );
}


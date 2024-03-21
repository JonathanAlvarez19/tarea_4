#include <iostream>
using namespace std;

main (){
	/*
	//array = arreglo o coleccion o matriz
	//se utilizan para almacenar varios valores en una sala variable
	
	 //nota1,nota2,nota3,nota4
	int notas[4]; //indice o pocision del arreglo inicia en 0
	// 0-3, 0,1,2,3
	notas[0] = 80; //nota1 = 80
	notas[1] = 65; //nota2 = 65
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i =0;i<3;i++){
		cout<<i<<": "<<notas[i]<<endl;		
	}
	
	for (int i : notas){
		cout<<i<<endl;
	}
	*/
	
	/*
	notas[2] = 70;
	cout<<"valor modificado (2)"<<notas[2]<<endl;
	*/
	
	int tam=0, suma=0,promedio=0;

	/*
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	int notas[tam]; //notas[5]
	for(int i=0;i<tam;i++){
		cout<<"Ingrese Notas: "<<i+1<<":";
		cin>>notas[i];
	}
	
	for(int i=0;i<tam;i++){
		suma += notas[i]; // suma = suma +notas[i]
	}
	promedio = suma / tam;
	cout<<  "El promedio es: "<<promedio<<endl;
	*/
	
	
	
	/*
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"ingresar nota " <<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n): ";
		cin>>res;
		
	}while(res == 's'||res == 'S');
	for(int i=0;i<tam;i++){
		suma+=notas[i];
		//cout<<notas[i]<<endl;
	}
	promedio = suma /tam;
	cout<<"El Proimedio es: "<<promedio<<endl;
	*/
	//int matriz[2][3];
	string semana[7]{"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
	
		semana[3] = "Jueves";
		for(int i=0;i<7;i++){
			cout<<semana[i]<<endl;
		}
	
	/*
	string nombre;//arreglo de char
	int dato;

	//cin.ignore();
	cout<<"ingrese Nombre Completo: ";
	//cin>>nombre;
	getline(cin,nombre);
	//cin.get(nombre,30);
	cout<<nombre<<endl;
	
		cout<<"Ingrese dato";
	cin>>dato;
	*/
	
	system("pause");
}

#include <iostream>
using namespace std;

main (){
	 //Arreglos Bidimensionales. matriz, tabla
	 int fil =0,col=0;
	 int matriz[fil][col];
	 cout<<"Ingrese Filas: ";
	 cin>>fil;
	 cout<<"Ingrese columnas: ";
	 cin>>col;
	 cout<<"------Ingresar------"<<endl;
	 for (int i=0;i<2;i++){
	 	for (int ii=0;ii<3;ii++){
	 			cout<<i<<":"<<ii<<":";
	 		cin>>matriz[i][ii];
		 }
		 cout<<"________________"<<endl;
	 }
	  cout<<"------Mostrar------"<<endl;
	 
	 	 for (int i=0;i<2;i++){
	 	for (int ii=0;ii<3;ii++){
	 		cout<<i<<":"<<ii<<":"<<matriz[i][ii]<<endl;
		 }
	 }
	 
	/*	 
	 cout<<"0,1: "<<matriz[0][1]<<endl;
	 cout<<"0,2: "<<matriz[0][2]<<endl;
	 cout<<"1,0: "<<matriz[1][0]<<endl;
	 cout<<"1,1: "<<matriz[1][1]<<endl;
	 cout<<"1,2: "<<matriz[1][2]<<endl;
	 */
	 
	 system("pause");
	 
	 }

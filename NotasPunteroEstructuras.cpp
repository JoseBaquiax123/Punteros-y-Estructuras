#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
	char nombre[20];
	char apellido[10];
	int codigo;
	int nota1;
	int nota2;
	int nota3;
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		
		cout<< "___________________________"<<endl;
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Apellido: "; cin.getline(alumnos[i].apellido,10,'\n');
		cout<<"Codigo: "; cin>>alumnos[i].codigo;
	
		cout<<".:Notas del Examen:."<<endl;
		cout<<"Nota1: "; cin>>alumnos[i].nota1;
		cout<<"Nota2: "; cin>>alumnos[i].nota2;
		cout<<"Nota3: "; cin>>alumnos[i].nota3;
	
	
		
	}
	
	
	cout<<"\n\nMostrando Datos de los alumnos"<<endl;
	for (int i=0;i<n_alumnos;i++){
		
		cout<<"_____________________"<<endl;
		cout<<"Codigo: "<<alumnos[posM].codigo<<endl;
		cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
		cout<<"Apellido: "<<alumnos[posM].apellido<<endl;
		cout<<"________ NOTAS ________"<<endl;
		cout<<"Nota1: "<<alumnos[posM].nota1<<endl;
		cout<<"Nota2: "<<alumnos[posM].nota2<<endl;
		cout<<"Nota3: "<<alumnos[posM].nota3<<endl;
		
		}
		
		
	getch();
	return 0;
}


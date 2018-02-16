#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	cout<<"Simbolos terminales: h,o,l,a"<<endl<<"Simbolos no terminales: A,H,O,l"<<endl<<"S(comienzo) = a"<<endl<<"Reglas: "<<endl
	<<"A:=h"<<endl
	<<"H:=o"<<endl
	<<"O:=l"<<endl
	<<"L:=a"<<endl;
	int n,j=1;
	string palabra,aux;
	cout<<"Palabra: "<<endl;
	cin>>palabra;
	aux=palabra;
	cout<<"numero de derivaciones: "<<endl;
	cin>>n;
	for (int i = 0; i<=n-1; i++){
	if (palabra[j-1] == 'A'){
		palabra.replace(i,1,"h");
	}
	else if (palabra[j-1] == 'H'){
		palabra.replace(i,1,"o");
	}
	else if (palabra[j-1] == 'O'){
		palabra.replace(i,1,"l");
	}
	else if (palabra[j-1] == 'L'){
		palabra.replace(i,1,"a");
	}
		cout<<"Derivacion: "<<j<< "= "<<palabra<<endl;
	j++;
}
}

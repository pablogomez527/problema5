#include <iostream>
#include <string.h>
using namespace std;
/* Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
parámetros por referencia para retornar la cadena. Escriba un programa de prueba.*/

int cantidadnum(long long int );
void convertirnume(long long int , char * ,int);
int main()
{
    long long int numero,iterador=0;
    char convertido[]={};
    cout<<"ingrese un numero: "<<endl;
    cin>>numero;
    iterador= cantidadnum(numero);
    convertirnume(numero,convertido,iterador) ;
    for(int i=iterador-1;i>=0;i--){
    cout<< *(convertido+i);
       }
    return 0;

}
void convertirnume(long long int numero, char *convertido,int iterador){


    for(int i=0;i<iterador;i++){
        *(convertido+i)=numero%10 +48;
        numero=numero/10;

    }
    *(convertido+iterador)='\0';

}
int cantidadnum(long long int numero){
    int contador=0;
    while (numero > 0) {
        numero=numero/10;
        contador++;
    }
    return contador;
}

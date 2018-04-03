#include <iostream>

using namespace std;

int main()
{{


    //ejercicio 1
    cout<<"ejercicio 1 :"<<endl;
    int edad;
    cout<<"ingresa tu edad :"<<endl;
    cin>>edad;
    if(edad>0 and edad<18){
        cout<<"tienes :"<<edad<<" años y eres menor de edad"<<endl;
    }else{

        cout<<"tienes :"<<edad<<" años y eres mayor de edad"<<endl;
    }
    //Ejercicio2

    cout<<"ejercicio 2 :"<<endl;
    int limite,i=0;
    cout<<"Escriba un numero limite, por favor: "<<endl;
    cin>>limite;
    cout<<i;
    while(i<limite){
        i++;
        cout<<","<<i;
    }


    //Ejercicio3
    cout<<"ejercicio 3 :"<<endl;
    float a,b,c,mayor;
    float promedio;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    cout<<"Ingrese el tecer numero: "<<endl;
    cin>>c;
    mayor=a;
    if(b>a){
        mayor=b;
    }
    if(c>a){
        mayor=c;
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    promedio=(a+b+c)/3;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
    //Ejercicio 4
    cout<<"ejercicio 4 :"<<endl;
    int d,e;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>d;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>e;

    if(d%2==0){
        cout<<d<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<d<<" No es multiplo de 2"<<endl;
    }
    if(e%2==0){
        cout<<e<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<e<<" No es multiplo de 2"<<endl;
    }
    if(d%e==0){
        cout<<d<<" Es multiplo de "<<e<<endl;
    }
    else{
        cout<<a<<" no es multiplo de "<<e<<endl;
    }
    if(d*d==e){
        cout<<d<<" al cuadrado tiene como resultado a "<<e<<endl;
    }
    else{
        cout<<d<<" al cuadrado no tiene como resultado a "<<e<<endl;
    }
//Ejercicio5
    cout<<"ejercicio 5 :"<<endl;
    int f;
    cout<<"Ingrese un numero: "<<endl;
    cin>>f;
    if(f%2!=0&&f%3!=0&&f%5!=0&&f%7!=0){
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"No es primo"<<endl;
    }
}
//Ejercicio6
    cout<<"ejercicio 6 :"<<endl;
    int g,h=2;
    cout<<"Ingrese el numero: "<<endl;
    cin>>g;
    while(h<=g){
        if(h==2||h==3||h==5||h==7){
            cout<<h<<",";
        }
        if(h%2!=0&&h%3!=0&&h%5!=0&&h%7!=0){
            cout<<h<<",";
        }
        h=h+1;
        }


  //Ejercicio7
    cout<<"ejercicio 7 :"<<endl;
    int m,z,k=10000,res;
    cout<<"Ingrese un numero de 5 digitos: "<<endl;
    cin>>m;
    while(k>=0){

        z=m/k;
        cout<<z<<"  ";
        m=m%k;
        k=k/10;

    }

    //ejercicio 10
    cout<<"ejercicio 10 :"<<endl;
    int numer1=1;
    int anterior=0;
    int aux;
    for(int x=0;x<20;x++){
        cout<<numer1<<endl;
        aux=numer1;
        numer1+=anterior;
        anterior=aux;
    }


    return 0;
}

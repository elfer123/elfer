#include <iostream>

using namespace std;

int main()
{
    //ejercicio 1
    int edad;
    cout<<"ingresa tu edad :"<<endl;
    cin>>edad;
    if(edad>0 and edad<18){
        cout<<"tienes :"<<edad<<" años y eres menor de edad"<<endl;
    }else{

        cout<<"tienes :"<<edad<<" años y eres mayor de edad"<<endl;
    }
    //Ejercicio2


    int limite,i=0;
    cout<<"Escriba un numero limite, por favor: "<<endl;
    cin>>limite;
    cout<<i;
    while(i<limite){
        i++;
        cout<<","<<i;
    }


    //Ejercicio3
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
    int a,b;
    cout<<"Ingrese el primero numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;

    if(a%2==0){
        cout<<a<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<a<<" No es multiplo de 2"<<endl;
    }
    if(b%2==0){
        cout<<b<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<b<<" No es multiplo de 2"<<endl;
    }
    if(a%b==0){
        cout<<a<<" Es multiplo de "<<b<<endl;
    }
    else{
        cout<<a<<" no es multiplo de "<<b<<endl;
    }
    if(a*a==b){
        cout<<a<<" al cuadrado tiene como resultado a "<<b<<endl;
    }
    else{
        cout<<a<<" al cuadrado no tiene como resultado a "<<b<<endl;
    }


//Ejercicio5
    int a;
    cout<<"Ingrese un numero: "<<endl;
    cin>>a;
    if(a%2!=0&&a%3!=0&&a%5!=0&&a%7!=0){
        cout<<"El numero es primo"<<endl;
    }
    else{
        cout<<"No es primo"<<endl;
    }


}

//Ejercicio6

    int a,i=2;
    cout<<"Ingrese el limite: "<<endl;
    cin>>a;
    while(i<=a){
        if(i==2||i==3||i==5||i==7){
            cout<<i<<",";
        }
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
            cout<<i<<",";
        }
        i=i+1;
        }


  //Ejercicio7

    int a,d,b=10000,res;
    cout<<"Ingrese un numero de 5 digitos: "<<endl;
    cin>>a;
    while(b>=0){

        d=a/b;
        cout<<d<<"  ";
        a=a%b;
        b=b/10;

    }


    return 0;
}

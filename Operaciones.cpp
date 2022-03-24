#include<iostream>

using namespace std;

class Operacion {
protected:
    int valor1;
    int valor2;
    int resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};


class Suma: public Operacion{
public:
    void operar();
};


class Resta : public Operacion {
public:
    void operar();
};


class Multiplicacion: public Operacion{
public:
    void operar();
};

class mayor: public Operacion{
public:
    void operar();
};

class menor: public Operacion{
public:
    void operar();
};

void Operacion::cargar1()
{
    cout << "Ingrese primer valor:"<<endl;
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese segundo valor:"<<endl;
    cin >> valor2;
}

void  Operacion::mostrarResultado()
{
    cout <<resultado<<"\n";
}

void Suma::operar()
{
    resultado = valor1 + valor2;
}

void Resta::operar()
{
    resultado = valor1 - valor2;
}

void Multiplicacion::operar()
{
    resultado = valor1 * valor2;
}

void menor::operar()
{
    if(valor1<valor2)
    {
        resultado = valor1;
    }
    else
    {
        resultado = valor2;
    }
}

void mayor::operar()
{
  if(valor1>valor2)
    {
        resultado = valor1;
    }
    else
    {
        resultado = valor2;
    }  
}

int main()
{
    cout <<"Bienvenido al programa de operaciones básicas\n"<< endl;
    
    Suma suma1;
    suma1.cargar1();
    suma1.cargar2();
    suma1.operar();
    cout << "La suma de los dos valores es:"<<endl;
    suma1.mostrarResultado();
    cout<<"\n"<<endl;

    Resta resta1;
    resta1.cargar1();
    resta1.cargar2();
    resta1.operar();
    cout << "La diferencia de los dos valores es:"<<endl;
    resta1.mostrarResultado();
    cout<<"\n"<<endl;

    Multiplicacion mult1;
    mult1.cargar1();
    mult1.cargar2();
    mult1.operar();
    cout << "El producto de los dos valores es:"<<endl;
    mult1.mostrarResultado();
    cout<<"\n"<<endl;

    mayor mayor1;
    mayor1.cargar1();
    mayor1.cargar2();
    mayor1.operar();
    cout << "El numero mayor de los dos valores ingresados es:"<<endl;
    mayor1.mostrarResultado();
    cout<<"\n"<<endl;


    menor menor1;
    menor1.cargar1();
    menor1.cargar2();
    menor1.operar();
    cout << "El numero menor de los dos valores ingresados es:"<<endl;
    menor1.mostrarResultado();
    cout<<"\n"<<endl;
    return 0;
}
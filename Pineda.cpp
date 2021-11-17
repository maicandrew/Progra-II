#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int n;

struct personal
{
    char nombre [30];
    char tel [10];
    int edad;
};

void Ingresar (personal persona[], int n)
{
    for (int i= 0; i<n; i++)
    {
        cout<< "Ingrese el nombre "<< i+1<<": ";
        gets(persona[i].nombre);
        fflush(stdin);
        cout<< "Ingrese el tel�fono "<< i+1<< ": ";
        gets(persona[i].tel);
        fflush(stdin);
        cout<< "Ingrese la edad "<<i+1<<": ";
        cin>> persona[i].edad;
        fflush(stdin);
    }
}

int Edadprom (personal persona[], int n)
{
    int prom= 0;
    for (int i= 0; i<n; i++)
    {
        prom= persona[i].edad+prom;
    }
    
    return prom/n;
}

int Joven (personal persona[], int n)
{
    int joven= 999, jov;
    
    for (int i= 0; i<n; i++)
    {
        if (persona[i].edad<joven)
        {
            joven= persona[i].edad;
            jov= i;
        }
    }
    
    return jov;
}

void Viejo (personal persona[], int n)
{
    int viejo= 0, ant;
    
    for (int i= 0; i<n; i++)
    {
        if (persona[i].edad>viejo)
        {
            viejo= persona[i].edad;
            ant= i;
        }
    }
    
    cout<<persona[ant].nombre;
}

void MayorProm (personal persona[], int n)
{
    for (int i= 0; i<n; i++)
    {
        if (persona[i].edad>Edadprom(persona, n))
        {
            cout<< persona[i].tel<< " ";
        }
    }
    
}

int MenorProm (personal persona[], int n)
{
    int acumulador= 0;
    
    for (int i= 0; i<n; i++)
    {
        if (persona[i].edad<Edadprom(persona, n))
        acumulador++;
    }
    return acumulador;
}

void Mayor40 (personal persona[], int n)
{
    for (int i= 0; i<n; i++)
    {
        if (persona[i].edad>40)
        {
            cout<< persona[i].tel<< " ";
        }
    }
    
}

//--------------------------------------------------

struct Nomina
{
    int cedula;
    char nombre[20];
    char cargo[30];
    double sueldo;
};

void Ingresar (Nomina empleados[], int n)
{
    for (int i= 0; i<n; i++)
    {
        cout<< "Ingrese la cédula "<<i+1<<": ";
        cin>> empleados[i].cedula;
        fflush(stdin);
        cout<< "Ingrese el nombre del empleado "<<i+1<<": ";
        gets(empleados[i].nombre);
        fflush(stdin);
        cout<< "Ingrese el nombre del cargo del empleado "<<i+1<<": ";
        gets(empleados[i].cargo);
        fflush(stdin);
        cout<< "Ingrese el sueldo del empleado "<<i+1<<": ";
        cin>>empleados[i].sueldo;
        fflush(stdin);
    }
}

void organizar (Nomina empleados[], int n)
{
    for (int j= 0; j<n; j++)
    {
        for (int i= 0; i<n; i++)
        {
            int aux;

            if (empleados[i].cedula>empleados[i+1].cedula)
            {
                aux= empleados[i].cedula;
                empleados[i].cedula= empleados[i+1].cedula;
                empleados[i+1].cedula= aux;
            }
        }
    }
}

void Buscar (Nomina empleados[], int n)
{
    int ced, acum= 0;
    
    cout<< "Ingrese la cédula del empleado que desea buscar: ";
    cin>> ced;
    
    for (int i= 0; i<n; i++)
    {
        if (ced==empleados[i].cedula)
        {
            cout<< "Cédula: "<< empleados[i].cedula<<endl;
            cout<< "Nombre: "<< empleados[i].nombre<<endl;
            cout<< "Cargo: "<< empleados[i].cargo<<endl;
            cout<< "Sueldo: "<< empleados[i].sueldo<<endl;
            acum++;
            
        }
    }
    
    if (acum==0)
    {
        Ingresar (empleados, n);
        organizar (empleados, n);
    }
}

void Sueldo (Nomina empleados[], int n)
{
    int cant;
    
    cout<< "Ingrese la cantidad de empleados que desea modificarle el sueldo: ";
    cin>> cant;
    
    int ced[cant];
    
    for (int i= 0; i<cant; i++)
    {
        cout<< "Ingrese la cédula del empleado que desea modificarle el suelo: ";
        cin>> ced[i];
    }
    
    int acum= 0;
    
    for (int j= 0; j<n; j++)
    {
        for (int i= 0; i<n; i++)
        {
            if (empleados[j].cedula==ced[i])
            {
                cout<< "Ingrese el nuevo salario del empleado: ";
                cin>> empleados[j].sueldo;
                acum++;
            }
        }
    }
    
    if (acum==0)
    {
        cout<< "Ese empleado no existe."<<endl;
    }
}

void Eliminar (Nomina empleados[], int n)
{
    int ced;
    
    cout<< "Ingrese la cédula del empleado que desea eliminar: ";
    cin>> ced;
    
    for (int j= 0; j<n; j++)
    {
        if (ced==empleados[j].cedula)
        {
            for (int i= j; i<n-1; i++)
            {
                empleados[j].cedula= empleados[j+1].cedula;
                strcpy(empleados[j].nombre, empleados[j+1].nombre);
                strcpy(empleados[j].cargo, empleados[j+1].cargo);
                empleados[j].sueldo= empleados[j+1].sueldo;

            }
        }
    }
}

void Visualizar (Nomina empleados[], int n)
{
    for (int i= 0; i<n; i++)
    {
        cout<< "Cédula: "<< empleados[i].cedula<< "       "<<endl;
        cout<< "Nombre: "<< empleados[i].nombre<< "       "<<endl;
        cout<< "Cargo: "<< empleados[i].cargo<< "       "<<endl;
        cout<< "Sueldo: "<< empleados[i].sueldo<< "       "<<endl;
    }
}

int main ()
{
    
    int jov;

    cout<< "Ingrese la cantidad de personas: ";
    cin>> n;
    Nomina empleados[n];
    /* Problema 1
    personal persona[n];
    
    Ingresar (persona, n);
    cout<< "La edad promedio de los profesores adscritos es: "<< Edadprom(persona, n)<<endl;
    jov= Joven (persona, n);
    cout<< "El nombre del profesor más joven es: "<< persona[jov].nombre;
    cout<<endl;
    cout<< "El nombre del profesor de más edad es: ";Viejo (persona, n);
    cout<<endl;
    cout<< "El número de los profesores con edad mayor al promedio es: ";MayorProm (persona, n);
    cout<< "El número de profesores con edad menor al promedio es: "<<MenorProm (persona, n)<<endl;
    cout<< "El teléfono de los profesores mayores de 40 años son: ";Mayor40 (persona, n);
    */

    Ingresar (empleados, n);
    organizar (empleados, n);
    Buscar(empleados, n);
    Sueldo(empleados, n);
    Eliminar (empleados, n);
    Visualizar (empleados, n);
}

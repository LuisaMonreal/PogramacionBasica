/******************************************************************************

                     UN PROGRAMA UTILIZANDO FUNCIONES
                     QUE ME DIGA CUAL ES NUMERO MAYOR (2 NUMEROS)

*******************************************************************************/

#include <iostream>

using namespace std;

//DECLARAR MI FUNCION
int nummayor(int x, int y);

int main()
{
    int numero1,numero2;
printf("ingrese un numero1 \n");
scanf("%d",&numero1);
printf("ingrese un numero2 \n");
scanf("%d",&numero2);
printf("el numero mayor es: \n");
printf("%d\n",(nummayor(numero1,numero2)));

    return 0;
}

//definicion FUNCION
int nummayor (int x, int y)
{
    int rs;
    if (x>y)
    {
        rs=x;
    }
    else
    {
        rs=y;
    }
    
    return rs;
}
//

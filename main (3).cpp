#include <iostream>

using namespace std;

int par (int x); //declaro la funcion



int main()
{
    int num1;
    int res;
    printf("ingrese un numero");
    scanf("%d",&num1);   // hace elfuncionamiento del cin 
    //cin>>num1;
    par(num1); //mmanda a llamar la funcion
    res=par(num1);
   // printf("%d\n",res);
    printf("%d\n",par(num1));
    return 0;
}

//defino la funcion
int par(int x)
{
    int rs;
    if(x%2==0)
    {
        rs=x;
    }
    
    else
    {
        x=0;
        rs=x;
    }
    return rs;
}
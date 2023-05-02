//Escriba un programa que solicite al usuario un número e indique si el número es positivo o negativo.
#include <stdio.h>

int main()
{
    char c;
    char num[99];
    printf("ingrese un numero \n");
    c=getchar();
    if (c=='-' || c=='+' || (c>'0' && c<'9'))
    {
        num[0]=c;
        for (int i=1;i<99 && (c=getchar())!='\n';i++)
        {
            if (c<'0' || c>'9')
            {
                printf("valor invalido \n");
                return 0;
            }
            num[i]=c;
        }
    }else{
        printf("valor invalido \n");
        return 0;
    }  
    num[0]=='-'? printf("el numero es negativo"):printf("el numero es positivo");
}
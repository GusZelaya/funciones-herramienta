/*
Escriba un programa que lea dos enteros A y B. El programa debe indicar si uno de estos números es
múltiplo del otro.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
funcion encargada de transformar el array del argumento en una string 
recibe:
arr--> array de caracteres perteneciente a la clave numerica
retorna:
str--> la clave numerica transformada en string
*/
char* transString(char* arr) 
{
    int length = strlen(arr);
    char* str = (char*)malloc(length + 1); // reservar memoria para la cadena
    int i;
    for (i = 0; i < length; i++) {
        str[i] = arr[i]; // copiar cada carácter del array en la cadena
    }
    str[length] = '\0'; // agregar el carácter nulo para indicar el final de la cadena
    return str; // devolver la cadena
}

char* ingresarNum(char *k)
{
    static int call=0;
    if(call==0)
    {
        printf("ingrese a \n");
    }else{
        printf("ingrese b \n");
    }
    char c;
    char num[99];
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
    k[strlen(num)];
    for (int i=0;i<strlen(num);i++)
        k[i]=num[i];
    call+=1;
    return k;
}
int main()
{
    char *k;
    if (ingresarNum(k)==0)
    {
        return 0;
    }else{
        k=transString(ingresarNum(k));
    }
    int numeroteete=atoi(k);
    printf("%d",numeroteete);
    char *j;
    if (ingresarNum(j)==0)
    {
        return 0;
    }else{
        j=transString(ingresarNum(j));
    }
    int numeroteete2=atoi(j);
printf("%d",numeroteete2);
    int mayor=0;
    int menor=0;
    if (numeroteete>numeroteete2)
    {
        mayor=numeroteete;
        menor=numeroteete2;
    }else{
        mayor=numeroteete2;
        menor=numeroteete;
    }
    mayor/menor==0?printf("a no es multiplo de b"):printf("a es multiplo de b");

}


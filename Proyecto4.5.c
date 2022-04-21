#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,N2,N3;

    printf("Ingrese tres numeros diferentes\n");
    printf("Ingrese el primer numero: ");
    scanf("%d",&N1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&N2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&N3);

    if(N1>N2 && N1>N3 && N2>N3)
    {
        printf("%d %d %d",N1,N2,N3);
    }
    else if(N1>N2 && N1>N3 && N3>N2)
    {
        printf("%d %d %d",N1,N3,N2);
    }
    else if(N2>N1 && N2>N3 && N1>N3)
    {
        printf("%d %d %d",N2,N1,N3);
    }
    else if(N2>N1 && N2>N3 && N3>N1)
    {
        printf("%d %d %d",N2,N3,N1);
    }
    else if(N3>N1 && N3>N2 && N1>N2)
    {
        printf("%d %d %d",N3,N1,N2);
    }
    else if(N3>N1 && N3>N2 && N2>N1)
    {
        printf("%d %d %d",N3,N2,N1);
    }
    else
    {
        printf("No ingreso tres numeros diferentes");
    }

    return 0;
}

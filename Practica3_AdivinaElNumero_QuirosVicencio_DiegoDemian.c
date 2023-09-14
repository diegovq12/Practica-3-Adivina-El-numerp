#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Nombre del archivo: Practica3_AdivinaElNumero_QuirosVicencio_DiegoDemian.cpp
Autor: Quiros Vicencio Diego Demian
Fecha de creación: 12 de septiembre de 2023
Descripción:  Juego de adivinanza de números utilizando etiquetas y la instrucción "goto" para controlar el flujo del juego
*/

int main()
{

    int num,op,intentos=0;
    srand(time(NULL));
    int RandNum=rand()%100+1;

    inicio:

    printf("\t Adivina el numero!\n");
    printf("El juego consiste en adivinar el numero aleatorio que generara la maquina\n");
    printf("El numero estara entre el 1 y 100\n");
    system("PAUSE");
    system("CLS");
    adivinanza:

    printf("Adivina el numero secreto: ");scanf("%d",&num);
    intentos++;

    if (num==RandNum)
    {   
        printf("Felicidades! Adivinaste el numero en %d intentos\n",intentos);
    }
    else if (num<RandNum)
    {
        printf("El numero es mayor\n");
        goto adivinanza;
    }
    else if (num>RandNum)
    {
        printf("El numero es menor\n");
        goto adivinanza;
    }
    else if (num<=0 || num>100)
    {
        printf("Numero fuera de rango\n");
        goto adivinanza;
    }
    
    
    printf("\nQuieres jugar de nuevo?\n");
    printf("([1]Si\t[2]No)  \t");
    scanf("%d",&op);
    system("CLS");
    switch (op)
    {
    case 1:
        RandNum=rand()%100+1;
        intentos=0;
        goto inicio;
        break;
    case 2:
        printf("Gracias por jugar!");
        break;
    default:
        break;
    }
    return 0;
}
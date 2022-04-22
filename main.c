#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    int aux, aux2;

    printf("Digite três números inteiros: \n"); scanf("%d %d %d", &x, &y, &z);
    printf("Os números foram: %d - %d - %d \n", x, y, z);

    /*
    if(x > y && x > z){
        printf("O primeiro número é o maior\n");
    } else if(y > x && y > z){
        printf("O segundo número é o maior\n");
    } else{
        printf("O terceiro número é o maior\n");
    }
    */

    if(x > y){
        if(x > z){
            if(y > z){
                //Sequência está certa
            } else{
                aux = z;
                z = y;
                y = aux;
                //Sequência muda
            }
        } else{
            aux = x;
            aux2 = y;
            x = z;
            y = aux;
            z = aux2;
            //Sequência muda
        }
    } else if(x > z){
        aux = x;
        x = y;
        y = aux;
    } else{
        if(y > z){
            aux = x;
            x = y;
            y = z;
            z = aux;
        } else{
            aux = x;
            x = z;
            z = aux;
        }

    }

    printf("A sequência em ordem decrescente é: \n%d - %d - %d", x, y, z);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    int aux, aux2;

    printf("Digite tr�s n�meros inteiros: \n"); scanf("%d %d %d", &x, &y, &z);
    printf("Os n�meros foram: %d - %d - %d \n", x, y, z);

    /*
    if(x > y && x > z){
        printf("O primeiro n�mero � o maior\n");
    } else if(y > x && y > z){
        printf("O segundo n�mero � o maior\n");
    } else{
        printf("O terceiro n�mero � o maior\n");
    }
    */

    if(x > y){
        if(x > z){
            if(y > z){
                //Sequ�ncia est� certa
            } else{
                aux = z;
                z = y;
                y = aux;
                //Sequ�ncia muda
            }
        } else{
            aux = x;
            aux2 = y;
            x = z;
            y = aux;
            z = aux2;
            //Sequ�ncia muda
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

    printf("A sequ�ncia em ordem decrescente �: \n%d - %d - %d", x, y, z);

    return 0;
}

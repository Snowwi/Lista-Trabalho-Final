#include <stdio.h>
#include <stdlib.h>

int tipo_triangulo(int x, int y, int z){

    if((x + y <= z) || (x + z <= y) || (y + z <= x)){
        return 0;
    }
    else
        if((x == y)&&(y == z)){
        return 1;
    }
    else
        if((x == y)||(x == z)||(y == z)){
            return 2;
    }
    else
        if((x != y)||(x != z)||(y != z)){
            return 3;
    }
}


int main()
{
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);

    if(tipo_triangulo(a,b,c) == 0){
        printf("Nao E um tringulo!");
    }

    if(tipo_triangulo(a,b,c) == 1){
        printf("E um tringulo equilatero!");
    }
    if(tipo_triangulo(a,b,c) == 2){
        printf("E um tringulo isosceles!");
    }
    if(tipo_triangulo(a,b,c) == 3){
        printf("E um tringulo escaleno!");
    }


    return 0;

}

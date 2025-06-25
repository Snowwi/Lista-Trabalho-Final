#include <stdio.h>
#include <stdlib.h>

int tipo_triangulo(int x, int y, int z){
    if((x == y)&&(y == z)){
        printf("é uma");
    }



}

int main()
{
    int a, b, c;
    printf("digite 3 numeros");
    scanf("%i,%i,%i", &a,&b,&c);
    printf(tipo_triangulo(a,b,c));
}

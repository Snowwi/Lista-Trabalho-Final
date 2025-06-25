#include <stdio.h>
#include <stdlib.h>

int maior( int x, int y, int z){
    if((x > y) && (x > z))
        return x;
    else
        if((y > x) && (y > z)){
            return y;
        }
    else
        if((z > y) && (z > x)){
            return z;
        }
}
int main(){
    int a, b, c;
    scanf("%i%i%i", &a, &b, &c);
    printf("Maior valor = %i\n", maior( a, b, c ) );
    return 0;
}

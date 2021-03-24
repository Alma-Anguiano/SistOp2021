#include <signal.h>
#include <ctype.h>
#include <stdio.h>

int main(){
    char linea;
    int cont=0;
    while(read(0,&linea,1)){
        if(linea=='\n'){
            cont ++;
        }
        
    }
    printf("El número de líneas es: %d\n", cont);
    return 0;
}
#include<stdio.h>
#include <locale.h>
#include <conio.h>

int fibonacci(int n);

int main(){
	
	setlocale(LC_CTYPE, "Spanish"); 
	
    int numero = 0, respuesta = 0;
    
    printf("\n\tEste programa calcula la sucesi�n de Fibonacci\n\n");
    printf("Introduce la cantidad de n�meros: ");
	scanf("%d",&numero);
	 printf("\n");
	 
    for(int i=0;i<=numero-1;i++)
    {
        respuesta = fibonacci(i);
        printf("%d  ", respuesta);
    }
    printf("\n\n\t El programa ha concluido, �hasta luego!");
    
	getch();
    return 0;
}
int fibonacci(int n){
    if(n<2){
	
        return n;
    }else{
	
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

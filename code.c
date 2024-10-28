#include <stdio.h> 
#include <locale.h> 

int main(){ 

    setlocale(LC_ALL,"Portuguese"); 

    int notas; 

    float compra, troco, valpago; 

    printf("Quanto deu o total da compra? \n"); 
    scanf("%f", &compra); 

    printf("Qual foi o valor que o cliente pagou? \n"); 
    scanf("%f", &valpago); 

    troco= valpago-compra; 

    printf("O troco foi: %.2f \n", troco); 

    notas= troco*100; 

    printf("Notas de 200: %d \n", notas/20000); 

    notas=notas%20000; 

    printf("Notas de 100: %d \n", notas/10000); 

    notas=notas%10000; 

    printf("Notas de 50: %d \n", notas/5000); 

    notas=notas%5000; 

    printf("Notas de 20: %d \n", notas/2000); 

    notas=notas%2000; 

    printf("Notas de 10: %d \n", notas/1000); 

    notas=notas%1000; 

    printf("Notas de 5: %d \n", notas/500); 

    notas=notas%500; 

    printf("Notas de 2: %d \n", notas/200); 

    notas=notas%200; 

    printf("Moedas de 1 real: %d \n", notas/100); 

    notas=notas%100; 

    printf("Moedas de 50 centavos: %d \n", notas/50); 

    notas=notas%50; 

    printf("Moedas de 25 centavos: %d \n", notas/25); 

    notas=notas%25; 

    printf("Moedas de 10 centavos: %d \n", notas/10); 

    notas=notas%10; 

    printf("Moedas de 5 centavos: %d \n", notas/5); 

    notas=notas%5; 

    printf("Moedas de 1 centavo: %d \n", notas/1); 

    notas=notas%1; 

     
    return 0; 

} 

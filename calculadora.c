#include<stdio.h>

int main(){
    double num1 , num2 , soma , subtrair , divsao , mult  ; 
    int operador ; 

    printf("DIGITE O PRIMEIRO NUMERO \n") ; 
    scanf("%lf", &num1) ; 

    printf("DIGITE O SEGUNDO NUMERO \n") ; 
    scanf("%lf", &num2) ;

    printf("1 - Soma \n") ; 
    printf("2 - Subtracao \n") ; 
    printf("3 - Divisao \n") ; 
    printf("4 - Multiplicacao \n") ;  
    printf("5 - Sair \n") ;  

    printf("ESCOLHA A OPCAO ACIMA: \n") ; 
    scanf("%d", &operador) ; 

    switch (operador) {
        case 1:
             soma = num1 + num2 ; 
             printf("SOMA = %.2lf \n", soma) ;
             break ;
        case 2: 
             subtrair = num1 - num2 ; 
             printf("SUBTRACAO = %.2lf \n", subtrair ) ;
             break;
        case 3: 
            divsao = num1 / num2 ; 
            printf("DIVISAO = %.2lf \n", divsao  ) ; 
            break ; 
        case 4: 
            mult = num1 * num2 ; 
            printf("MULTIPLICACAO = %.2lf \n", mult) ; 
            break ;
        default:
            break ; 
    } 

   return 0 ;
}
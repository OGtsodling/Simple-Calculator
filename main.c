#include <stdio.h>
#include<math.h>



int main(){

    float num1 , num2;
    char equation;
    float result;

    printf("Give a number : ");
    scanf("%f",&num1);

    printf("Give another one : ");
    scanf("%f",&num2);

    printf("Give an equation ('+' '-' '*' '/') :   ");
    scanf(" %c",&equation);

    switch (equation) {

        case '+':

            result = num1 + num2;
            printf("Your result is : %f",result);
            break;

        case '-':

            result = num1 - num2;
            printf("Your result is : %f",result);
            break;

        case '*':

            result = num1 * num2 ;
            printf("Your result is : %f",result);
            break;

        case '/':

            if(num1 == 0 || num2== 0   ){
                printf("You cant divide with 0 try again");
            }
            else{
            result = num1/num2;
            printf("Your result is : %f",result);
            }
            break;

        default:
            printf("Invalid syntax ");
    }
    return 0;
}

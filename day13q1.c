//write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main(){
    int a,b;
    char operator;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &operator);
    if(operator == '+'){
        printf("The sum is: %d", a + b);
    }
    else if(operator == '-'){
        printf("The difference is: %d", a - b);
    }
    else if(operator == '*'){
        printf("The product is: %d", a * b);
    }
    else if(operator == '/'){
        if(b != 0){
            printf("The quotient is: %d", a / b);
        }
        else{
            printf("Division by zero is not allowed");
        }
    }
    else{
        printf("Invalid operator");
    }
    return 0;
}

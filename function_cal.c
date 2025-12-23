#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int calculator(int x, int y,char op);


void main(){
    printf("\t  \t \n Welcome to TUI Calculator");
    int n1,n2;
    char operator;
    printf("\n Enter Num1 and  Num2 :");
    scanf("%d %d",&n1,&n2);
    printf("Enter Arithmetic operator (+ - / % * ):");
    scanf(" %c",&operator);
    int answer = calculator(n1,n2,operator);
    printf("%d",answer);
}

int calculator(int x, int y ,char op){
   int result;
    switch(op){
        case '+':
        return result = x+y;
        break;
        case '-':
        return result = x-y;
        break;
        case '*':
        return result = x*y;
        break;
        case '/':
        return result = x/y;
        break;
        case '%':
        return result = x%y;
        break;

    }
}

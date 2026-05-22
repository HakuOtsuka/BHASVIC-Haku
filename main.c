#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    int i,count=0;
    char expensesCause[20][20],choice,numberExpenses[20];
    float earnings=0,expenses[20],earningCalc,expensesCalc=0,final;
    printf("How much do you earn per month? (in pounds) A non-number input will be set to 0:");
    fflush(stdin);
    scanf("%f",&earnings);
    printf("You earned %.2f pounds per month.",earnings);
    printf("\nHow many expenses per month? If not number input I will assume none:");
    fflush(stdin);
    gets(numberExpenses);
    for(i=0;i<strlen(numberExpenses);i++) {
        if(isdigit(numberExpenses[i])==0) {
            count++;
        }
    }
    if(count<1) {
        for(i=0;i<strlen(numberExpenses);i++) {
            printf("Enter your expenses reason :");
            fflush(stdin);
            gets(expensesCause[i]);
            printf("Enter the expense cost (Any non-number input will be set to 0):");
            fflush(stdin);
            scanf("%f",&expenses[i]);
        }
        for (i=0;i<strlen(numberExpenses);i++) {
            if (expensesCause[i][0]!='\0') {
                printf("Cause %d:%s-%.2f\n",i+1,expensesCause[i],expenses[i]);
            }
        }
        printf("What period do you want to find for losses and profits?\nEnter D for days\nM for months\nW for weeks\n-->");
        fflush(stdin);
        scanf("%c",&choice);
        switch (toupper(choice)) {
            case 'D':
                earningCalc=earnings/28;
                for(i=0;i<strlen(numberExpenses);i++) {
                    expensesCalc=expensesCalc+expenses[i];
                }
                expensesCalc=expensesCalc/28;
                final=earningCalc-expensesCalc;
                if(earningCalc>expensesCalc) {
                    printf("You made a profit of %.2f per day",final);
                }
                else if(earningCalc<expensesCalc) {
                    printf("You made a loss of %.2f per day",final);
                }
                else {
                    printf("You didn't ear or lose any money per day");
                }
                break;
            case 'W':
                earningCalc=earnings/4;
                for(i=0;i<strlen(numberExpenses);i++) {
                    expensesCalc=expensesCalc+expenses[i];
                }
                expensesCalc=expensesCalc/4;
                final=earningCalc-expensesCalc;
                if(earningCalc>expensesCalc) {
                    printf("You made a profit of %.2f per day",final);
                }
                else if(earningCalc<expensesCalc) {
                    printf("You made a loss of %.2f per day",final);
                }
                else {
                    printf("You didn't ear or lose any money per day");
                }
                break;
            case 'M':
                for(i=0;i<strlen(numberExpenses);i++) {
                    expensesCalc=expensesCalc+expenses[i];
                }
                final=earnings-expensesCalc;
                if(earnings>expensesCalc) {
                    printf("You made a profit of %.2f per day",final);
                }
                else if(earnings<expensesCalc) {
                    printf("You made a loss of %.2f per day",final);
                }
                else {
                    printf("You didn't ear or lose any money per day");
                }
                break;
            default:
                printf("Invalid input");
                break;
        }
    }
    else {
        printf("\nYou cannot input letters or symbols in place of numbers");
    }
    return 0;
}
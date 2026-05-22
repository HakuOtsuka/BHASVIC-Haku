#include <stdio.h>
#include <ctype.h>
int main(void) {
    char userChoice;
    printf("\n Q1) What's 3+2 \ta)5 \tb)32 \tc)6 \td)9\n");
    fflush(stdin);
    scanf("%c",&userChoice);
    int Correct = 0;
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct++;
        break;
        }
        case 'B': {
            printf("Incorrect");
        break;
        }
        case 'C': {
            printf("Incorrect");
        break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default:{
            printf("Invalid so incorrect");
        break;

            }
        }
        printf("\n Q2) What's 33+2 \ta)35 \tb)332 \tc)66 \td)1089 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct = Correct +1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
        break;
        }
    }
    printf("\n Q3) What's 3+22 \ta)25 \tb)322 \tc)66 \td)28 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct +1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q4) What's 46+2 \ta)48 \tb)462 \tc)92 \td)1478 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q5) What's 134+4 \ta)138 \tb)1344 \tc)532 \td)1231 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q6) What's 3+67 \ta)70 \tb)367 \tc)636 \td)2354 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q7) What's 12+8 \ta)20 \tb)128 \tc)96 \td)823 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q8) What's 27+4 \ta)31 \tb)274 \tc)108 \td)109 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q9) What's 365+6 \ta)371 \tb)3656 \tc)626 \td)1263 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("\n Q10) What's 321+2 \ta)323 \tb)3212 \tc)642 \td)534 \n");
    fflush(stdin);
    scanf("%c",&userChoice);
    switch (toupper(userChoice)) {
        case 'A': {
            printf("Correct");
            Correct=Correct+1;
            break;
        }
        case 'B': {
            printf("Incorrect");
            break;
        }
        case 'C': {
            printf("Incorrect");
            break;
        }
        case 'D': {
            printf("Incorrect");
            break;
        }
        default: {
            printf("Invalid");
            break;
        }
    }
    printf("You got %d out of 10",Correct);
    return 0;
}
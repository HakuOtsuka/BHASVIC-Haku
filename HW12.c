#include <ctype.h>
#include <stdio.h>
void adopt(),feed(),play(),check();
int hunger,happiness,energy,owns=0;
int main(void) {
    do {
        int choice;
        printf("What would you like to do ? 1 to adopt, 2 to feed, 3 to play, 4 to check, 5 to quit:\n");
        fflush(stdin);
        scanf("%d",&choice);
        if (choice==1) {
            adopt();
        }
        else if (choice==2) {
            feed();
        }
        else if (choice==3) {
            play();
        }
        else if (choice==4) {
            check();
        }
        else if (choice==5) {
            owns=0;
        }
        else {
            printf("Invalid Choice\n");
        }
    }while (owns==1);
}

void adopt() {
    hunger=0;
    happiness=100;
    energy=100;;
    char name[20];
    printf("What would you like to call your pet?");
    fflush(stdin);
    gets(name);
    puts(name);
    owns=1;
}

void feed() {
    int food;
    printf("What food would you like to feed your pet? 1 for kibble, 2 for fish or 3 for a treat?:");
    fflush(stdin);
    scanf("%d",&food);
    if (food==1) {
        if (hunger>=65) {
            hunger=hunger-65;
        }
        else {
            hunger=0;
        }
    }
    else if (food==2) {
        if (hunger>=40) {
            hunger=hunger-40;
        }
        else {
            hunger=0;
        }
    }
    else if (food==3) {
        if (hunger>=15) {
            hunger=hunger-15;
        }
        else {
            hunger=0;
        }
    }
    else {
        printf("That's not something you can give\n");
    }
}

void play() {
    int activity;
    printf("What activity would you like to do? 1 for fetch, 2 for tug-of-war or 3 for nap?:");
    fflush(stdin);
    scanf("%d",&activity);
    if (activity==1) {
        happiness=happiness+40;
        if (happiness>100) {
            happiness=100;
        }
        if (energy>=40) {
            energy=energy-40;
        }
        else {
            energy=0;
        }
        if (hunger<100) {
            hunger=hunger+30;
        }
        if (hunger>100) {
            hunger=100;
        }
    }
    else if (activity==2) {
        happiness=happiness+25;
        if (happiness>100) {
            happiness=100;
        }
        if (energy>=25) {
            energy=energy-25;
        }
        else {
            energy=0;
        }
        if (hunger<100) {
            hunger=hunger+20;
        }
        if (hunger>100) {
            hunger=100;
        }
    }
    else if (activity==3) {
        happiness=happiness+10;
        if (happiness>100) {
            happiness=100;
        }
        energy=100;
    }
}

void check() {
    if (hunger>70) {
        happiness=happiness-50;
    }
    else if (hunger>50) {
        happiness=happiness-25;
    }
    if (energy==0) {
        happiness=happiness-20;
    }
    else if (energy<30) {
        happiness=happiness-10;
    }
    if (happiness<0) {
        happiness=0;
    }
    printf("Happiness is :%d\nHunger is :%d\nEnergy is :%d\n",happiness,hunger,energy);
}
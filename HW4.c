#include <math.h>
#include <stdio.h>
int main(void) {
    int repetitions;
    printf("How many primes would you like to see (Fromm smallest to largest)?\n");
    fflush(stdin);
    scanf("%d",&repetitions);
    for (int i =2; repetitions>0;i++) {
        int factors=0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                factors++;
            }
        }
        if (factors==2) {
            printf("%d ",i);
            repetitions--;
        }
    }
    return 0;
}
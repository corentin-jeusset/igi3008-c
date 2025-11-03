#include <stdio.h>

int isprime(int p){
    if (p < 2) return 0;
    for (int i = 2; i * i <= p; i++) {
        if (p % i == 0) return 0;
    }
    return 1;
}

int main(){
    int count = 0;

    for(int i = 2; i < 100; i++) {
        if (isprime(i)) {
            count++;
        }
    }

    printf("Il y a %d nombres premiers inférieurs à 100.\n", count);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
    clock_t start, end;
   
    // Start Record the time
    start = clock();
   
    // Your program....
    long long int fib[1001];

    fib[1] = 1;
    fib[2] = 1;

    printf("calculating...");
    for(int i=3; i<=1000; i++){
    	fib[i] = fib[i-1] + fib[i-2];
    }
    printf("fib[1000]:%lld", fib[1000]);




    // Record the end time
    end = clock();

    double diff = end - start; // ms
    printf(" %f  ms" , diff);
    printf(" %f  sec", diff / CLOCKS_PER_SEC );

    return 0;
}

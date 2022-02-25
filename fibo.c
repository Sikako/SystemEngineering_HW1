// date:2022/02/25
// SystemEngineering hw1
// calculate fibonacci sequence to 1000
// author:sikako Chen
// ----------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gmp.h>

int main(){


clock_t start, end;					// define start, end of time

// Start Record the time
start = clock();


// My program....
mpz_t fibo[1001];					// define 

for(int i=0; i<1001; i++){				// initialize
  mpz_init(fibo[i]);
}


mpz_init_set_str(fibo[0], "0", 10);			// fibo[0]=0
mpz_init_set_str(fibo[1], "1", 10);			// fibo[1]=1
     


// print
gmp_printf("f(0) = %Zd\n", fibo[0]);
gmp_printf("f(1) = %Zd\n", fibo[1]);

for(int i=2; i<1001; i++){
  mpz_add(fibo[i], fibo[i-1], fibo[i-2]);
  gmp_printf("f(%d) = %Zd\n", i, fibo[i]);

}

// Record the end time
end = clock();



double diff = end - start; // ms
printf("-----------------------------------------\n");
printf(" %f  ms" , diff);
printf(" %f  sec", diff / CLOCKS_PER_SEC );




return 0;
}



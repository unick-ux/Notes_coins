


//In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed.
//The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

//Input
//The input file contains an integer value N (0 < N < 1000000).

//Output
//Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example.
//Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.//


#include <stdio.h>

int main() {

        double N;

        scanf("%lf",&N);

        int C= (int) (N * 100 + 0.5);

        printf("NOTAS:\n");

        printf("%d nota(s) de R$ 100.00\n", C/10000);
        C = C % 10000;

         printf("%d nota(s) de R$ 50.00\n",C /5000);
         C = C % 5000;


         printf("%d nota(s) de R$ 20.00\n",C /2000);
        C = C % 2000;

         printf("%d nota(s) de R$ 10.00\n",C /1000);
        C = C % 1000;

         printf("%d nota(s) de R$ 5.00\n",C /500);
        C = C % 500;

         printf("%d nota(s) de R$ 2.00\n",C /200);
        C = C % 200;



         printf("MOEDAS: \n");

        printf("%d nota(s) de R$ 1.00\n", C/100);
        C = C % 100;

         printf("%d nota(s) de R$ 0.50\n",C /50);
         C = C % 50;


         printf("%d nota(s) de R$ 0.25\n",C /25);
        C = C % 25;

         printf("%d nota(s) de R$ 0.01\n",C /10);
        C = C % 10;

         printf("%d nota(s) de R$ 0.05\n",C /5);
        C = C % 5;

         printf("%d nota(s) de R$ 0.01\n",C /1);


    return 0;
}

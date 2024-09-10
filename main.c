#include <stdio.h>
int main() {

   int nilai[5] = { 45, 50, 88, 78, 91 }; // nilai statistika
   int total = 0; //

   for (int i = 0; i < 5; i++) {
         total += nilai[i];  // menghitung keseluruhan
   }

   int sum = total / 5;
   printf("%d",  sum);

   return 0;
}

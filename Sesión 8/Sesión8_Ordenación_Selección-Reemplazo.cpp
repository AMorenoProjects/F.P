// ORDENACIÓN - SELECCIÓN Y REEMPLAZO

#include <iostream>
using namespace std;

int main(){
   
   for (i = 0; i < N - 1; i++) {
      k = i;
      for (j = i + 1; j < N; j++) {
         if (v[j] < v[k]) {
            k = j;
         }
      }
      aux = v[i];
      v[i] = v[k];
      v[k] = aux;
   }
   
   return 0;   
}

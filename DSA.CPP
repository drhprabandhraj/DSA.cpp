#include <iostream>
using namespace std;
int main () {

   int arr[5] = {10, 20, 30, 40, 50};

   int largest = arr[0];

   for (int i=0; i<5; i++) {
      if (largest < arr[i]) {
         largest = arr[i];
      }
      
   }
   cout <<largest;
   
   return 0;
}
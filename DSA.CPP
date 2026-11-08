#include <iostream>
using namespace std;
int main () {

   int arr[5] = {10, 20, 30, 05, 50};

   int smallest = arr[0];

   for (int i=0; i<5; i++) {
      if (smallest > arr[i]) {
         smallest = arr[i];
      }
      
   }
   cout <<smallest;
   
   return 0;
}
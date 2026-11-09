#include <iostream>
using namespace std;
int main () {

   int arr[7] = {10, 15, 20, 25, 30, 35, 40};

   //int smallest = arr[0];

   for (int i=0; i<7; i++) {
      if (arr[i] % 2 != 0){
         cout <<arr[i] <<" " ;
      }
      
   }
   
   
   return 0;
}
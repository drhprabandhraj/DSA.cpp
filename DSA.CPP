#include <iostream>
using namespace std;

int main() {
   int arr[6] = {10, 50, 30, 80, 20, 60};

   int largest = arr[0];
   int second = arr[0];

   for (int i=0; i<6; i++) {
      if (arr[i] > largest) {
         second = largest;
         largest = arr[i];

      }
      else if (arr[i] > second){
         second = arr[i] ;
      }
      
   }
   cout <<second;

   return 0;
}
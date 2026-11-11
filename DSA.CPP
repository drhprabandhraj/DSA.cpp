#include <iostream>
using namespace std;
int main () {

   int arr[5] = {10, 20, 30, 40, 50};
   int size = sizeof(arr) / sizeof(arr[0]) ;

   int sum = 0;

   for (int i=0; i<5; i++)  {
      sum += arr[i];
      
   }
   cout <<sum / size;
   
   return 0;
}
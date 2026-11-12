#include <iostream>
using namespace std;
int main () {

   int arr[5] = {10, 20, 30, 40, 50};
   int target = 30;
   bool found = false;
   //int size = sizeof(arr) / sizeof(arr[0]) ;

   //int sum = 0;

   for (int i=0; i<5; i++)  {
      if (arr[i] == target) {
         found = true;
         break;
      }
   }
   
   if (found) {
      cout <<"Element found" ;
   }
   else {
      cout <<"Element not found" ;
   }
   
   return 0;
}
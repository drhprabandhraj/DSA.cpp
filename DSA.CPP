#include <iostream>
using namespace std;
int main () {

   int n=5;
   //int num=1;
   char ch= 'A';

   for (int i=1; i<=n; i++) {
      
      for (int j=1; j<=i; j++) {
         cout <<" " ;
      }
      for (int k=1; k<=n-i; k++) {
         cout <<ch;
      }
      //num++;
      ch++;
      cout <<endl;
   }
   return 0;
}
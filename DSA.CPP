#include <iostream>
using namespace std;
int main () {

   int n=3;
   //char ch = 'A';
   int num=1;

   for (int i=1; i<=n; i++) {
     // char ch = 'A';
      for (int j=1; j<=n; j++) {
         cout <<num <<" ";
         //ch++;
         num++;
      }
      cout <<endl;
   }
   return 0;
}
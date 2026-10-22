    Hello word
// #include<iostream>
// using namespace std;
// int main (){
//     cout<<"Prabandh raj";

// return 0;
// }


    //    
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the value of n = ";
//     cin>>n;
//     int count = 1;
//     int sum = 0;
//     while (count<=n)
//     {
//         sum = sum + count ;
//         count = count + 1;
//     }
//     cout<<"Answer = ";
//     cout<<sum;
    
// return 0;
// }




// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter the value of n = ";
//     cin>>n;
//     int count = 1;
//     int sum = 0;
//     while (count<=n)
//     {
//         sum += count ;
//         count += 1;
//     }
//     cout<<"Answer = ";
//     cout<<sum;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter the value of n";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//      sum+=i;
//     }
//      cout<<"sum="<<sum;
    
//     return 0;
// }

     // Hello Word
// #include<iostream>
// using namespace std;
// int main (){
//     cout<<"Prabandh "<<endl <<"raj";
// return 0;

     //   Arithmetic Operators
// #include<iostream>
// using namespace std;
// int main (){
//     int a, b;
//     cout<<"Enter the value of a = ";
//     cin>>a;
//     cout<<"Enter the value of b = ";
//     cin>>b;
//     cout << "sum = " <<a+b << endl;
//     cout << "diffrence = " <<a-b << endl;
//     cout << "product = " <<a*b << endl;
//     cout << "division = " <<a/b << endl;
//     cout << "remainder = " <<a%b << endl;
// return 0;
// }

     //    Area of square
// #include<iostream>
// using namespace std;
// int main (){
//     int a;
//     cout<<"Enter a = ";
//     cin>>a;
//     int area = a*a;
//     cout<<"Area = "<<area;
// return 0;
//     }

     //    Minimum of 2 numbers
// #include<iostream>
// using namespace std;
// int main (){
//     int a, b;
//     cout<<"Enter a = ";
//     cin>>a;
//     cout<<"Enter b = ";
//     cin>>b;
//     if(a<b)
//     cout<<"Answer = "<<a;
//     else
//     cout<<"Answer = "<<b;
// return 0;
//     }

   // Even or Odd
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout <<"Enter the number = ";
//      cin>>n;
//      if(n%2 == 0)
//      cout<<"Nunmber is = even";
//      else
//       cout<<"Nunmber is = odd";
// return 0;
//     } 

      //  sum of numbers from 1 to N.
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout<<"Enter the number n = ";
//      cin>>n;
//      int i = 1, sum = 0;
//      while(i<=n){
//         sum = sum + i;
//         i = i + 1;
//      }
//      cout<<"Answer = "<<sum;

//      return 0;
//     } 

      // is number Prime or not 
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout << "Enter the number of n = ";
//      cin>>n;
//      int i = 2;
//      while (i <= n - 1){
//       if (n % i == 0){
//          cout << "Not Prime ";
//          return 0;
//       }
//       else
//       i = i + 1;
//      }
//      cout << "Prime";
//      return 0;
//     }
     
     //      calculate max of 2 number.
// #include<iostream>
// using namespace std;
// int main (){
//    int a, b;
//    cout << "Enter the value of a = ";
//    cin >> a;
//    cout << "Enter the value of b = ";
//    cin >> b;
//    if (a>b){
//    cout << "Maximum number is = " << a;
//    }
//    else{
//    cout << "Maximum number is = " << b;
//    }
//      return 0;
//     }

     //   calculate factorial of a number N.
// #include<iostream>
// using namespace std;
// int main (){
//       int n, i ;
//        i = 1 ;
//       cout << "Enter the value of n = ";
//       cin >> n;
//       int fact = 1;
//       while(i <= n){
//            fact = fact * i;
//            i = i + 1;   
//       }
//        cout << "Answer = " << fact;

//      return 0;
//     }

     // Driving license 
// #include<iostream>
// using namespace std;
// int main (){
//       int age ;
//       cout << "Enter the person age = ";
//       cin >> age ;
//       if(age >= 18){
//             cout << "The Person should get driving license = Yes";
//       }
//       else{
//             cout << "The Person should get driving license = No";
//       }
//      return 0;
//     }


     // Simple Interest.
// #include<iostream>
// using namespace std;
// int main (){
//       int P, R, T;
//       cout << "Principal : ";
//       cin >>P;
//       cout << "Rate of interest : ";
//       cin >>R;
//       cout << "Time : ";
//       cin >>T;
//       float SI;
//       SI = (P*R*T)/100;
//       cout <<"Simple Interest : "<< SI;

//      return 0;
//     }


     //   Grade
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout << "Full marks : ";
//      cin >> n;
//      if(n>90){
//           cout <<"Grad : A";
//      }
//      else if(n > 80){
//           cout <<"Grad : B";
//      }
//      else if(n > 70){
//           cout <<"Grad : C";
//      }
//      else if(n > 60){
//           cout <<"Grad : D";
//      }
//      else if(n > 30){
//           cout <<"Grad : Pass";
//      }
//      else{
//      cout << "Grad : Fall";
//      }
//      return 0;
//     }

    //    Print numbers 1 to n
// #include<iostream>
// using namespace std;
// int main (){
//      int n ;
//      cout << "Enter the number n : ";
//      cin >> n;
//      int i = 1;
//      while (i <= n)
//      {
//           cout << i << " ";
//           i++;
//      }
//      return 0;
//     }

    // sum of numbers 1 to n.
// #include<iostream>
// using namespace std;
// int main (){
//      int n, i ;
//      cout << "enter n : ";
//      cin >> n;
//      int sum = 0;
//      for (i = 1; i <= n; i++){
//           sum = sum + i;
//      }
//      cout << sum;
//      return 0;
//     }

     // Print number 1 to n.
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout<<"number : ";
//      cin>>n;
//      cout<<"no is : ";
//      for(int i=0;i<=n;i++){
//           cout<<i<<" ";
//      }
//      return 0;
// }
  
     //  sum of all even numbers from 1 to N.
// #include<iostream>
// using namespace std;
// int main (){
//      int n;
//      cout<<"number : ";
//      cin>>n;
//      int sum = 0;
//      for(int i=1; i<=n; i++){
//           if (i%2 == 0){
//                sum = sum + i;
//           }
//      }
//      cout << "sum : "<< sum;
//      return 0;
// }

     //   sum of all odd numbers from 1 to N.
// #include<iostream>
// using namespace std;
// int main (){
//      int n, i = 1 ;
//      cout << "Number : ";
//      cin >> n;
//      int sum = 0;
//      while (i <= n) {
//           if (i%2 != 0){
//                sum += i;   
//           }
//           i++;
//      }
//      cout << "sum : "<< sum;
//      return 0;
// }

     //  sum of all numbers from 1 to N which are divisble by 3.
// #include<iostream>
// using namespace std;
// int main (){
//      int n ;
//      cout << "Enter the n : ";
//      cin >> n;
//      int sum = 0;
//      for (int i=1; i<=n; i++){
//           if (i%3 == 0){
//                sum += i;
//           }
//      }
//      cout << "Ans : "<< sum ;
//      return 0;
// }

     //   calculate factorial of a number N.
// #include<iostream>
// using namespace std;
// int main (){
//      int n = 3;
//      int fact = 1;
//      for (int i=1; i<=n; i++) {
//           fact = fact * i;
//      }
//      cout << "Factorial : "<< fact ;
//      return 0;
// }

     //prime or not
// #include<iostream>
// using namespace std;
// int main (){
//      int n ;
//      cout << "Enter the n : ";
//      cin >> n;
//      int count=0;
//      for (int i=1; i<=n; i++){
//           if(n%i == 0){
//                count++;
//           }
//      }
//      if( count == 2){
//           cout << "prime";
//      }
//      else{
//           cout << "not prime ";
//      }
//      return 0;
//     }

// #include<iostream>
// using namespace std;
// int main (){
//     int n,m;
//     cout << "Enter the number of n : ";
//     cin >> n;
//     cout << "Enter the number of m : ";
//     cin >> m;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=m; j++){
//             cout << "*"<<" " ;
//         }
//         cout <<endl;
//     }
//      return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
//      string name;
//      cout <<"enter your name : " ;
//      cin>> name;
     
//      cout <<"your name is : "<< name <<endl;
//      return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
//      string name;
//      cout <<"enter your name : " ;
//      getline(cin, name);
     
//      cout <<"your name is : "<< name <<endl;
//      return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
//      string s = "Bhopal";
//      cout <<"Length : "<<s.length();
//      return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
//      string name;
//      cout <<"enter your name : " ;
//      getline(cin, name);
     
//      cout <<"your name is : "<< name.length() <<endl;
//      return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n=73;

//    //cout <<"0191IA251" ;

//    for (int i=1; i<=n; i++) {
//       cout <<"0191IA251" ;

//       if (i<10) {
//          cout <<"00";
//       }
//       else {
//          cout <<"0";
//       }
//       cout <<i <<endl;
//    }
   
//    return 0;
// }


//    Pattern
// #include <iostream>
// using namespace std;
// int main () {
//    int n=4;

//    for (int i=1; i<=n; i++) {
//       for (int j=1; j<=n; j++) {
//          cout <<j <<" ";
//       }
//       cout <<endl;
//    }
//    return 0;
// }


  // Star Square Pattern
// #include <iostream>
// using namespace std;
// int main () {
//    int n=4;

//    for (int i=1; i<=n; i++) {
//       for (int j=1; j<=n; j++) {
//          cout <<"*" <<" ";
//       }
//       cout <<endl;
//    }
//    return 0;
// }


//    Alphabet Square Pattern
// #include <iostream>
// using namespace std;
// int main () {
//    int n=4;

//    for (int i=1; i<=n; i++) {
//       char ch='A';
//       for (int j=1; j<=n; j++) {
//          cout <<ch <<" ";
//          ch += 1;
//       }
//       cout <<endl;
//    }
//    return 0;
// }


//    Number Square Pattern
// #include <iostream>
// using namespace std;
// int main () {
//    int n=3;
//    int num = 1;

//    for (int i=1; i<=n; i++) {
      
//       for (int j=1; j<=n; j++) {
//          cout <<num <<" ";
//          num++;
         
//       }
      
//       cout <<endl;
//    }
//    return 0;
// }
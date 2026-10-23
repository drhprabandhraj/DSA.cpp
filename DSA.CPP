//        Hello word 

// #include <iostre
// using namespace std;
// // // // // int main () {

// // // // //     cout <<"Hello word" <<endl;

// // // // //     return 0;
// // // // // }


// // // // //    Area of square

// // // // #include <iostream> 
// // // // using namespace std ;
// // // // int main () {

// // // //     int a ;

// // // //     cout << "a : " ;
// // // //     cin >>a;

// // // //     cout <<"Area of square : " <<a*a <<endl;

// // // //     return 0 ;
// // // // }



// // // //     minimum of two number

// // // #include <iostream> 
// // // using namespace std;
// // // int main () {

// // //     int a,b;

// // //     cout <<"Enter a : " ;
// // //     cin >>a;

// // //     cout <<endl;

// // //     cout <<"Enter b : " ;
// // //     cin >>b;

// // //     if (a<b) {
// // //         cout <<"Minimum number is : "<<a <<endl;
// // //     }
// // //     else {
// // //         cout <<"Minimum number is : " <<b <<endl;
// // //     }

// // //     return 0;
// // // }


// // //   Even and Odd 

// // #include <iostream> 
// // using namespace std;
// // int main () {
    
// //     int num ;

// //     cout <<"Number : " ;
// //     cin >>num;

// //     if (num % 2 == 0) {
// //         cout <<"Number is Even \n" ;
// //     }
// //     else {
// //         cout <<"Number is Odd \n" ;
// //     }

// //     return 0;
// // }


// //    sum of number 1 to N 

// # include <iostream> 
// using namespace std ;
// int main () {
     
//     int num;
//     cin >>num;

//     int count = 0;

//     for (int i=1; i<=num; i++) {
//         count += i;
//     }

//     cout <<count <<endl;

//     return 0;
// }


//     Prime number 

// #include <iostream> 
// using namespace std;
// int main () {

//     int n;
//     cin >>n;

//     int i=2;
//     while(i<=n-1) {
//     if (n%i==0) {
//             cout <<"not prime" <<endl;
//             return 0;
//         }
//         else 
//         i += 1;
//     }
//     cout <<"prime";
//     return 0;
// }


//    factorial 

// #include <iostream>
// using namespace std;
// int main () {
     
//     int n;
//     cin >>n;

//     int fact = 1;

//     for (int i=1; i<=n; i++) {
//         fact *= i;

//     }
//     cout <<"Factorial : " <<fact <<endl;

//     return 0;
// }


//    Driving license

// #include <iostream>
// using namespace std;
// int main() {

//     int age ;
//     cin >>age;

//     if (age >= 18) {
//         cout <<"Driving license : " <<"Eligible";
//     }
//     else {
//         cout <<"Driving license : " <<"Not Eligible";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main( ) {
//     int marks[]={99, 100, 54, 36, 88};

//     cout <<sizeof(marks)/4 <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int marks[] = {55, 99, 45, 99};
//     int size = 4;

//     for (int i=0; i<size; i++){
//         cout <<marks[i] <<endl;
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main() {
//     int size = 5;
//     int marks[size] ;
    
//     for (int i=0; i<size; i++) {
//         cin >>marks[i] ; 
//     }

//     for (int i=0; i<size; i++) {
//         cout <<marks[i] <<endl ;
//     }
//     return 0;

// }


    //find smallest value in array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {102, 45, 88, -105, 600};

//     int smallest=arr[0];
    
//     for (int i=0; i<5; i++) {
//         if (smallest > arr[i]) {
//             smallest = arr[i];
//         }
//     }

//     cout << "smalest : " <<smallest;
//     return 0;

// }

   //find largest value in array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5] = {55, 99, -58, 45, 99};
//     int largest=arr[0];

//     for (int i=0; i<5; i++) {
//         if (largest < arr[i]) {
//             largest = arr[i];
//         }
//     }

//     cout <<"largest : " <<largest;
//     return 0;

// }

   //largest value and index in array
// #include <iostream>
// using namespace std;
// int main() {  
//     int arr[5] = {15, 44, 28, 103, 99} ;
//     int largest = arr[0];
//     int index = 0;

//     for (int i=0; i<5; i++) {
//         if (largest < arr[i]) {
//             largest = arr[i];
//             index = i;
//         }
//     }

//     cout <<"largest : " <<largest <<endl;
//     cout <<"index :" <<index;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void name() {
//     cout <<"Prabandh raj";
// }
// int add(int a, int b) {
//     return a+b;
// }
// void min(int a, int b) {
//     if (a>b) {
//         cout <<b;
//     }
//     else {
//         cout <<a;
//     }
// }

// int main() {  
//     name();
//     cout << endl;
//     int result = add(4,5);
//     cout <<result;
//     cout <<endl;
//     min (4,5);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
    
//     int n=5;
//     int m=5;

//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             cout <<" "; 
//         }
//         cout <<"*" <<endl;
//     }
//     return 0;
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


//    Square Pattern
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


//    Star Square Pattern
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


   //Number Square Pattern
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


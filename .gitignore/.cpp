//cpp program to output whether or not a number is prim from user
//inputs
#include <iostream>

using namespace std;

int main (){
          int num = 0;
          int i;
          
          //getting inputs from the user
          cout << "Enter a number : ";
          cin >> num;
          
          if (num == 1){
                    cout << "Prime numbers begin from 2 and above" << endl;
          }
          //we set the initial starting point to 2
          for (i = 2; i < num; i++){
                    //if the remainder of the number is 0,
                    //then it is not prime
                    if (num % i == 0){
                              cout << num << " is not a prime number" << endl;
          }
          
          //we then check for prime number
          if (num == i){
                    cout << num << " is a prime number" << endl;
          }
          
   return 0;
            
 }

#include<iostream>
using namespace std;

bool checkEven(int num);

int main(){
   int num;
   bool isEven;
   cout<<"Enter any number: ";
   //Storing the entered value in variable num
   cin>>num;
   //Calling the function that checks even odd
   isEven = checkEven(num); 
   if(isEven)   
      cout<<num<<" is an even number"; 
   else   
      cout<<num<<" is an odd number";
  
   return 0;
}

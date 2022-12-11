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
// side note even numbers are divisible by 2 hence:(create and call function also function uses modular approach)
bool checkEven(int num){
   bool b;
   /* If number is perfectly divisible by 2 then it is
    * an even number else it is an odd number*/
   if (num % 2 == 0)
      b=true;
   else 
      b=false;

   return b;
}

// part 2
#include <iostream>

using namespace std;

int main()

{

int num1,num2,num3;

cin>>num1>>num2>>num3;

cout<<"max = "<<max(num1,max(num2,num3));

}

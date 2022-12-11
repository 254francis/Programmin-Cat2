#include<iostream>
using namespace std;
int main(){
    //Declaration & Initialization
int sum,avg,no_of_students,marks,max_marks;
int sum = 0;
int avg = 0;
int no_of_students = 0;
int marks = 0;

//Input values
cin >> no_of_students;
//loop
for (int i = 1; i <= no_of_students; i++)
{
    /* code */
    cin>>marks;
    sum = sum + marks;
    if(marks>max_marks)max_marks = marks;
}
//Average and output
avg = sum/no_of_students;
cout<<"Max marks is:"<<max_marks <<endl;
cout<<"Avg marks is:"<< avg <<endl;

return 0;

}

//Part 2
//Global scope
#include<iostream>
using namespace std;
 
// global variable
int global = 5; //can be accessed outside a function
 
//Local scope// can only be accessed in a function
using namespace std;
int main () {
   // Local variable declaration:
   int num1, num2;
   int num3; //avoided using reserved words like sum
   // actual initialization
   num1 = 10;
   num2 = 20;
   num3 = num1 + num2;
   cout << num3;
   return 0;
}
//Function-Prototype scope-//Only visible and Accesible in the prototype and ends after declaration
int Add(int num1, int num2);
 
int num1;
 
// Function to Addition
int Add(int num1, int num2)
{
    return (num1+ num2);
}
//Function scope- //found between opening and closing of a function

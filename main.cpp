#include <iostream>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <iomanip> 
#include "include/variable.hpp"

using namespace std;


// Global variable declaration:
int g = 20;




int main () {
   // Local variable declaration:
   int g = 10;

   cout <<"the value of a local variable inside a function is "<<g<<endl;   // the value of a local variable inside a function will take preference
   
   cout<<endl;
   
   cout << "global variable accessed from main function" <<endl;
   cout<<"via the scope resolution operator(::) is " << ::g<<endl; // Global 
   
  
   //During the first call of the function test, var is declared as static local variable in function
  //and is initialized to 0. Then 1 is added to var the result of which is displayed in the screen.
   cout<<endl; 
   
   test();
   
   cout<<endl;
   //"When the function test() returns, variable var still exists because it is a static variable.
   //"During second function call, no new variable var is created.
   //"The same var is increased by 1 and then  the result 2 is displayed to the screen.

   test();
   
   cout<<endl;
   
    register int i = 10;
    int* a = &i;
    
    
    cout<<"the local register variable is "<<*a<<endl;
  
    memory_alloc();
   
   return 0;
}

#include <iostream>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <iomanip> 
#include "include/variable.hpp"

using namespace std;





void test()
{
    // var is a static local variable
    static int var = 0;
    ++var;

    cout << var << endl;
}


void memory_alloc(){

    srand(time(0)); // generating random numbers
    float *ptrarray = new float [10]; // creating dynamic array of 10 numbers 
        for (int count = 0; count < 10; count++)
            ptrarray[count] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //filling in with numbers in the range from 0 to 10
        cout<<"dynamic array of 10 numbers: "<<endl;
        cout << "array = ";
        for (int count = 0; count < 10; count++)
            cout << setprecision(2) << ptrarray[count] << "    ";
        delete [] ptrarray; //emptying memory
        cout<<endl;

}


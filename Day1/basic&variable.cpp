// The Basic syntax of c++
#include<iostream> // including preprocessor
using namespace std; // for std::cout
int main() {   // this is main function 


    cout<<"Hello from C++ DSA"; // for indentation
    // espaces are for new line "\n", endl;
    cout<<"\nthis is new line "<<endl ; // use newline in front and at last of printing statement 
                                        // these both can be used for same purpose

    cout<<4+5<<endl;

    cout<<"4+5 yes";

    int x; // int data type is declared as x

    x=7; // this value is stored 

    x=10; //value will be updated to now 10

    cout<<x;

    // next value updating
    cout<<x+9; //29
    //or
    x=x+10;  // here you can use  other mathematical opration also.
   
   //alternative ways
   x+=10; //works same 

   // x*=5, x/=5, x+=5, x-=5
   
    cout<<x<<"\n";



    // easiet way to declare a variable and assign valyue is:
    int y=19;
    
   
     return 0; //optional                    
}
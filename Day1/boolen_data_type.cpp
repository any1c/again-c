#include<iostream>
using namespace std;
int main() {
    bool flag=false;
    cout<<flag<<endl;
    bool pole=true;
    cout<<pole<<endl;

    // also if you add any nonzero number you'll get 1 or which is know as True
    cout<<(5>3)<<endl; // this is true and print 1
    cout<<(5<3)<<endl; // this is false and print 0

    cout<<(5%2)<<endl; // as tried wih float and double
    // here I got the whenver using modulus operator use int keyword or data type float doesn't work in division in c++
    // so just remember they should always be int.

   // about float 
   float d;
   d=2/7;
   cout<<"I'm : "<<d<<endl;

   float e;
   e=2/7.0;
   cout<<e<<endl;

    return 0;
}
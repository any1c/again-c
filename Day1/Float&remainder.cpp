#include<iostream>
using namespace std;
int main() {
    float j=3.1;
    
    j+=1;
    cout<<j<<endl;

    // old example of decimal
    float x=5;
    float y=2;

    cout<<x/y<<endl;
    cout<<5/2<<endl; // this will automatically get integer type
    cout<<5.0/2<<endl; // this will be considerd float
    cout<<5/2.0<<endl;
    cout<<5.0/2.0<<endl;
    // similarly float/int= float

    /* implicit conversion error example
    int a=2.1
    cout<<a
    still it will called and printed 2 as int,also show us integer */
    
    cout<<5.0<<endl;
    cout<<5+3.14<<endl;

    // challange question
    // eaiset way to find remainder in programming use "%"
    int a=10;
    int b=3;
    cout<<a%b<<endl;

    // in float check this intersting thing:
    float d;
    d=2/7.0;
    cout<<d<<endl;

    
}
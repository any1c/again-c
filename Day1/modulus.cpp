#include<iostream>
using namespace std;
int main()
{
    // modulus opertaor % for demainder
    // whenever a is greater than b we get remainder 
    cout<<10%3<<endl;
    // whenever a is equal to b we get remainder
    cout<<10%10<<endl;
    // whenever a is less than b what we get 
    cout<<2%4<<endl; // but why 2 here ??
    // this is the basic math 
    /* When we come to know their is remainder when dividend is smaller than divisor so, same in that case,
    when we are dividing 2/4 where dividend is smaller then divisior so will end up agreeing dividend as 2 smaller number */
     
     // on more thing here 
     cout<<99%4<<endl;
     cout<<99%-4<<endl; // why there answer are same
     cout<<99%(-4)<<endl;
     // here it is a propeties that it also divisible by -4 as 4

     cout<<-99%4<<endl; // here is also hiearchy of c++
     cout<<-99%-4<<endl; // when both are neagtive

     // in class assignemt 
     float x=90;
     float x1=91;
     float x2=92;
     float x3=93;
     float x4=94;
     float  percentage=(x+x1+x2+x3+x4)/5; // so basically integer divide by integer is = integer
     cout<<percentage<<endl;


     // area of circle formula 
     float radius= 12;  // now you can chnage radius and with doing small change you can do it faster again and again
     float a;
     a=3.14*radius*radius;
     cout<<a<<endl;  // correct ouput; 22/7 or 3.14 value of pi 


}
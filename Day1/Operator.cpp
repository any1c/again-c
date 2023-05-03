# include<iostream>
using namespace std;
int main(){

    // arithmetic operators 
     int x =5;
     int y =2;
     cout<<x+y<<endl;
     cout<<x-y<<endl;
     cout<<x*y<<endl;
     cout<<x/y<<endl; // now this case the output is 2 but it should be 2.5, this is becausce of your data types declared
     float z=0;               //if it would be float it would show 2.5, 
     z=x/float(y);  
      // by this type casting method you can convert y to float with float(function) and do it it is temporary
     cout<<z<<endl;
     cout<<y<<endl; // even you can check after updating it to float we can see y is still int, yes!
     // increement and decreement with pre and post fix 
     int n=5;
     n++;
     cout<<n<<endl;
     
     int m=5;
     m++;
     cout<<m<<endl;

     // There is no difference when you are declaring them like this but if you declare them while printing it make
     // huge difference directly pritnting it.
    
     // Prefix means first add then give value 
     cout<<++m<<endl; // now before this value of m was 6 now it would be 7 first increement 
     
     // postfix  
     cout<<n++<<endl; //here it will be 6 as value id 6  // first value then add when next time declaring.
     cout<<n<<endl; //here it will be 7 as post increement

     // same follows in decreement 
}
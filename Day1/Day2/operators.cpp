/*
relation operator 
=== is equal to, != not eqaul to > greater than , < less than , <=less than equal to ,>= more than equal to

x=3;
cout<<(x==3)<<endl; 1 true 
cout<<(x==7)<<endl; 0 false
cout<<(x=7)<<endl here it will assign x to 7

relational operator always print in 1 or 0's

Assignment Operator
+=, -=, *=, %=, /=


int x=5;
x=x+5; they're 
x+=5; same 

now,

int p=1;
int q=2;
int r=2;

answer is 0 from left hierarchy 1==2 no 0 and then 0==2 no false; so, 0

bool p=false;
bool q=false;
bool r=true;

now in 2's comparison it is easy to understand what about in 3's

in 3's will left to right

(p==q==r) 
so first p===q yes so, true and 1 then after True or 1==r which is 1 that is also true so, answer is 1

now if we reverse this it would be false cout<<(r==p==q); 0
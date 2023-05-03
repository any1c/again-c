/*
there is no more special thing about char the special is char and int conversion
every char have ascii value even 1 , 'a', 'b' 'Z'
ways to know the ascii value;
two types values:
cout<<int(ch);
cout<<(int)ch;

you just remember there are only three values you need to remember which are 
A-65
a-97
0-48. // you remember more of this in assembly language.

now 0-9 is only available in char you don't have to go beyond this,
becausce, you learned this all in assembly
now we can change data types to different different to int, float, char
>- Type casting.
float y=7.1;
float y;
y=int(x)
cout<<y;  // this is good way to do it.

also bool is interconversion:
bool x=false;
cout<<x+9;   -->9 =0+9

// now this is a automatic thing in c++
 char ch='A';
   cout<<ch+100;
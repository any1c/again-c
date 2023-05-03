/*
#include <iostream>
using namespace std;
int main() {
    
   int number;
   cin>>number;
   
   if(number>=100 && number<=99)
   {
       cout<<"Yes this is three digit number:";
   }
   else
   {
       cout<<"No, this is not three digit number:";
   }
    

    return 0;
}
 AND &&
  int number;
   cin>>number;
   
   if(number%5==0 and number%3==0)
   {
       cout<<"This number : "<<number<<" divisble by 5 and 3";
   }
   else
   {
       cout<<"Not divisible by 5 and 3:";
   }

   OR ||
    
    int number;
   cin>>number;
   
   if(number%5==0 || number%3==0)
   {
       cout<<"This number is : "<<number<<" divisble by 5 and 3";
   }
   else
   {
       cout<<"Not divisible by 5 and 3:";
   }

   greatest number of all three
   #include <iostream>
using namespace std;
int main() {
    
    int a,b,c;
    cout<<"Please enter three numbers:";
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    {
        cout<<a<<"Yaar, a is the greatest number: ";
        
    }
    else if(b>a && b>c)
    {
        cout<<b<<"Yaar, b is the greatest number then: ";
    }
    
    else
    {
        cout<<c<<"fir yaar aab c is the greatest number: ";
    }
    return 0;
}

// MAKE A PROGRAM TO CHECK WHETHER THE CHAR IS ALPHABET OR NOT:
// industry grade approach
    char ch;
    cout<<"Please enter the char to verify if it is alphabet or not: ";
    cin>>ch;
    
    if((int)ch>=65 && (int)ch<=90 || (int)ch>=97 && (int)ch<=122)
    {
        cout<<"This is alphabet "<<ch<<" with ASCII "<<(int)ch;
    }
    else
    {
    cout<<"This is not alphabet "<<ch<<" with ASCII "<<(int)ch; 
    }

// basic approach; or baby approach
    char ch;
    cout<<"Please enter the char to verify if it is alphabet or not: ";
    cin>>ch;
    
    if((ch>='A' && ch<='Z' || ch>='a' && ch<='z'))
    {
        cout<<"This is alphabet "<<ch<<" with ASCII "<<(int)ch;
    }
    else
    {
    cout<<"This is not alphabet "<<ch<<" with ASCII "<<(int)ch; 
    }

    check if number is divisible by 5 or 3 but not 15 

    int number;
    cout<<"Please enter the number: ";
    cin>>number;
    
    if(number%3==0 || number%5==0)
    {
       if(number%15!=0)
       {
           cout<<"Yes, it is divisble by 5 or 3 but not 15";
       }
       else
       {
           cout<<"Not, divisble by 15:";
       }
    }
    else
    {
        cout<<"Not divisble by 5 and 3"; 
    }
    
    return 0;
    
}
      ELSE IF :- Main motive is to when if statement is not printing it will get to the next, once execute it will go out.
      int marks;
    cout<<"Please enter the marks: ";
    cin>>marks;
    if(marks>=91)
    {
        cout<<"excellent";
    }
    else if(marks>=81)
    {
        cout<<"good";
    }
    else if(marks>=71)
    {
        cout<<"can do better luck next time: ";
    }
    else if(marks>=61)
    {
        cout<<"BAD:";
    }
    else if(marks>=51)
    {
        cout<<"bye: ";
    }
    else
    {
        cout<<"Fail";
    }

    // same here in above, if you want to make sure, check the above code write if statement,
       all places, then each and every statement after that will print



       alphabet and voewls
        char ch;
    cout<<"Please enter the char:";
    cin>>ch;
    
    if((int)ch>=97 && (int)ch<=122 || int(ch)>=65 && int(ch)<=90)
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch== 'o'|| ch=='u' || ch=='A'|| ch=='I' || ch=='O'|| ch=='U')
        {
            cout<<"Yes the char is vowel";
        }
        else
        {
            cout<<"It is not vowel: ";
        }
    }
    else
    {
        cout<<"It is not even a alpahabet";
    }

    check if the sides are triangle
    formula is a+b>c have to this for triangle

      int a,b,c;
    cout<<"Please enter first side of triangle";
    cin>>a;
    cout<<"second side";
    cin>>b;
    cout<<"Third side: ";
    cin>>c;
    
    if((a+b>c) && (b+c>a)&& (c+a>b) )
    {
        cout<<"Yes, this is triangel: ";
        
    }
    else
    {
        cout<<"This is not a triangle: ";
    }
    

    return 0;
}
}
*/

// there will be warning when you do the switch in condition,
// but still you get chance and proceed

/*
#include <iostream>

using namespace std;

int main()
{
   //  months with 31 days 1,3,5,7 8,10,12
   // months with 30 days 4,6,9,11
   // leap year 28
   
   int month;
   cout<<"Enter month and will tell you how many days is in the month: ";
   cin>>month;
   
   switch(month<=7 && month%2!=0 || month>=8 && month%2==0)
   {
       case 1:
          cout<<"31 days";
   }
   
   switch(month==4 || month==6 || month==9 || month==11)
   {
       case 1:
       cout<<"30 days";
       
   }
   switch(month==2)
   {
       case 1:
        cout<<"28 days: ";
   }

   return 0;

   }
      
      #include <iostream>

using namespace std;

int main()
{
   //  months with 31 days 1,3,5,7 8,10,12
   // months with 30 days 4,6,9,11
   // leap year 28
   
   int num1,num2;
   char op;
   cout<<"enter the number and problem: ";
   cin>>num1>>op>>num2;
   
   switch(op)
   {
       case '+':
         cout<<num1+num2;
         break;
         
        case '-':
         cout<<num2-num1;
         break;
         
         case '/':
            cout<<num1/num2;
            break;
         
         case '%':
             cout<<num1%num2;
             break;
             
         case '*':
             cout<<num1*num2;
             break;
             
         default:
         
             cout<<"OUT OF SCOPE: ";
   } 
         return 0;



         // one more concept 

         if is also running with expresions other than condition

         if(3+2%5)
           cout<<"This works"
         if(5)
           cout<<"this also"
        if(-5)
          cout<<"suprisingly this also works: ";
}

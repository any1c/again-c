// loops are used to avoid reptition of things and task, same thing pattern
 /*
#include<iostream>
using namespace std;
int main()


{
    for(int i= 1; i<=10; i++)
    {
        cout<<"Good Morning"<<endl;
        cout<<"helllo"<<endl;
    }
    

     int n;
   cout<<"enter number of times: ";
   cin>>n;
   
   for(int i=1;i<=n;i++)
   {
       cout<<"Hello World"<<endl;
   }


   // Loops are all about: Intialization, check, inside loop, increement, repeat

   // remeber when things are declare inside loop suppose i it will remain in that { } only,
   it will do nothing out of the loop example priting of i outside which will not work,
   so can even declare the intialization out of and before the loop

   // in that case you can even do like this to make sure the intialzaition before loop

   int main()
{
   int n;
   cout<<"enter number of times: ";
   cin>>n;
   int i;
   for(i=1;i<=n;i++)
   {
       cout<<"Hello World"<<endl;
   }
   cout<<i;

   // other alternative way;

   int i=1;
   for(;i<=n;i++)

   1 to 100

    for(int i=1;i<=100;i++)
   {
       cout<<i<<endl;
   }

   even 1 to 100
    for(int i=1;i<=100;i++)
   {
      if(i%2==0)
      {
       cout<<i<<endl;
      }
   }

    for(int i=1; i<=10;i++)
   {
       cout<<i*19<<endl;
   }

for(int i=19;i<=190;i+=19)
    {
        cout<<i<<endl;
    }
 this is also another way
 for(int i=19;i<=190;i++)
    {
        if(i%19==0)
        {
        cout<<i<<endl;
        }
    }

    // if you are a good programmer always try to use loop less number of time, more the loop will run more
       time it will consume, thereby.

       //ARITHMETIC PROGRESSION

       int n;
  cout<<"Please enter the term till nth:";
  cin>>n;
  
  for (int i=1;i<=2*n-1;i+=2)
  {
      cout<<i<<endl;


  } 

  in it we add the diffrence 

  // 2nd method to do AP

  int n;
  cout<<"Please enter the term till nth:";
  cin>>n;
  int a=1;
  
  for (int i=1;i<=n;i++)
  {
      cout<<a<<endl;
      a+=2;
  }

  // GEOMETRIC PROGRESSION is ratio wise 

  in this we multiply the difference and get Gp
    int n;
  cout<<"Please enter the term till nth:";
  cin>>n;
  int a=1;
  
  for (int i=1;i<=n;i++)
  {
      cout<<a<<endl;
      a*=2;
  }
 
 // Special case 
 int a=100;
  for (int i=1;i<=34;i++)
  {
      cout<<a<<endl;
      a-=3;
     
    
  }

  int a=100;
  for (int i=1;a>0;i++)
  {
      cout<<a<<endl;
      a-=3;
     
    
  }

   for (int a=100;a>=1;a-=3)
  {
      cout<<a<<endl;  // why use of i use brain mr....
     
    
  }



}

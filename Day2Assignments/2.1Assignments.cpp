/*
#include <iostream>
using namespace std;
int main() {
    
    int num1,num2;
    cout<<"num1:";
    cin>>num1;
    cout<<"num2:";
    cin>>num2;
    if(num2>num1)
    {
        cout<<"The num2 is: "<<num2<<" is largest";
    }
    else
    {
        cout<<"The num1 is: "<<num1<<" is largest";
    }

    return 0;
}


#include <iostream>
using namespace std;
int main() {
    
    int radius;
    cout<<"enter the radius:" ;
    cin>>radius;
    float area =3.14 * 4 * radius;
    cout<<"Area is: "<<area<<endl;
    float Perimeter = 2 * 3.14 * radius;
    cout<<"Perimeter is:"<<Perimeter<<endl;
    
    if(area>Perimeter)
    {
        cout<<"Area is greater than perimeter";
    }
    else
    {
        "Permiter is greater than area";
    }
    
    return 0;
    
 #include <iostream>
using namespace std;
int main() {
    
    int year;
    cout<<"Please enter year: ";
    cin>>year;
    
   if(year%400==0)
   {
       cout<<"You are born or leap year";
   }
   else if(year%100=0)
   {
       cout<<"You are not born on leap year";
   }
   else if(year%4==0)
   {
    cout<<"leap year"
   }
   else
   {
    cout<<"A leap year: ";
   }
   
   return 0;
    
    
}


#include <iostream>
using namespace std;
int main() {
    
    float length;
    float width;
    cout<<"Please enter length of rectangle: ";
    cin>>length;
    cout<<"Please enter width of rectangle: ";
    cin>>width;
    
    float area= width*length;
    cout<<"The area of rectangle is: "<<area<<endl;
    float perimeter= 2*(length+width);
    cout<<"The perimeter of rectangle is: "<<perimeter<<endl;
    
    if(area>perimeter)
    {
        cout<<"area is bigger than perimeter:";
        
    }
    else{
        cout<<"Perimter is bigger than area: ";
    }
    
    return 0;
    
}
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Please enter side 1: ";
    cin>>side1;
    cout<<"Please enter side 2: ";
    cin>>side2;
    cout<<"Please enter side 3: ";
    cin>>side3;
    
    if(side1== side2 && side2==side3)
    {
        cout<<"This is the equilateral triangle: ";
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        cout<<"This is the isoclensce triangle";
    }
    else
    {
        cout<<"This is the scalence triangle";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
   int a,b,c,d;
   cout<<"Please enter a marks: ";
   cin>>a;
   cout<<"Please enter b marks: ";
   cin>>b;
   cout<<"Please enter c marks: ";
   cin>>c;
   cout<<"Please enter d marks: ";
   cin>>d;
   
   if(a<b && a<c && a<d)
   {
       cout<<"A is the least: ";
   }
   else if(b<a && b<c && b<d)
   {
       cout<<"B is the least: ";
       
   }
   else if(c<a && c<b && c<d)
   {
       cout<<"C is the least: ";
   }
   else
   {
       cout<<"D is the least: ";
   }
   
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"Please enter x axis: ";
   cin>>x;
   cout<<"Please enter y axis: ";
   cin>>y;
   
   if(x==0 && y==0)
   {
       cout<<"The point is at origin ";
   }
   else if(x>=1 && y==0)
   {
       cout<<"The point is on x axis: ";
   }
   else if(y>=1 && x==0)
   {
       cout<<"The point is y axis: ";
   }
   else
   {
       cout<<"out of reach:";
   }
   
    
    
    
    
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
   char ch;
   cout<<"Please enter char:" ;
   cin>>ch;
   int ascii=(int)ch;
   
   if(ascii>=65 && ascii<=90 || ascii>=97 && ascii <=12)
   {
       cout<<"This is an alphabet: "<<ascii;
   }
   else if(ascii>=48 && ascii<=57)
   {
       cout<<"This is a digit";
   }
   else
   {
       cout<<"is special character:";
   }
}
#include<iostream>
using namespace std;
int main() {
int a = 500, b, c;
if (a >= 400)
b = 300;
c = 200;
cout << "value of b and c are respectively " << b << " and " << c;
return 0;

// 300 and 200

#include<iostream>
using namespace std;
int main()
{
    float x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"Please enter x1 and y1: ";
    cin>>x1>>y1;
    cout<<"Please enter x2 and y2: ";
    cin>>x2>>y2;
    cout<<"Please enter x3 and y3: ";
    cin>>x3>>y3;
    
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    
    if(slope1==slope2)
    {
        cout<<"The point are on same line hence slope1 is: "<<slope1<<" slope2: "<<slope2;
    }
    else
    {
        cout<<"They are not on same line hence slope1 is: "<<slope1<<" slope2: "<<slope2;;
    }
    
    return 0;
}


}

#include<iostream>
#include<math.h>
using namespace std;
int add(int num1,int num2)
{
    return num1+num2;
}

int sub(int num1,int num2)
{
    return num1-num2;
}
int mul(int num1,int num2)
{
    return num1*num2;
}
int divid(int num1,int num2)
{
    return num1/num2;
}
int main()
{
    int num1,num2;
    cout<<"\nEnter the first number\n";
    cin>>num1;
    cout<<"\nEnter the second number\n";
    cin>>num2;
    int ch;
    do{
        cout<<"\nEnter the option you want to be perform\n";
        cout<<"**************************************\n";
        cout<<"**1= ADD (+) \n";
        cout<<"**2= sub (-) \n";
        cout<<"**3= multiple (*) \n";
        cout<<"**4= divide (/)\n";
        cout<<"**************************************\n";
        int choice;
        cin>>choice;
        int result;
       if(choice==1)
        {
            cout<<"\nThe addition of two numbers is ="; 
            result=add(num1,num2);
            cout<< result;
        }
        else if(choice== 2)
        {
            cout<<"\nThe subtraction of two numbers is=";
            result=sub(num1,num2);
            cout<< result;
        }

        else if(choice== 3)
        {
          cout<<"\nThe multiplication of two numbers is=";
          result=mul(num1,num2);
          cout<< result;
        }

        else if(choice==4)
         {
            if(num2 == 0)
            {
                cout<<"Error !! divition by zero\n";
                exit(1);
            }
            else
            {
             cout<<"\nThe division of two numbers is=";
            result=divid(num1,num2);
            cout<< result;
            }    
         }
        else{
        cout<<"\nInvalied choicec\n";
        }
         cout<<"\n\nDO YOU WANT MORE CHOICE [1||0]\n";
		cin>>ch;
    }while (ch==1);
    return 0;
}


  


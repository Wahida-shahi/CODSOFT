/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/
/*NUMBER GUESSING GAME*//*DONE*/
#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int guess(int level,int userguess)
{
    while (true)
    {
        cout << "\nDifficulty Levels\n";
        cout << "\n1 for starte the game!\t";
        cout << "\n0 for ending the game!\n" << endl;
        //int level;
        cout << "Enter the difficulty level number: ";
        cin >> level;
        srand(time(0));
        int size=100;
        int rightAnswer = (rand() % (size-1)) + 1;
        //int userguess;
        if(level==1)
        {
            cout<<"You will get 3 chance to guess the right anser\n";
            int chance=3;
            for(int i=0;i<3;i++)
                {    
                cout<<"\nNow let guess the number:\n";
                cin>>userguess;
                if(userguess==rightAnswer)
                {
                
                cout<<"the( "<<userguess<<" )Yuor answer is correct \n";
                break;
                }
                else if(userguess>rightAnswer)
                    {
                        cout<<"The( "<< userguess <<" )Your answer is too high\n"<<endl;
                    }
                else{
                    
                        cout<<"The( "<< userguess <<" )Your answer is too low\n"<<endl;
                }
                chance--;
                if(chance==0)
                {
                    cout<<"the rondom number is = "<<rightAnswer<<endl;
                }
            }
        }
        // To end the game
        else if (level == 0) 
        {
            exit(0);
        }
        else
         {
            cout << "Kindly select between (0,1)"<< endl;
        }
    }    
 }
int main()
{
    cout<<"\nWELCOME TO THE NUMBER GUESSING GAME <0_0>\n";
    cout<<"Here the user need to guess the number which is randomly generates by computer and the user will guess\n ";
    cout<<"\nGOOD LUCK MY FRIND\n";
    int size=100;
    int hight=size;
    int low=1;
    //for generate different random numbers each time the game is played
     srand(time(0));
     int rightAnswer = rand() % size + 1;
    int chance=0;
    int  userguess;
    int level;
    int g=guess(level,userguess);
    cout<<g;
    do
    {   
         cout<<"\nNow let guess the number:\n";
          cin>>userguess;
          chance++;
         if(userguess==rightAnswer)
         {
         
          cout<<"the( "<<userguess<<" )Yuor answer is correct \n";
           break;
         }
        else if(userguess>rightAnswer)
            {
                cout<<"The( "<< userguess <<" )Your answer is too high\n"<<endl;
            }
          else{
            cout << "\nGood! You got the right guess "<<userguess <<"in "<< chance << " try\n";    
          }
    }while (userguess!=rightAnswer);
    return 0;
}

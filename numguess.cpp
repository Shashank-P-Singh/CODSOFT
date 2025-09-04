#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    cout<<" ----!!!! THIS IS A NUMBER GUESSING GAME !!!!---- "<<endl;
    cout<<" ---- PLEASE GUESS THE NUMBER BETWEEN 1 TO 50 --- "<<endl;
    cout<<"                 NOW START PLAYING                "<<endl;

    srand(time(0));
    int randNumber=( rand() %50) + 1;

    cout<<" \n **You will have total 5 chances to guess the correct number.**\n";
    int chanceLeft=5;
    int playerInput;

    for(int i=1;i<=5;i++)
    {
        cout<<"\n -->Enter the number: ";
        cin>> playerInput;
        
        if(playerInput==randNumber)
        {
            cout<<"\n Congratulations!.You have successfully guessed the right number\n";
            cout<<"\n Thanks for playing.";
            break;
        }
        else
        {
           if(playerInput>randNumber)
           {
            cout<<"\n"" Insert a smaller Number.Try Again"""<<endl;
           }
           else
           {
             cout<<"\n"" [Insert a Larger Number.Try Again]"""<<endl;
           }
        }
        chanceLeft--;
        cout<<"\n (Chances left to guess the random number: "<< chanceLeft << " )"<<endl;
        
        if(chanceLeft == 0 )
        {
            cout<< "\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<< " The random Number was : "<< randNumber <<endl;
            cout<< " Thanks for playing."<<endl;
            cout<< " Try again.";
        }
    }
    cout<<"\n ";
    return 0;
    }
//Number Guessing Game 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int target=rand()%100+1;
    int guess=0;
    cout<<"welcome to the Number guessing game !"<<endl;
    cout<<"I have selected a number between 1 to 100 "<<endl;
    cout<<"Can you guess the number ?"<<endl;
    while(guess!=target){
        cout<<"enter your guess:";
        cin>>guess;
        if(guess>target){
            cout<<"Your guess is too high "<<endl;
        }else if(guess<target){
            cout<<"Your guess is too low"<<endl;
        }else{ 
            cout<<"Congratulations! You've guessed the correct number:"<<target<<endl;
        }
    }
    return 0;
    }
      
#include "iostream"
#include "cstdlib" 
#include "ctime"  
using namespace std; 

int main(){   
    int computer_choice,user_choice;
    string choices[]= {"paper", "scissor", "rock"}, winner;
    srand(time(0));
    computer_choice=rand()%3;
    cout<<"Play : paper (0), scissor (1), rock (2): ";
    cin>>user_choice;
    if(choices[computer_choice]=="paper"){
    	if(choices[user_choice]=="scissor")
    		winner="You won!";
    	else if(choices[user_choice]=="rock")
    		winner="You lost!";
    	else
    		winner="It is a draw.";
    }
    else if(choices[computer_choice]=="scissor"){
    	if(choices[user_choice]=="paper")
    		winner="You lost!";
    	else if(choices[user_choice]=="rock")
    		winner="You won!";
    	else
    		winner="It is a draw.";
    }
    else {
    	if(choices[user_choice]=="paper")
    		winner="You won!";
    	else if(choices[user_choice]=="scissor")
    		winner="You lost!";
    	else
    		winner="It is a draw.";
    }
    cout<<"Computer is "<<choices[computer_choice]<<". You are "<<choices[user_choice]<<". "<<winner;
    return 0;
}
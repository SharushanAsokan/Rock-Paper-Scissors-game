#include <iostream>
#include <cstdlib>
#include "time.h"
using namespace std;

char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;

    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}

char getUserOption() {
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> c;
    
    while (c!='r' && c!='p' && c!='s' )
    {
    	
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option) {
	const char ROCK = 'r';
	const char PAPER = 'p';
	const char SCISSORS = 's';
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}

void chooseWinner(char PlayerInput, char ComputerInput) {
   const char ROCK = 'r';
	const char PAPER = 'p';
	const char SCISSORS = 's';
    if (PlayerInput == ROCK && ComputerInput == PAPER) {
        cout << "Computer Wins"<< endl;
    }
    else if (PlayerInput == PAPER && ComputerInput == SCISSORS) {
        cout << "Computer Wins"<< endl;
        
    }
    else if (PlayerInput == SCISSORS && ComputerInput == ROCK) {
        cout << "Computer Wins"<< endl;
        
    }
    else if (PlayerInput == ROCK && ComputerInput == SCISSORS) {
        cout << "You Win"<< endl;
        
    }
    else if (PlayerInput == PAPER && ComputerInput == ROCK) {
        cout << "You Win"<< endl;
        
    }
    else if (PlayerInput == SCISSORS && ComputerInput == PAPER) {
        cout << "You Win"<< endl;
    }
    else{
        cout << "Tie" << endl;
    }
}







int main()
{
	int choice;
	cout << "Press 1 For Single PLayer And Press 2 For 2 Players : ";
	cin >> choice;
    switch(choice);
    {
    	switch (choice) {
  case 1:
    //User's choice
    char PlayerInput; 
    //Compter's choice
    char ComputerInput;
    
    PlayerInput = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedOption(PlayerInput);
    
    cout << "Computer's choice is: "<< endl;
    ComputerInput = getComputerOption();
    showSelectedOption(ComputerInput);
    
    chooseWinner(PlayerInput, ComputerInput);
    break;
  
  case 2:
  	
	  	
	string name1;
	string name2;
	char player1;
	char player2;
	int count1;
	int count2;
	int p1;
	int p2;
		
	cout << "................................."<<endl;
	cout << "Welcome to Rock, Paper, Sicssors"<<endl;
	cout << "................................."<<endl;

	
	
	cout << "Player 1 what is your name?"<<endl;
	cin >> name1;
	cout << "Player 2 what is your name?"<<endl;
	cin >> name2;
	
	for(int i=0; i<3; i++)
	  {
	cout << ".................................."<<endl;
	 cout << name1 << ", choose Rock(r), Paper(p), Scissors(s)"<<endl;
	 cin >> player1;
	 cout << name2 << ", choose Rock(r), Paper(p), Scissors(s)"<<endl;
	 cin >> player2;
	 
	
	//player 1 wins
	if (player1 == 'r' && player2 == 's'){
		cout << name1 << " wins" <<endl;
		p1++;	
	}

	else if(player1 == 'p' && player2 == 'r'){
		cout << name1 << " wins" <<endl;
		p1++;	
	}
	
	else if(player1 == 's' && player2 == 'p'){
		cout << name1 << " wins" <<endl;
		p1++;	
	}
	//player2 wins
	else if (player2 == 'r' && player1 == 's'){
		cout << name2 << " wins" <<endl;
		p2++;		
	}
	
	else if(player2 == 'p' && player1 == 'r'){
		cout << name2 << " wins" <<endl;
		p2++;
	}
	
	else if(player2 =='s' && player1 == 'p'){
		cout << name2 << " wins" <<endl;
		p2++;
	}
	
	//DRAW
	else if (player2 == 'r' && player1 == 'r'){
		cout << "DRAW"<<endl;		
	}
	
	else if(player2 == 'p' && player1 == 'p'){
		cout << "DRAW"<<endl;
	}
	
	else if(player2 == 's' && player1 == 's'){
		cout << "DRAW"<<endl;
	}
	else{
		cout << "Wrong input, go again"<<endl;
		}
		 if (p1==3){
	 	cout<<"CONGRTAS!!!!"<< name2 << "won the entire game"<<endl;
	 }
		 else if (p2==3){
	 	cout<<"CONGRTAS!!!!"<< name1 << "won the entire game"<<endl;
	 }
	  }
    break;
	}
}
}


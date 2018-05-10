/*
        TIC-TAC-TOE simulator
        date : 19-03-2018
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};            //variable shared to playboard() , winner()

void playboard();
int checkwinner();
void greetNrules();

int main()
    {
    
    int player = 1;             // variable keeps altering between players
    int i, choice;    
    char mark;
    string p1,p2;
    
    system("clear");            // system command to clear the screen
    
    cout<<"Players Enter name before playing... "<<endl;
        cout<<"Player 1 Name: "; 
        cin>>p1;
        cout<<endl;
    
        cout<<"Player 2 Name: ";
        cin>>p2;
        cout<<endl;
    
    do{
        playboard();                //Create a TicTacToe Board
        
        player = (player % 2) ? 1 : 2;     //if player 1 plays then 1 & if player 2 plays then 2
        
        cout<<"Player "<<player<<" turn to input number:  ";
        cin>>choice;                        //choosing player's choice to mark the board
        
        mark = (player == 1) ? 'X' : 'O';       //if it's player 1's turn he'll mark an X , player 2 will mark 0
        
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;    
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;        
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else
        {
            cout<<"INVALID Key pressed --- Terminating Program ----";
            exit(0);
            
		}
		
		i = checkwinner();              //checkwinner() will return -1 {Game Continues}
                                        //  0 { Game DRAW } ... 1 {Someone WON}
		player++;                       //for changing turns between players
    
    }while(i == -1);
    
    playboard();
    
    if (i == 1){
        player--;                  //to fix the last extra increment @line-57
        cout<<"Player : "<< player <<" WON  -- congrats -- ";
        if(player == 1) cout<<p1;
        else cout<<p2;
    }
    
    else
        cout<<"----- Game Draw - BETTER LUCK NEXT TIME ------";    
        cout<<endl<<endl<<endl;
return 0;

}



  /*
   Checking for STATUS of the game
   -1 means GAME in PROGRESS
   0 means GAME IS OVER but NO Result
   1 means Game is Finished with a winner
    
  */
int checkwinner()           //checking all posibilities of getting a strike-through
{
	if (square[1] == square[2] && square[2] == square[3])
        return 1;
	
	else if (square[4] == square[5] && square[5] == square[6])
           return 1;
	
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' 
             && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        return 0;           //Game DRAW
    }
    
	else
		return -1;           //Continue Game
}


//Giving actual shape of TIC-TAC-TOE board
void playboard()
{
    greetNrules();
    
    
    cout<<"     |     |    "<<endl;
    cout<<"  "<<square[1]<< "  |  "<<square[2]<<"  |   "<<square[3]<<endl;
    cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
    
}


//greet players and state game rules
void greetNrules()
{
    system("clear");
    cout<<"################################################"<<endl<<"############## Tic-Tac-Toe Game ################"<<endl<<"################################################"<<endl<<endl;
    cout<<"  RULES:  "<<endl<<"   Valid Inputs between 1 to 9"<<endl<<"   PS : Any Other input will terminate the game immediately."<<endl<<endl<<endl<<endl;
    cout<<"--------------- LETS START ----------------"<<endl;
    cout<<"   Player - 1 mark is X "<<endl<<"   Player - 2 mark is O"<<endl<<endl;
}

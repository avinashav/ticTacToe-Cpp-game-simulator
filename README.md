# ticTacToe-Cpp-game-simulator
Tic-Tac-Toe, a paper-and-pencil game for two players, played on a 3x3 grid, implemented using C++.
Player-1 marks a **X** and Player-2 marks a **O** in empty squares, first player to get 3 of his/her marks in a row (up, down, across, or diagonally) is the winner.

The game is built using C++ language and **can be played by two users only(in a round).**


**Rules** for the game: 
**Valid Inputs between '1 to 9'.
Any Other input will *terminate* the game immediately.**


HOW TO DOWNLOAD AND RUN:
step1: Click on Clone or Download button and click Download-ZIP.
step2: Un-zip the packet and Extract.
step3: use c++ compiler and run command:  **c++ -o tictactoe ticTacToe-game-simulator.cpp**
step4: then run command:  **./tictactoe**
step5: The game will start, enter 2 players name and enjoy the game. Note: valid Inputs between '1 to 9', any other input will terminate the game immediately.



Once player runs the program, they should enter their name:
say Player-1 : *avinash*
    Player 2 : *ankur*
![game-start-input-name](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/inputName.png)

First Views of the board after entering Names:
![First-View-gameboard](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/1stView.png)

Say Player1 enters 1 , the respective cell (i.e. 1) of the cell will be marked with X
later Player2 enters 3, the cell is marked with 'O'
then Player inputs 5.
![player-Input-1-3-5](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/afterGivingInput135.png)

Player1 - 1
Player2 - 3
Player1 - 5
Player2 - 6
Player1 - 9
Player1 made a strike-through diagonally (cell : **1-3-9**) and WON
![player-Input-1-3-5-6-9-won](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/givingInput13569.png)

Draw condition when neither player1 or player2 wins.
![game-Draw](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/GameDraw.png)

***Accepted input is keys between 1 to 9***
![wrong-Key-Termination](https://github.com/avinashav/ticTacToe-Cpp-game-simulator/blob/master/Screenshots/invalidKey.png)


Thanks.
Avinash Kumar

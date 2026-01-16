//class header file
#include "game.h"

//librarys
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

Game::Game(int i) {
    maxNumber = i;
    cout<<"GAME CONSTRUCTOR: Initialize game"<<endl<<endl; //debug
}
Game::~Game(){}
void Game::play(){
    cout<<"GAME PLAY: starting game"<<endl<<endl; //debug
    randomNumber = Game::generateRandomNum(maxNumber);
    while(playerGuess != randomNumber){
        numOfGuesses++;
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        if (playerGuess < randomNumber){cout<<"Your guess is too small"<<endl;}
        else if (playerGuess > randomNumber){cout<<"Your guess is too big"<<endl;}
        else if (playerGuess == randomNumber){
            cout<<"Your guess is right = "<<playerGuess<<endl;
        }
    }
    cout<<endl<<"GAME PLAY: game ended, calling printGameResult"<<endl<<endl;   //debug
    Game::printGameResult();
}
void Game::printGameResult()
{
    cout<<"you guessed the right answer = "<<randomNumber<< " with "<<numOfGuesses<< " guesses"<<endl;
}

int Game::generateRandomNum(int max){
    srand(time(0));
    int num = rand() % max+1;
    cout<<"GAME CONDTRUCTOR: random number generated"<<endl; //debug
    return num;
}

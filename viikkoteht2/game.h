//define header file
#ifndef GAME_H
#define GAME_H

class Game
{
    public:
        Game(int);
        ~Game();
        void play();
    private:
        int maxNumber;
        int playerGuess;
        int randomNumber;
        int numOfGuesses;

        void printGameResult();
        int generateRandomNum(int);
};

#endif // GAME_H

#include <iostream>
#include <stdlib.h>

using namespace std;

void game(int randomInt, int guesses);

int main(){
  srand(time(NULL));
  game(rand()%101, 0);
  return 0;
}

void game(int randomInt, int guesses){
  //This is where the game starts...
  int guess = 0;
  cout << "Enter your guess: ";
  cin >> guess;
  cout << endl;
  guesses++;
  if(guess == randomInt){
    cout << "You win, but as always I suspect you cheated. It took you " << guesses <<" guesses." << endl;
    cout << "Would you like to play again? (y/n) ";
    char ans = 'n';
    cin >> ans;
    cout << endl;
    if(ans == 'y'){
      srand(time(NULL));
      game(rand()%101, 0);
    }
    else{
      return;
    }
  }
  else if(guess < randomInt){
    cout << "Too low." << endl;
    game(randomInt, guesses);
  }
  else{
    cout << "Too high." << endl;
    game(randomInt, guesses);
  }
  return;
}

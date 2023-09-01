//Author: Michael Fu, date: 9/1/2023, description: This is a c++ file that is a guessing game that initializes a random number from 1-100, and asks the user to keep guessing it, and telling if its low or high. once they get it right, ask if they want to keep playing.

//the rules: no global variables
//no strings
//use "include <iostream>" instead of stdio


#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
  //initialize the variables, like the number of tries, the random number, and the users guess. Also a boolean to keep track of wether or not we want to keep going and an inpuut to take in the users input when they say y or n to play again
  int numOfTries = 0;
  int num = 0;
  int guess = 101;  // 101 is not possible to be the guess, so its safe to initialize the variable as 101
  bool keepGoing = true;
  char inpuut;
  //set the random seed and make num a random number from 1 to 100
  srand(time(NULL));
  num = rand()%100 + 1;


  //while keep going is true, reset the number of tries, the random seed, and the number, as well as the users guess
  while(keepGoing==true){
    numOfTries = 0;
    srand(time(NULL));
    num = rand()%100 + 1;
    guess = 101;
    //output what is your guess, and take the input. Then compare it to num and if its not the same, output wether its too low or high
    //if it is the same, output how many tries it took them.
    do{
      cout << "what is your guess?" << endl;
      cin >> guess;
      numOfTries = numOfTries + 1;
      if(guess < num){
	cout << "too low, try again" << endl;
	
      } else if (guess > num){
	cout << "too high, try again" << endl;
      } else if (guess == num){
	cout << "That's correct! you got it in " << numOfTries << " tries!" << endl;
	
      }
      
    } while (guess != num); //this do while loop does the guessing part while the guess isnt equal to the random number

    
    //if the guess did equal the random number (goes out of the do while loop)
    //ask them if they want to keep playing, and if they input 'n' then set keepGoing to false, which makes the loop stop.
    cout << "keep playing? (y/n)" << endl;
    cin >> inpuut;
    if(inpuut == 'n'){
      keepGoing = false;
    }
  }
  
  return 0;
}


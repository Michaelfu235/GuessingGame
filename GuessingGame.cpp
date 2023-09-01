#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  int numOfTries = 0;
  int num = 0;
  int guess = 101;  // 101 is not possible to be the guess
  bool keepGoing = true;
  char inpuut;
  srand(time(NULL));
  num = rand()%100 + 1;


  while(keepGoing==true){
    numOfTries = 0;
    srand(time(NULL));
    num = rand()%100 + 1;
    guess = 101;

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
      
    } while (guess != num);

    cout << "keep playing? (y/n)" << endl;
    cin >> inpuut;
    if(inpuut == 'n'){
      keepGoing = false;
    }
  }
  
  return 0;
}


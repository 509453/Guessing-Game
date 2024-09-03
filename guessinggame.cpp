/*Name : Aleena Shaik
  Date: 08/29/2024
  Project: This is a game that allows the user to guess a random number between
  1 and a 100. The user will be informed if they are closer or far from the
  guessing number. If the user wins it will display the number of tries it took
  them to win. They may also restart the game.

  Three rules of c++:
  1) We cannot use global variables but global constants are fine.
  2) We cannot use strings
  3) We should only use iostream and not stdio
 */

#include <iostream>

int main()
{
  //boolean value to restart game
    bool isStillPlaying = true;

    //restarts game if true
    while (isStillPlaying == true){
        
      //initializing variables
        int guess; 
        int stillPlaying = 0;


	//assigning seed value
         srand((unsigned) time(NULL));

	 //storing random number in variable 
        int random = 1 + (rand() % 100);
	std:: cout<< "Start Guessing!";
       
        int count = 0;
	//continues game until answer is guessed
        while (guess != random){
             
	  
	  //asks input from user
        std:: cin>> guess; 
        count = count +1; // keeps track of tries

	//inputs user on how to reach the answer
        
            if (guess > random){
               std::  cout<< "Your guess is greater than the number";
                 
            }else if(guess < random){
                std:: cout<< "Your guess is less than the number";

            }else if (guess == random){
                isStillPlaying = false;
                std:: cout<< "Your guess is right! It took you following tries: "<< count;
                std:: cout << " If you want to play more press 1 otherwise press 2";
                std:: cin >> stillPlaying;
                if (stillPlaying ==1){
                    isStillPlaying = true;
		}else if (stillPlaying == 2){
                 isStillPlaying = false;
            }
            }
            
            
        }
        
        
        
        
    }
    
    
    return 0;
}

// side note: this is how random works and cin.clear() , cin.ignore() , and how to stop bad/wrong input from the user. explained in the M case in switch.
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{ 
  
  srand(time(0)); // for random seed every time its ran.   other wise it would give the same number everytime.
  
  char play_again;
  do
  {
    int guess{0} , random_number , tries{0};
    char difficulty ;

    
       cout << "\n=======================================\n";
       cout << "\t >>GUESS THE NUMBER<<\n"; // title 
       cout << "=======================================\n\n";

       cout << "choose a difficulty:\n";
       cout << "E - Easy   (1 - 25) \n";
       cout << "M - Medium (1 - 100) \n";
       cout << "H - Hard   (1 - 1000) \n";
       cout << "i - Insane (1 - 10000) \n\n";
       do                                           // asking the user for the difficulty.
        {
            cout << "difficulty: "; cin >> difficulty;  //the place where the user puts the difficulty .
        }
       while (difficulty != 'E' &&
              difficulty != 'e' &&
              difficulty != 'H' && 
              difficulty != 'h' && 
              difficulty != 'M' && 
              difficulty != 'm' && 
              difficulty != 'I' && 
              difficulty != 'i' ); // if difculty does NOT equal any of these make him go again.
                // And just checks to make sure the user doesnt put anything else than the options displayed.


     switch(difficulty) // thiss is where the game is.
     {
        // if the user chosses easy.
        case 'e': 
        case 'E':
                 random_number = rand() % 25+1;
                cout << " guess between ( 1 - 25 )\n" ;
                do
                {
                  while(true)
                   {                                  
                   if(!(cin >> guess))
                     {                          
                      cout << "please enter a valid number...\n";

                      cin.clear(); 
                      cin.ignore(1000, '\n'); 
                      continue;
                     }
                     else
                     break;
                    
                   }

                   if(guess < 1 || guess > 25)
                  {
                    cout << "enter a number between the ranges 1 and 25\n\t";
                    continue;
                  }
                  

                  if (guess > random_number)  // if the guess is bigger than the random number , tells the user to guess lower.
                  {
                    cout << "its lower than " << guess << endl;
                    tries++;
                  }
                  else if (guess < random_number) // same thing but if the guess is lower.
                  {
                    cout << "its higher than " << guess << endl; 
                    tries++;
                  }
                  else if (guess == random_number)
                  cout << "you got it, it was " << random_number << " it took you "<< ++tries << " tries to get it right."; // if he gest the number corrctly

                }
                while (guess != random_number );
                break;

        // if the user chosses mid.
        case 'M' :   
        case 'm' :
                 random_number = rand() % 100+1;
                cout << " guess between ( 1 - 100 )\n" ;
                do
                {
                
                 /*ngl most proud of this part, it stops words or letters from going in an integer, so stops cin from failing 
                   and if it DOES fail it can clear the buffer and make the the user enter another value for "guess" again. */
                   while(true)// the while loop just makes sure to check one thing at time like this: 
                   {                                  
                   if(!(cin >> guess)) // is it number? if NO do this down below
                     {                          
                      cout << "please enter a valid number...\n";

                      cin.clear(); // clears the error flag so cin gets working again but words ars still stuck in the bufffer.
                      cin.ignore(1000, '\n'); // this here clears the stuff stuck in the buffer up to 1000 charcters or until the part where the user hit enter '\n'.
                      continue;
                     }
                     else
                     break;
                    
                   }

                  if(guess < 1 || guess > 100)  // is it between the limit of difficulty chossen? if no do this below.
                  {
                    cout << "enter a number between the ranges 1 and 100\n\t";
                    continue;
                  }
                  

                  //finaly this where the game starts
                  if (guess > random_number)
                  {
                    cout << "its lower than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess < random_number)
                  {
                    cout << "its higher than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess == random_number)        // the win condition.
                  cout << "you got it, it was " << random_number << " it took you "<< ++tries << " tries to get it right."; 

                } 
                while (guess != random_number );
                break;

        // if the user chosses hard.        
        case 'H' :   
        case 'h' :
                 random_number = rand() % 1000+1;
                cout << " guess between ( 1 - 1000 )\n" ;
                do
                {
                  while(true)
                   {                                  
                   if(!(cin >> guess))
                     {                          
                      cout << "please enter a valid number...\n";

                      cin.clear(); 
                      cin.ignore(1000, '\n'); 
                      continue;
                     }
                     else
                     break;
                   }
                   if(guess < 1 || guess > 1000)
                  {
                    cout << "enter a number between the ranges 1 and 1000\n\t";
                    continue;
                  }


                  if (guess > random_number)
                  {
                    cout << "its lower than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess < random_number)
                  {
                    cout << "its higher than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess == random_number)
                  cout << "you got it, it was " << random_number << " it took you "<< ++tries << " tries to get it right."; 

                }
                while (guess != random_number);

                break;


        // if the user chosses insane.
        case 'i' :   
        case 'I' :
                 random_number = rand() % 10000+1;
                cout << " guess between ( 1 - 10000 )\n" ;
                do
                {
                  while(true)
                   {                                  
                   if(!(cin >> guess))
                     {                          
                      cout << "please enter a valid number...\n";

                      cin.clear(); 
                      cin.ignore(1000, '\n'); 
                      continue;
                     }
                     else
                     break;
                    
                   }

                   if(guess < 1 || guess > 10000)
                  {
                    cout << "enter a number between the ranges 1 and 10000\n\t";
                    continue;
                  }

                  if (guess > random_number)
                  {
                    cout << "its lower than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess < random_number)
                  {
                    cout << "its higher than \n\t" << guess << endl;
                    tries++;
                  }
                  else if (guess == random_number)
                  cout << "you got it, it was " << random_number << " it took you "<< ++tries << " tries to get it right."; 

                }
                while (guess != random_number);

                break;
    }

    cout << "\n\nplay again?  press any key to contniue or n to exist.\n";
     cin >> play_again ;
    
  }
  while (play_again != 'n' && play_again != 'N' );

  return 0;
}

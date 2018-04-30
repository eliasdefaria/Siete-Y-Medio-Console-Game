#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
   /* --STATEMENTS-- */
   srand((int)time(0));

   Player player;
   //while(player.get_money() > 0){ //Ends game when player runs out of money
     bool playerWin, dealerWin, invalidBet = true, validHit = true;
     int bet;
     string playerResponse;

     while(invalidBet){
       cout << "How much would you like to bet? ";
       cin >> bet;

       if(bet <= player.get_money()){
         invalidBet = false;
       }

     }

     Hand playerHand, dealerHand; //Initializes new hands for player and dealer
     while(validHit){
       cout << "Your cards: \n";
       for(int i = 0; i < playerHand.get_cards().size(); i++){
         cout << "\t" << playerHand.get_cards()[i].get_spanish_rank() << " of " << playerHand.get_cards()[i].get_spanish_suit() << endl;
       }

       if (playerHand.get_bust()){
         cout << "You busted!" << endl;
         validHit = false;
       }
       else{
         cout << "Your total is " << playerHand.get_value() << ". Do you want another card? (y/n)";
         cin >> playerResponse;

         if((playerResponse == "y" || playerResponse == "Y" || playerResponse == "yes" || playerResponse == "Yes") && playerHand.get_value() <= 7.5){
           playerHand.hit();
         }
         else{
           validHit = false;
         }
       }
     }
     /*
     if (playerHand.get_bust() || dealerHand().get_bust()){
       if((playerHand.get_bust() && !dealerHand.get_bust()) || (playerHand.get_bust() && dealerHand.get_bust()){
         playerWin = false;
         dealerWin = true;
       }
       else if(!playerHand.get_bust() && dealerHand.get_bust()){
         playerWin = true;
         dealerWin = false;
       }
       else{

       }
     }
   }*/




/*
   cout << firstHand.get_value() << endl;
   firstHand.hit();
   cout << firstHand.get_value() << endl;
   if(firstHand.get_bust()){
     cout << "Game over!" << endl;
   }*/
   return 0;
}

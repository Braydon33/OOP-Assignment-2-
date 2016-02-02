//
//  main.cpp
//  OOP Assign 2
//
//  Created by Braydon Duprey on 2016-01-22.
//  Copyright © 2016 Braydon Duprey. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>


//Declerations =========================================
using namespace std;

int firstArcherScore1 = 0;
int firstArcherScore2 = 0;
int firstArcherScore3 = 0;
int firstArcherScore4 = 0;
double firstArcherTotal = 0;

int secondArcherScore1 = 0;
int secondArcherScore2 = 0;
int secondArcherScore3 = 0;
int secondArcherScore4 = 0;
double secondArcherTotal = 0;

int thirdArcherScore1 = 0;
int thirdArcherScore2 = 0;
int thirdArcherScore3 = 0;
int thirdArcherScore4 = 0;
double thirdArcherTotal = 0;

double totalAVG = 0;

string curentScore;

//Functions ============================================================
int valadation (string x)
{
    bool z = false;
    int y;
    // This function takes the user input and checks if it is a valid number between 0 and 60
    // It will loop and ask for another number if it fails
    do
     
    {
        
        try
        {
            
            
           y = stoi(x);
            
            if (y > 0 && y <= 60)
            {
                z = true;
            }
            
            else
            {
                cout << "ERROR Please enter a valid number between 0 and 60" << endl;
                cin >> x;
                z = false;
            }
        }
        catch(...)
        {
            cout << "ERROR Please enter a valid number between 0 and 60" << endl;
            z = false;
            cin >> x;
        }
    }while (z == false);
    
    return y;
}
//Input =====================================================
int main(int argc, const char * argv[])
{
   //First Archer ============================================
    //Takes user input and calls the function to check if its valid if it is it will store the value
    cout << "Please enter the score for Archer 1 Game 1";
    cin >> curentScore;
    firstArcherScore1 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 1 Game 2";
    cin >> curentScore;
    firstArcherScore2 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 1 Game 3";
    cin >> curentScore;
    firstArcherScore3 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 1 Game 4";
    cin >> curentScore;
    firstArcherScore4 = valadation(curentScore);
    
    firstArcherTotal = (firstArcherScore1 + firstArcherScore2 + firstArcherScore3 + firstArcherScore4);
    
    cout <<"The total score from the first archer is " << firstArcherTotal;
    
    //Second Archer ===============================================
    cout << "\nPlease enter the score for Archer 2 Game 1";
    cin >> curentScore;
    secondArcherScore1 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 2 Game 2";
    cin >> curentScore;
    secondArcherScore2 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 2 Game 3";
    cin >> curentScore;
    secondArcherScore3 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 2 Game 4";
    cin >> curentScore;
    secondArcherScore4 = valadation(curentScore);
    
    secondArcherTotal = (secondArcherScore1 + secondArcherScore2 + secondArcherScore3 + secondArcherScore4);
    
    cout << "The total score from the second archer is " <<secondArcherTotal;
    
    //Third Archer =================================================
    cout << "\nPlease enter the score for Archer 3 Game 1";
    cin >> curentScore;
    thirdArcherScore1 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 3 Game 2";
    cin >> curentScore;
    thirdArcherScore2 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 3 Game 3";
    cin >> curentScore;
    thirdArcherScore3 = valadation(curentScore);
    
    cout << "Please enter the score for Archer 3 Game 4";
    cin >> curentScore;
    thirdArcherScore4 = valadation(curentScore);
    
    thirdArcherTotal = (thirdArcherScore1 + thirdArcherScore2 + thirdArcherScore3 + thirdArcherScore4);
    
    //Calculations===============
    cout << "\nThe total score from the third archer is " << thirdArcherTotal;
    
    //To get the average we take all the archers final scores and divide it by 3
    totalAVG = ((firstArcherTotal + secondArcherTotal + thirdArcherTotal)/ 3);
    
    //Output=========================
    //We round the average to 1 decimal place using the round method
    cout <<"\nThe average of all the archers scores is " << round(totalAVG * 10) / 10 << "\n";
    
    
    
}



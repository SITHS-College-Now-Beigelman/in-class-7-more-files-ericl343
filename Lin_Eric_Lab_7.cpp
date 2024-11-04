//Eric Lin
//November 3rd, 2024
//Lab 7

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    //Open the file
    ifstream inputFile("gamescores.txt");

    //Using variables
    string name;
    double score1, score2, score3;
    
    //Read data from the file using while loop
    while (inputFile >> name >> score1 >> score2 >> score3) 
    {
        //Calculate the weighted average
        double average = (score1 * 0.20) + (score2 * 0.30) + (score3 * 0.50);

        //Print out name and average score
        cout << "Player: " << name << ", Average Score: " << average << endl;

        //Print the corresponding statement with if else statements
        if (average > 2000) {
            cout << "Congrats! You are an Expert!" << endl;
        } else if (average >= 1800 && average <= 2000) {
            cout << "Master - Good Job!" << endl;
        } else if (average >= 1500 && average < 1800) {
            cout << "Advanced - Good Job!" << endl;
        } else if (average >= 1000 && average < 1500) {
            cout << "Intermediate" << endl;
        } else {
            cout << "Beginner - Keep Practicing!" << endl;
        }
        cout << endl; 
    }
    //End of Statements
    //Close the file
    inputFile.close();
    return 0;
}
/*
Player: Danny, Average Score: 1922.9
Master - Good Job!

Player: Eric, Average Score: 1738.7
Advanced - Good Job!

Player: Jimmy, Average Score: 2669
Congrats! You are an Expert!
*/
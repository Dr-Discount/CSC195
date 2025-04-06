#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int numOfDice;
    int i = 0;
    cout << "how many dice would you like to roll" << endl;
    cin >> numOfDice;

    while (numOfDice > i) {
        i++;
        int randomNumber = rand() % 6 + 1; // Random number from 1 to 10
        cout << "Dice " << i << " Rolled a " << randomNumber << endl;
    }
    return 0;
}
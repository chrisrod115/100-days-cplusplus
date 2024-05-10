#include <iostream>
#include "tip_calculator.h"
using namespace std;

float calculateTip(float billAmount, float tipRate) {
    return billAmount * tipRate / 100;
}

float calculateTotal(float billAmount, float tipAmount) {
    return billAmount + tipAmount;
}

float calculatePerPerson(float totalAmount, int numSplit) {
    return totalAmount / numSplit;
}


int main() {
    float billAmount, tipRate, numSplit;
    cout << "Enter the bill amount: ";
    cin >> billAmount;
    cout << "Enter the tip rate: ";
    cin >> tipRate;
    cout << "Number of people to split: ";
    cin >> numSplit;
    float tipAmount = calculateTip(billAmount, tipRate);
    float totalAmount = calculateTotal(billAmount, tipAmount);
    float perPerson = calculatePerPerson(totalAmount, numSplit);
    cout << "Tip amount: " << tipAmount << endl;
    cout << "Total amount: " << totalAmount << endl;
    cout << "Per Person amount: " << perPerson << endl;
    return 0;
}
/*
# 1st input: enter height in meters e.g: 1.65
height = input()
# 2nd input: enter weight in kilograms e.g: 72
weight = input()
# 🚨 Don't change the code above 👆

# Write your code below this line 👇
bmi = float(weight) / float(height) ** 2

print(int(bmi))
*/

// C++ program to calculate BMI
#include <iostream>
#include <cmath>
using namespace std;

// main function
int main(){
    float height;
    float weight; 
    float bmi;

    cout << "Enter height in meters e.g: 1.65" << endl;
    cin >> height;
    cout << "Enter weight in kilograms e.g: 72" << endl;
    cin >> weight;
    bmi = weight / pow(height, 2);
    cout << int(bmi) << endl;

    return 0;
}
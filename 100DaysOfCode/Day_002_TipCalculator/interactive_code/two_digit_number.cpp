#include <iostream>
using namespace std;

int main(){
    int two_digit_number;
    cout << "Enter a two digit number: " << endl;
    cin >> two_digit_number;

    cout << "The sum of the first digit " << two_digit_number / 10 << " and second digit " << two_digit_number % 10 << " is " << two_digit_number / 10 + two_digit_number % 10 << endl;

    return 0;
}
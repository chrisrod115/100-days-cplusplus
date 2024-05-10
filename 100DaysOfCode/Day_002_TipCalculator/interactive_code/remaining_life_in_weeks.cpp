#include <iostream>
using namespace std;

int main(){
    int age;
    const int max_age = 90;
    const int num_wks_in_yr = 52;
    int total_wks_left;
    
    
    cout << "Enter your age: ";
    cin >> age;
    
    total_wks_left = (max_age - age) * 52;
    
    cout << "You have " << total_wks_left << " weeks left" << endl;
    
    return 0;

}
/*
print("Welcome to the Band Name Generator.")
print("What's name of the city you grew up in?")    
city = input()
print("What's your pet's name?")
pet = input()
print("Your band name could be " + city + " " + pet)
*/
// C++ program to generate band name
#include <iostream>
using namespace std;

// main function
int main(){
    string city;
    string pet_name;
    
    cout << "Welcome to the Band Name Generator." << endl;
    cout << "What's name of the city you grew up in?" << endl;
    cin >> city;
    cout << "What's your pet's name?" << endl;
    cin >> pet_name;
    cout << "Your band name could be " << city << " " << pet_name << endl;
    
    return 0;
}

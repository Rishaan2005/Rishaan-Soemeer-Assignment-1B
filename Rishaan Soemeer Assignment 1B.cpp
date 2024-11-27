#include <iostream>
using namespace std;

int main() {
    // Define a constant for the current year
    const int CURRENT_YEAR = 2024;
    
    // Variable to hold the user's year of birth
    int birthYear;
    
    // Ask the user for their year of birth
    cout << "Enter your year of birth: ";
    cin >> birthYear ;

// Calculate the user's age
    int age = CURRENT_YEAR - birthYear;
    
    // Display the user's age
    cout << "You are " << age << " years old." << endl;
    
    return 0;
}

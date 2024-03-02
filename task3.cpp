#include <iostream>

using namespace std;

int main() {
    int total_minutes;
    
    // Input total minutes
    cout << "Enter total minutes: ";
    cin >> total_minutes;
    
    // Calculate hours and minutes
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;
    
    // Output result
    cout << total_minutes << " minutes is equal to " << hours << " hr : " << minutes << " min" << endl;
    
}


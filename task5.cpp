#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    
    // Calculate the sum
    int sum = num1 + num2;
    
    // Display the sum
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    // Count the number of digits in the sum
    int count = 0;
    int temp = sum;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    
    // Display the number of digits in the sum
    cout << "Number of digits in the sum: " << count << endl;

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of prime numbers to sum: ";
    cin >> n;

    int sum = 0;
    int count = 0;
    int num = 2; // Start with the first prime number

    while (count < n) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            sum += num;
            count++;
        }
        num++;
    }

    cout << "Sum of the first " << n << " prime numbers: " << sum << endl;

}


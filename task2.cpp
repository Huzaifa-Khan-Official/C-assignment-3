#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = 0;
    for (int i = num1; i <= num2; ++i) {
        sum += sumDigits(i);
    }

    cout << "Sum of digits between " << num1 << " and " << num2 << ": " << sum << endl;

    return 0;
}


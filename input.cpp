#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the amount of numbers you want to input";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        sum += val;
    }
    cout << "Your sum is: " << sum;
}
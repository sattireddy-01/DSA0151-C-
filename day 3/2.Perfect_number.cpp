#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num /2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        cout << num << " is a perfect number. \n" ;
    } else {
        cout << num << " is not a perfect number. \n" ;
    }
    
    return 0;
}


/*#include <iostream>
using namespace std;

int main() {
    int n;
    int steps = 0;

    cout << "Enter a number greater than 1: ";
    cin >> n;

    while (n != 1) {
        cout << n << " -> ";

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }

        steps++;
    }

    cout << 1 << endl;
    cout << "Total steps: " << steps << endl;

    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main() {
    int n;


    while (true) {
        cout << "Enter a number between 10 and 100: ";
        cin >> n;
        if (n >= 10 && n <= 100) {
            break;
        }
        cout << "Invalid input. Try again." << endl;
    }


    int fizzCount = 0, buzzCount = 0, fizzBuzzCount = 0;


    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {   // Skip numbers divisible by 7
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
            fizzBuzzCount++;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizzCount++;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzzCount++;
        } else {
            cout << i << endl;
        }
    }


    cout << "\nSummary:" << endl;
    cout << "Fizz: " << fizzCount << endl;
    cout << "Buzz: " << buzzCount << endl;
    cout << "FizzBuzz: " << fizzBuzzCount << endl;

    return 0;
}
*/
/*#include <iostream>
using namespace std;

int main() {
    int n;


    do {
        cout << "Enter a number between 3 and 9: ";
        cin >> n;
    } while (n < 3 || n > 9);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
*/
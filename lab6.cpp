// #include <iostream>
// #include <cmath>
// #include <string>
// using namespace std;
//
// int main() {
//
// Problem_1
// int sum1 = 0;
// for (int i = 1; i <= 100; i++) {
//     sum1 += i;
// }
// cout << "Sum from 1 to 100: " << sum1 << endl;
//
// Problem_2
// int n;
// cout << "Enter a number to sum up to: ";
// cin >> n;
// int sum2 = 0, i = 1;
// while (i <= n) {
//     sum2 += i;
//     i++;
// }
// cout << "Sum from 1 to " << n << ": " << sum2 << endl;
// return 0;
// }
//
//
// Problem_3
// int count = 0, num = 2;
// while (count < 10) {
//     bool prime = true;
//     for (int j = 2; j <= sqrt(num); j++) {
//         if (num % j == 0) {
//             prime = false;
//             break;
//         }
//     }
//     if (prime) {
//         cout << num << " ";
//         count++;
//     }
//     num++;
// }
// cout << endl;
// return 0;
// }
//
//
// Problem_4
// int n2, count2 = 0, num2 = 2;
// cout << "Enter n for first n prime numbers: ";
// cin >> n2;
// while (count2 < n2) {
//     bool prime = true;
//     for (int j = 2; j <= sqrt(num2); j++) {
//         if (num2 % j == 0) {
//             prime = false;
//             break;
//         }
//     }
//     if (prime) {
//         cout << num2 << " ";
//         count2++;
//     }
//     num2++;
// }
// cout << endl;
// return 0;
// }
//
//
// Problem_5
// int collatz;
// cout << "Enter number for Collatz sequence: ";
// cin >> collatz;
// while (collatz != 1) {
//     cout << collatz << " ";
//     if (collatz % 2 == 0)
//         collatz /= 2;
//     else
//         collatz = collatz * 3 + 1;
// }
// cout << "1" << endl;
//
// Problem_6
// int digitInput;
// cout << "Enter number to count digits: ";
// cin >> digitInput;
// int digits = 0, temp = digitInput;
// while (temp != 0) {
//     temp /= 10;
//     digits++;
// }
// cout << "Number of digits: " << digits << endl;
// return 0;
// }
//
//
// Problem_7
// cout << "Enter number to extract digits: ";
// cin >> digitInput;
// cout << "Digits: ";
// while (digitInput != 0) {
//     cout << digitInput % 10 << " ";
//     digitInput /= 10;
// }
// cout << endl;
// return 0;
// }
//
//
// Problem_8
// int a, b;
// cout << "Enter two numbers for GCD: ";
// cin >> a >> b;
// while (b != 0) {
//     int temp = b;
//     b = a % b;
//     a = temp;
// }
// cout << "GCD is: " << a << endl;
// return 0;
// }
//
//
// Problem_9
// int input, sum = 0, totalInputs = 0;
// cout << "Keep entering numbers until sum > 100:" << endl;
// while (sum <= 100) {
//     cout << "Enter a number: ";
//     cin >> input;
//     sum += input;
//     totalInputs++;
// }
// cout << "Sum exceeded 100! Total sum: " << sum << ", Total numbers entered: " << totalInputs << endl;
// return 0;
// }
//
//
// Problem_10
// int balance = 500, withdraw;
// do {
//     cout << "Your balance: $" << balance << endl;
//     cout << "Enter withdrawal amount (or 0 to exit): ";
//     cin >> withdraw;
//     if (withdraw == 0)
//         break;
//     if (withdraw > balance)
//         cout << "Insufficient funds!" << endl;
//     else {
//         balance -= withdraw;
//         cout << "Remaining balance: $" << balance << endl;
//     }
// } while (balance > 0);
//
// Problem_11
// char response;
// do {
//     cout << "Enter Y or N: ";
//     cin >> response;
//     if (response != 'Y' && response != 'N')
//         cout << "Invalid input!" << endl;
// } while (response != 'Y' && response != 'N');
// cout << "You entered: " << response << endl;
// return 0;
// }
//
//
// Problem_12
// int choice;
// do {
//     cout << "1. Withdraw\n2. Deposit\n3. Balance\n4. Exit\nChoose an option: ";
//     cin >> choice;
//     switch (choice) {
//         case 1: cout << "Withdrawal selected." << endl; break;
//         case 2: cout << "Deposit selected." << endl; break;
//         case 3: cout << "Balance selected." << endl; break;
//         case 4: cout << "Exit selected." << endl; break;
//         default: cout << "Invalid choice!" << endl;
//     }
// } while (choice != 4);
// return 0;
// }
//
//
// Problem_13
// int number;
// cout << "Enter a positive number: ";
// cin >> number;
// while (number <= 0) {
//     cout << "Invalid input. Enter a positive number: ";
//     cin >> number;
// }
// cout << "You entered: " << number << endl;
// return 0;
// }
//
// Problem_14
// cout << "Welcome to the C++ programming world!" << endl;
//
// Problem_15
// string name;
// cout << "Enter your name: ";
// cin >> name;
// cout << "Hello, " << name << "!" << endl;
// return 0;
// }
//
// Problem_16
// int x, y;
// cout << "Enter two numbers to find max: ";
// cin >> x >> y;
// cout << "Max is: " << ((x > y) ? x : y) << endl;
// return 0;
// }
//
//
// Problem_17
int num3;
cout << "Enter number for factorial: ";
cin >> num3;
int fact = 1;
for (int i = 1; i <= num3; i++) {
    fact *= i;
}
cout << "Factorial is: " << fact << endl;
return 0;
}

Problem_18
int w, h;
cout << "Enter width and height for rectangle: ";
cin >> w >> h;
for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        cout << "*";
    }
    cout << endl;
}

return 0;
}

//
// Created by Shohjahon Komiljonov on 26/09/25.
//

#include <iostream>
#include <iomanip>
#include <unistd.h> // 21-savol uchun kere bo'ldi, sleep uchun

using namespace std;

int main() {

    // 11
    int number, positiveCount = 0, negativeCount = 0, total = 0, count = 0;
    while (true) {
        cin >> number;
        if (number == 0) break;
        if (number > 0) positiveCount++;
        else if (number < 0) negativeCount++;
        total += number;
        count++;}
    if (count == 0) {
        cout << "No numbers are entered except 0" << endl;
    } else {
        float average = (float) total / count;
        cout << "The number of positives is " << positiveCount << endl;
        cout << "The number of negatives is " << negativeCount << endl;
        cout << "The total is " << total << endl;
        cout << "The average is " << average << endl;
    }

    // 12
    int index;
    cin >> index;

    for (int i = 0; i < index; i++) {
        for (int j = 0; j < index; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // 13
    int index1;
    cin >> index1;

    for (int i = 1; i <= index1; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;}

    //14
    int index2;
    cin >> index2;
    if (index2 == 0) {
        cout << "The depth is 0" << endl;
    } else {
        for (int i = 1; i <= index2; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;}}

    // 15
    int index3;
    cin >> index3;

    double sum = 0.0;
    for (int i = 1; i <= index3; i++) {
        cout << "1/" << i;
        if (i != index3) cout << " + ";
        sum += 1.0 / i;
    }
    cout << endl;
    cout << "The sum is: " << sum << endl;

    // 16
    double rent = 1000;
    double total1 = 0;
    for (int year = 1; year <= 5; year++) {
        rent += rent * 0.03;
        total1 += rent * 12;
        cout << "For year number " << year << " rent is " << fixed << setprecision(2) << rent << endl;
        cout << "The total for year " << year << " is " << fixed << setprecision(2) << rent * 12 << endl;}
    cout << "For all 5 years total rent is " << fixed << setprecision(2) << total1 << endl;

    // 17
    int number1;
    cin >> number1;
    int sumOfDigits = 0;
    while (number1 != 0) {
        sumOfDigits += number1 % 10;
        number1 /= 10;
    }
    cout << "The sum of digits is " << sumOfDigits << endl;
    // 18
    string binary;
    cin >> binary;

    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    cout << "The decimal number is " << decimal << endl;

    // 19
    int number2;
    cin >> number2;
    cout << "The factors are: ";
    for (int i = 2; i <= number2; i++) {
        while (number2 % i == 0) {
            cout << i << " ";
            number2 /= i;}}
    cout << endl;

    // 20
    int terms;
    cin >> terms;
    double pi = 0;
    for (int i = 0; i < terms; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }
    pi *= 4;
    cout << "Output: " << pi << endl;

    // 21
    int seconds;
    cin >> seconds;
    while (seconds > 0) {
        cout << seconds << " seconds remaining" << endl;
        sleep(1);
        seconds--;
    }
    cout << "Stopped" << endl;

    // 22
    for (int miles = 1; miles <= 10; miles++) {
        double kilometers = miles * 1.609;
        cout << "Miles: " << miles << " Kilometers: " << fixed << setprecision(3) << kilometers << endl;
    }

    // 23
    int n = 0;
    while (pow(2, n) < 30000) {
        n++;}
    n--;
    cout << "The largest n such that 2^n < 30,000 is: " << n << endl;


    return 0;
}
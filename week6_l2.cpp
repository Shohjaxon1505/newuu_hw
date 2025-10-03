//
// Created by Shohjahon Komiljonov on 02/10/25.
//
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

// 1
double product(double num1, double num2) {
    return num1 * num2;
}

// 2
double linearAcc(double velocityInit, double velocityFin, double time) {
    return (velocityFin - velocityInit) / time;
}

// 3
const double PI = 3.1415;
void circleProperties(double rad, double &circ, double &area) {
    circ = 2 * PI * rad;
    area = PI * rad * rad;
}

// 4
void rectangleProperties(double sideA, double sideB, double &perimeter, double &area) {
    perimeter = 2 * (sideA + sideB);
    area = sideA * sideB;
}

// 5
void swapNumbers(int &a, int &b) {
    if (a != b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
}

// 6
long long factorial(long long num = 1) {
    if (num <= 1) return 1;
    long long fact = 1;
    for (long long i = 2; i <= num; i++) fact *= i;
    return fact;
}

// 7
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 8
double maximum(double num1, double num2, double num3) {
    return max(num1, max(num2, num3));
}
double minimum(double num1, double num2, double num3) {
    return min(num1, min(num2, num3));
}

// 9
double sum(double num1, double num2) { return num1 + num2; }
double subtract(double num1, double num2) { return num1 - num2; }
double productCalc(double num1, double num2) { return num1 * num2; }
double divide(double num1, double num2) { return num2 != 0 ? num1 / num2 : NAN; }

// 10
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

// 11
void displayEven(int num) {
    string s = to_string(abs(num));
    bool found = false;
    for (char c : s) {
        int d = c - '0';
        if (d % 2 == 0) {
            cout << d << " ";
            found = true;
        }
    }
    if (!found) cout << "No even digits";
    cout << "\n";
}

// 12
int cubeOfDigits(int num) {
    int n = abs(num);
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    return sum;
}

void isArmstrong(int sum, int num) {
    if (sum == num) cout << num << " is an Armstrong number\n";
    else cout << num << " is not an Armstrong number\n";
}

// 13
int numberOfDaysInFebruary(int year) {
    bool leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    return leap ? 29 : 28;
}

// 14
double futureInvestmentValue(double amount, double monthlyRate, int years) {
    int months = years * 12;
    return amount * pow(1 + monthlyRate, months);
}

// 15
void printASCII(char ch1, char ch2, int perLine) {
    int start = min((int)ch1, (int)ch2);
    int end = max((int)ch1, (int)ch2);
    int count = 0;
    for (int i = start; i <= end; i++) {
        cout << i << " ";
        count++;
        if (count % perLine == 0) cout << "\n";
    }
    if (count % perLine != 0) cout << "\n";
}

// 19
void displaySorted(double a, double b, double c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    cout << "Sorted: " << a << " " << b << " " << c << "\n";
}

// 20
string convertMillis(long long millis) {
    long long totalSec = millis / 1000;
    long long hours = totalSec / 3600;
    long long minutes = (totalSec % 3600) / 60;
    long long seconds = totalSec % 60;
    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}


int main() {
    // 1
    double num1, num2;
    cout << "1 - Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Product: " << product(num1, num2) << "\n";

    // 2
    double vInit, vFin, time;
    cout << "2 - Enter initial velocity, final velocity, and time: ";
    cin >> vInit >> vFin >> time;
    cout << "Acceleration: " << linearAcc(vInit, vFin, time) << "\n";

    // 3
    double rad, circ, areaC;
    cout << "3 - Enter radius: ";
    cin >> rad;
    circleProperties(rad, circ, areaC);
    cout << "Circumference: " << circ << " Area: " << areaC << "\n";

    // 4
    double sideA, sideB, perim, areaR;
    cout << "4 - Enter rectangle sides: ";
    cin >> sideA >> sideB;
    rectangleProperties(sideA, sideB, perim, areaR);
    cout << "Perimeter: " << perim << " Area: " << areaR << "\n";

    // 5
    int a, b;
    cout << "5 - Enter two integers to swap: ";
    cin >> a >> b;
    swapNumbers(a, b);
    cout << "After swap: a = " << a << " b = " << b << "\n";

    // 6
    long long n;
    cout << "6 - Enter n for factorial: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << "\n";

    // 7
    int x, y;
    cout << "7 - Enter two integers for GCD: ";
    cin >> x >> y;
    cout << "GCD: " << gcd(x, y) << "\n";

    // 8
    double a8, b8, c8;
    cout << "8 - Enter three numbers: ";
    cin >> a8 >> b8 >> c8;
    cout << "Max: " << maximum(a8, b8, c8) << " Min: " << minimum(a8, b8, c8) << "\n";

    // 9
    double n1, n2;
    cout << "9 - Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "Sum: " << sum(n1, n2)
         << " Subtract: " << subtract(n1, n2)
         << " Product: " << productCalc(n1, n2)
         << " Division: " << divide(n1, n2) << "\n";

    // 10
    int terms;
    cout << "10 - Enter how many triangular numbers to display: ";
    cin >> terms;
    for (int i = 1; i <= terms; i++) {
        cout << getTriangularNumber(i) << " ";
        if (i % 5 == 0) cout << "\n";
    }
    cout << "\n";

    // 11
    int num11;
    cout << "11 - Enter a number: ";
    cin >> num11;
    displayEven(num11);

    // 12
    int num12;
    cout << "12 - Enter a number: ";
    cin >> num12;
    int sum12 = cubeOfDigits(num12);
    isArmstrong(sum12, num12);

    // 13
    int startY, endY;
    cout << "13 - Enter start year and end year: ";
    cin >> startY >> endY;
    if (startY > endY) swap(startY, endY);
    for (int y = startY; y <= endY; y++) {
        cout << y << ": " << numberOfDaysInFebruary(y) << " days\n";
    }

    // 14
    double amount, annualRate;
    cout << "14 - Enter amount and annual interest rate (%): ";
    cin >> amount >> annualRate;
    double monthlyRate = annualRate / 100 / 12;
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int y = 1; y <= 30; y++) {
        cout << "Year " << y << ": " << futureInvestmentValue(amount, monthlyRate, y) << "\n";
    }
    cout.unsetf(ios::fixed);

    // 15
    char c1, c2;
    int perLine;
    cout << "15 - Enter two characters and number per line: ";
    cin >> c1 >> c2 >> perLine;
    printASCII(c1, c2, perLine);

    // 19
    double s1, s2, s3;
    cout << "19 - Enter three numbers: ";
    cin >> s1 >> s2 >> s3;
    displaySorted(s1, s2, s3);

    // 20
    long long millis;
    cout << "20 - Enter milliseconds: ";
    cin >> millis;
    cout << "Converted time: " << convertMillis(millis) << "\n";

    return 0;
}

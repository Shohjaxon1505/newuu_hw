//
// Created by Shohjahon Komiljonov on 19/09/25.
//
#include <iostream>
using namespace std;
int main() {
    // 12
    int ang1, ang2, ang3;
    cout << "Enter the angles, separated by (space): ";
    cin >> ang1 >> ang2 >> ang3;
    int sum = ang1 + ang2 + ang3;
    if (sum == 180) {
        cout << "The triangle is valid" << endl;
    } else {cout << "The triangle is not valid" << endl;}

    // 13
    double a, b, c, discriminant, x1, x2;
    cout<<"Enter the values of a, b and c(separated by space): ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        x1 = (-b+sqrt(discriminant))/(2*a);
        x2 = (-b-sqrt(discriminant))/(2*a);
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "x1=" << x1 << endl;
    } else {
        cout << "No roots." << endl;}

    // 14
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    } else {
        cout << "It is not an alphabet" << endl;
    }

    // 15
    double weight1, price1, weight2, price2;
    cout << "Enter weight and price for package 1(separated by space): ";
    cin >> weight1 >> price1;
    cout << "Enter weight and price for package 2(separated by space): ";
    cin >> weight2 >> price2;
    double cost1 = price1 / weight1;
    double cost2 = price2 / weight2;
    if (cost1 < cost2) {
        cout << "Package 1 has a better price." << endl;
    } else if (cost1 > cost2) {
        cout << "Package 2 has a better price." << endl;
    } else {
        cout << "Two packages have the same price." << endl;
    }

    // 16
    int num;
    cout << "Enter a thee-digit number: ";
    cin >> num;
    int first_digit = num / 100;
    int second_digit = (num / 10) % 10;
    int third_digit = num % 10;
    if (first_digit == third_digit) {
        cout << num << " is a palindrome";
    } else {
        cout << num << " is not a palindrome\n";
    }

    // 17
    char language;
    cout << "Enter your language: \n";
    cout << "u - Uzbek\n";
    cout << "e - English\n";
    cout << "r - Russian\n";
    cout << "g - German\n";
    cin >> language;
    if (language == 'u') {
        cout << "Salom";
    } else if (language == 'e') {
        cout << "Hello";
    } else if (language == 'r') {
        cout << "Здравствуйте";
    } else if (language == 'g') {
        cout << "Hallo";
    } else {
        cout << "I do not know this language :(\n";
    }

    // 18
    double x, y;
    cin >> x >> y;
    double distance = sqrt(x * x + y * y);
    if (distance <= 10) {
        cout << "Inside the circle" << endl;
    } else {
        cout << "Outside the circle" << endl;
    }

    // Not numerated problem
    float gpa;
    cout << "Enter your gpa: ";
    cin >> gpa;
    if (gpa >= 4.0) {
        cout << "You got 80% scholarship";
    } else if (gpa >= 3.5) {
        cout << "You got 60% scholarship";
    } else if (gpa >= 3.0) {
        cout << "You got 50% scholarship";
    } else {
        cout << "No scholarship";
    }

    // 19
    int today, elapsed;
    cin >> today;
    cin >> elapsed;
    int futureDay = (today + elapsed) % 7;
    string dayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Today is " << dayNames[today] << " and the future day is " << dayNames[futureDay] << endl;

    // 20.1
    double weightkg;
    cin >> weightkg;
    if (weightkg <= 0) {
        cout << "Invalid input" << endl; // 20.1
    } else if (weightkg <= 1) {
        cout << "Shipping cost: 3500" << endl;
    } else if (weightkg <= 3) {
        cout << "Shipping cost: 5500" << endl;
    } else if (weightkg <= 10) {
        cout << "Shipping cost: 8500" << endl;
    } else if (weightkg <= 20) {
        cout << "Shipping cost: 10500" << endl;
    } else {
        cout << "The package cannot be shipped" << endl;
    }

    // 20.2
    double weight;
    cin >> weight;

    if (weight <= 0) {
        cout << "Invalid input" << endl; // 20.2
    } else {
        int cost;
        switch (static_cast<int>(weight)) {
            case 1:
                cost = 3500;
                break;
            case 2:
            case 3:
                cost = 5500;
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                cost = 8500;
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                cost = 10500;
                break;
            default:
                cout << "The package cannot be shipped" << endl;
                return 0;
        }
        cout << "Shipping cost: " << cost << endl;
    }

    // 21
    int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "In January there is:\n- New Year's Day, 1 January" << endl;
            break;
        case 2:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 3:
            cout << "In March there is:\n- International Women's Day, 8 March\n- Navruz, 21 March" << endl;
            break;
        case 4:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 5:
            cout << "In May there is:\n- Labour Day, 1 May\n- Independence Day, 9 May" << endl;
            break;
        case 6:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 7:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 8:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 9:
            cout << "In September there is:\n- Independence Day, 1 September" << endl;
            break;
        case 10:
            cout << "In October there is:\n- Teacher's Day, 5 October" << endl;
            break;
        case 11:
            cout << "In February, April, June, July, August, November there is no holidays.\nThere are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
            break;
        case 12:
            cout << "In December there is:\n- Constitution Day, 8 December" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;
    }
    return 0;
}
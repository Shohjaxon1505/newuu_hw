//
// Created by Shohjahon Komiljonov on 21/11/25.
//
#include <iostream>
using namespace std;
void greet() {
    cout << "Hello from greet()" << endl;}
void bye() {
    cout << "Goodbye from bye()" << endl;}
int add16(int a16, int b16) {
    return a16 + b16;}
int multiply16(int a16, int b16) {
    return a16 * b16;}
void calculate17(int (*op17)(int, int), int x17, int y17) {
    int result17 = op17(x17, y17);
    cout << "Result: " << result17 << endl;}

int main() {
    // 9
    int a9 = 7, b9 = 14, c9 = 21;
    int *ptrs9[3] = {&a9, &b9, &c9};
    for (int i9 = 0; i9 < 3; i9++) {
        cout << *ptrs9[i9] << " ";
    }
    cout << endl;

    // 10
    int arr10[5] = {9, 3, 7, 1, 6};
    int *p10 = arr10;
    for (int i10 = 0; i10 < 5; i10++) {
        for (int j10 = i10 + 1; j10 < 5; j10++) {
            if (*(p10 + j10) < *(p10 + i10)) {
                int temp10 = *(p10 + i10);
                *(p10 + i10) = *(p10 + j10);
                *(p10 + j10) = temp10;}}}
    for (int i10 = 0; i10 < 5; i10++) {
        cout << *(p10 + i10) << " ";}
    cout << endl;

    // 11
    const char *p11[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    for (int i11 = 0; i11 < 4; i11++) {
        cout << *(p11 + i11) << " ";}
    cout << endl;

    // 12
    const char *days12[3] = {"Mon", "Tue", "Wed"};
    for (int i12 = 0; i12 < 3; i12++) {
        cout << *(*(days12 + i12) + 1) << " ";}
    cout << endl;

    // 13
    string deck13[1][13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suits13[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};
    cout << deck13[0][0] << " of " << suits13[0] << ", ";
    cout << deck13[0][1] << " of " << suits13[1] << endl;

    // 14


    // 15
    void (*fptr)();
    fptr = greet;
    fptr();
    fptr = bye;
    fptr();

    // 16
    int (*fptr16)(int, int);
    int num116, num216, choice16;
    cout << "Enter two integers: ";
    cin >> num116 >> num216;
    cout << "1 for addition";
    cout << "2 for multiplication";
    cout << "Enter 1 or 2:  ";
    cin >> choice16;
    if (choice16 == 1) {
        fptr16 = add16;
    } else if (choice16 == 2) {
        fptr16 = multiply16;
    } else {
        cout << "Invalid choice!" << endl;
        return 1;}
    int result16 = fptr16(num116, num216);
    if (choice16 == 1) {
        cout << "Add: " << result16 << endl;
    } else {
        cout << "Multiply: " << result16 << endl;}

    // 17
    int choice17, num117, num217;
    cout << "Enter two integers: ";
    cin >> num117 >> num217;
    cout << "1 for addition";
    cout << "2 for multiplication";
    cout << "Enter 1 or 2:  ";
    cin >> choice17;
    if (choice17 == 1) {
        calculate17(add16, num117, num217);
    } else if (choice17 == 2) {
        calculate17(multiply16, num117, num217);
    } else {
        cout << "Invalid" << endl;}

    // 18
    int (*ops18[])(int, int) = {add16, multiply16};
    int choice18, num118, num218;
    cout << "Enter two integers: ";
    cin >> num118 >> num218;
    cout << "1 for addition";
    cout << "2 for multiplication";
    cout << "Enter 1 or 2:  ";
    cin >> choice18;
    if (choice18 == 1 || choice18 == 2) {
        int result18 = ops18[choice18 - 1](num118, num218);
        cout << "Result: " << result18 << endl;
    } else {
        cout << "Invalid choice!" << endl;}
}
//
// Created by Shohjahon Komiljonov on 31/10/25.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap the elements at 'start' and 'end'
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    // 6
    char ch;
    int freq[26] = {0};
    while (cin >> ch && ch != '0') {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char(i + 'a') << ": " << freq[i] << endl;
    }
    // 7
    int num;
    cin >> num;
    vector<int> arr(num);
    for (int i = 0; i < num; i++) {
        cin >> arr[i];}
    sort(arr.begin(), arr.end());
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    // 8
    int count[7] = {0};
    for (int i = 0; i < 10000; i++) {
        int roll = rand() % 6 + 1;
        count[roll]++;}
    for (int i = 1; i <= 6; i++) {
        cout << "Value " << i << ": " << count[i] << endl;}

    // 9
    string inputLine;
    getline(cin, inputLine);
    stringstream ss(inputLine);
    vector<int> arr5;
    int value;
    while (ss >> value) {
        arr5.push_back(value);}
    int n1 = arr5.size();
    int arr4[n1];
    for (int i = 0; i < n1; i++) {
        arr4[i] = arr5[i];}
    reverseArray(arr4, 0, n1 - 1);
    for (int i = 0; i < n1; i++) {
        cout << arr4[i] << " ";}
    cout << endl;

    // 10
    int n;
    cin >> n;
    vector<int> arr3(n);
    for (int i = 0; i < n; i++) {
        cin >> arr3[i];}
    bool isSorted = true;
    for (int i = 1; i < n; i++) {
        if (arr3[i] < arr3[i - 1]) {
            isSorted = false;
            break;}}
    if (isSorted)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
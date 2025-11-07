//
// Created by Shohjahon Komiljonov on 07/11/25.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    // 5
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    for(int j=0; j<n; j++){
        int sum = 0;
        for(int i=0; i<m; i++)
            sum += a[i][j];
        cout << sum << " ";}
    // 6
    int n6;
    cin >> n6;
    int a6[n6][n6], sum = 0;
    for(int i=0; i<n6; i++)
        for(int j=0; j<n6; j++)
            cin >> a6[i][j];
    for(int i=0; i<n6; i++)
        sum += a6[i][i];
    cout << sum;
    // 7
    int m7, n7;
    cin >> m7 >> n7;
    int a7[m7][n7];
    for(int i=0; i<m7; i++)
        for(int j=0; j<n7; j++)
            cin >> a7[i][j];
    for(int j=0; j<n7; j++){
        for(int i=0; i<m7; i++)
            cout << a7[i][j] << " ";
        cout << endl;}
    // 8
    int n8, m8;
    cin >> n8 >> m8;
    int a8[n8][m8], b[n8][m8], c[n8][m8];
    for(int i=0; i<n8; i++)
        for(int j=0; j<m8; j++)
            cin >> a8[i][j];
    for(int i=0; i<n8; i++)
        for(int j=0; j<m8; j++)
            cin >> b[i][j];
    for(int i=0; i<n8; i++) {
        for(int j=0; j<m8; j++) {
            c[i][j] = a8[i][j] + b[i][j];
            cout << c[i][j] << " ";}
        cout << endl;}
    // 9
    int n9, m9, p9;
    cin >> n9 >> m9 >> p9;
    int A9[n9][m9], B9[m9][p9], C9[n9][p9];
    for(int i9=0; i9<n9; i9++)
        for(int j9=0; j9<m9; j9++)
            cin >> A9[i9][j9];
    for(int i9=0; i9<m9; i9++)
        for(int j9=0; j9<p9; j9++)
            cin >> B9[i9][j9];
    for(int i9=0; i9<n9; i9++) {
        for(int j9=0; j9<p9; j9++) {
            C9[i9][j9] = 0;
            for(int k9=0; k9<m9; k9++) {
                C9[i9][j9] += A9[i9][k9] * B9[k9][j9];}}}
    for(int i9=0; i9<n9; i9++) {
        for(int j9=0; j9<p9; j9++) {
            cout << C9[i9][j9] << " ";}
        cout << endl;}
    // 10
    int n10;
    cin >> n10;
    int A10[n10][n10], B10[n10][n10];
    for(int i10=0; i10<n10; i10++)
        for(int j10=0; j10<n10; j10++)
            cin >> A10[i10][j10];
    for(int i10=0; i10<n10; i10++)
        for(int j10=0; j10<n10; j10++)
            B10[j10][i10] = A10[i10][j10];
    for(int i10=0; i10<n10; i10++)
        reverse(B10[i10], B10[i10] + n10);
    for(int i10=0; i10<n10; i10++) {
        for(int j10=0; j10<n10; j10++) {
            cout << B10[i10][j10] << " ";}
        cout << endl;}
    // 15
    int n15, x15;
    cin >> n15;
    vector<int> v15(n15);
    for(int i15=0; i15<n15; i15++)
        cin >> v15[i15];
    cin >> x15;
    vector<int> result15;
    for(int i15=0; i15<n15; i15++) {
        if(v15[i15] != x15) {
            result15.push_back(v15[i15]);}}
    for(int i15=0; i15<result15.size(); i15++) {
        cout << result15[i15] << " ";}
    // 16
    int n16;
    cin >> n16;
    vector<int> v16(n16);
    for(int i16=0; i16<n16; i16++)
        cin >> v16[i16];
    for(int i16=n16-1; i16>=0; i16--) {
        cout << v16[i16] << " ";}
    // 17
    int n17, x17, k17;
    cin >> n17;
    vector<int> v17(n17);
    for(int i17=0; i17<n17; i17++)
        cin >> v17[i17];
    cin >> x17 >> k17;
    v17.insert(v17.begin() + k17, x17);
    for(int i17=0; i17<n17+1; i17++) {
        cout << v17[i17] << " ";}
    // 18
    int n18;
    cin >> n18;
    vector<int> v18(n18);
    for(int i18=0; i18<n18; i18++)
        cin >> v18[i18];
    vector<int> unique18;
    for(int i18=0; i18<n18; i18++) {
        if(i18 == 0 || v18[i18] != v18[i18-1]) {
            unique18.push_back(v18[i18]);}}
    for(int i18=0; i18<unique18.size(); i18++) {
        cout << unique18[i18] << " ";}
    // 19
    int n19;
    cin >> n19;
    vector<int> v19(n19);
    for(int i19=0; i19<n19; i19++)
        cin >> v19[i19];
    sort(v19.begin(), v19.end());
    for(int i19=0; i19<n19; i19++) {
        cout << v19[i19] << " ";}
    // 20
    int n20;
    cin >> n20;
    vector<int> v20(n20);
    for(int i20=0; i20<n20; i20++)
        cin >> v20[i20];
    set<int> unique20(v20.begin(), v20.end());
    if(unique20.size() == 1) {
        cout << *unique20.begin() << endl;
    } else {
        auto it20 = unique20.rbegin();
        ++it20;
        cout << *it20 << endl;}
    return 0;}
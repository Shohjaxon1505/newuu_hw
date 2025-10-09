//
// Created by Shohjahon Komiljonov on 09/10/25.
//
#include <iostream>
using namespace std;
// 5
double bal = 500;
void dep(double a){
    bal += a;}
void wd(double a){
    if(a <= bal){
        bal -= a;}
    else{
        cout << "Insufficient Funds\n";}}
void chk(){
    cout << "Balance: $" << bal << endl;}
// 6
int total(int p,int q){
    return p * q;}
// 7
int fee(int h){
    if(h <= 2){
        return 0;}
    else if(h <= 5){
        return (h - 2) * 2;}
    else{
        return 6 + (h - 5) * 5;}}
// 8
int bill(int p,int q){
    return p * q;}

int main(){
    // 5 - Bank
    int o;
    double a;
    do{
        cout << "1.Deposit 2.Withdraw 3.Check 4.Exit: ";
        cin >> o;
        if(o == 1){
            cout << "Amount: ";
            cin >> a;
            dep(a);}
        else if(o == 2){
            cout << "Amount: ";
            cin >> a;
            wd(a);}
        else if(o == 3){
            chk();}
    }while(o != 4);

    // 6 - Movies
    int mv, q;
    do{
        cout << "1.MovieA($8) 2.MovieB($10) 3.MovieC($12) 4.Exit: ";
        cin >> mv;
        if(mv == 4){
            break;}
        cout << "Tickets: ";
        cin >> q;
        int p;
        if(mv == 1){
            p = 8;}
        else if(mv == 2){
            p = 10;}
        else{
            p = 12;}
        cout << "Total: $" << total(p, q) << endl;
    }while(true);

    // 7 - Parking
    int h;
    char c;
    do{
        cout << "Hours: ";
        cin >> h;
        cout << "Fee: $" << fee(h) << endl;
        cout << "Next? (y/n): ";
        cin >> c;
    }while(c == 'y');

    // 8 - Restaurant
    int it, qt;
    do{
        cout << "1.Pizza($10) 2.Burger($8) 3.Salad($5) 4.Exit: ";
        cin >> it;
        if(it == 4){
            break;}
        cout << "Qty: ";
        cin >> qt;
        int p;
        if(it == 1){
            p = 10;}
        else if(it == 2){
            p = 8;}
        else{
            p = 5;}
        cout << "Total Bill: $" << bill(p, qt) << endl;
    }while(true);
    return 0;}
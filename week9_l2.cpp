//
// Created by Shohjahon Komiljonov on 23/10/25.
//
#include <iostream>
#include <cmath>
using namespace std;

int power(int x, int y){
    if(y==0) return 1;
    return x*power(x,y-1);}

int revNum(int n, int r=0){
    if(n==0) return r;
    return revNum(n/10, r*10 + n%10);}

bool isPal(int n){
    return n==revNum(n);}

bool isPrime(int n, int d=2){
    if(n<2) return false;
    if(d*d>n) return true;
    if(n%d==0) return false;
    return isPrime(n,d+1);}

int evenCount(int n){
    if(n==0) return 0;
    int c = ((n%10)%2==0)?1:0;
    return c + evenCount(n/10);}

int prodDigits(int n){
    if(n==0) return 1;
    return (n%10)*prodDigits(n/10);}

bool pow2(int n){
    if(n==1) return true;
    if(n==0 || n%2!=0) return false;
    return pow2(n/2);}

bool incDigits(int n){
    if(n<10) return true;
    if(n%10 <= (n/10)%10) return false;
    return incDigits(n/10);}

int zeroCount(int n){
    if(n==0) return 0;
    int c = (n%10==0)?1:0;
    return c + zeroCount(n/10);}

int fastPow(int x,int y){
    if(y==0) return 1;
    int half = fastPow(x,y/2);
    if(y%2==0) return half*half;
    return x*half*half;}

int josephus(int n,int k){
    if(n==1) return 1;
    return (josephus(n-1,k)+k-1)%n+1;}

int main(){
    cout << power(2,3) << endl;
    cout << revNum(1234) << endl;
    cout << isPal(121) << endl;
    cout << isPrime(17) << endl;
    cout << evenCount(2468) << endl;
    cout << prodDigits(1234) << endl;
    cout << pow2(8) << endl;
    cout << incDigits(1234) << endl;
    cout << zeroCount(1050) << endl;
    cout << fastPow(3,5) << endl;
    cout << josephus(5,2) << endl;}

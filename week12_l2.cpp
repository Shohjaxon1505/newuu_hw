//
// Created by Shohjahon Komiljonov on 14/11/25.
//
#include <iostream>
using namespace std;
// 1
int findMax(int *a1, int s1){
    int m1 = *a1;
    for(int i=1;i<s1;i++){
        if(*(a1+i) > m1) m1 = *(a1+i);}
    return m1;}
// 3
int* maxPtr(int *a3, int s3){
    int *m3 = a3;
    for(int i=1;i<s3;i++){
        if(*(a3+i) > *m3) m3 = a3+i;}
    return m3;}
// 7
float avg7(int *a7, int s7){
    int sum7=0;
    for(int i=0;i<s7;i++) sum7 += *(a7+i);
    return (float)sum7/s7;}
// 10
void rev10(int *l10, int *r10){
    while(l10 < r10){
        int t10 = *l10;
        *l10 = *r10;
        *r10 = t10;
        l10++; r10--;}}
// 11
void top11(int *a11, int s11){
    int *x11=a11, *y11=a11, *z11=a11;
    for(int i=0;i<s11;i++){
        int *p11 = a11+i;
        if(*p11 > *x11){
            z11 = y11;
            y11 = x11;
            x11 = p11;
        } else if(*p11 > *y11 && p11!=x11){
            z11 = y11;
            y11 = p11;
        } else if(*p11 > *z11 && p11!=x11 && p11!=y11){
            z11 = p11;}}
    cout << *x11 << " " << *y11 << " " << *z11 << endl;}
// 12
int* countDigits(const int& n12){
    int *c12 = new int[10];
    for(int i=0;i<10;i++) c12[i]=0;
    int x12=n12;
    if(x12==0) c12[0]++;
    while(x12>0){
        c12[x12%10]++;
        x12/=10;}
    return c12;}
int main(){
// 1
    int h1[]={150,165,172,160,180};
    cout << findMax(h1,5) << endl;
// 2
    int a2,b2;
    cin>>a2>>b2;
    int *pa2=&a2, *pb2=&b2;
    cout<<*pa2<<" "<<*pb2<<endl;
// 3
    int n3;
    cin>>n3;
    int *a3=new int[n3];
    for(int i=0;i<n3;i++) cin>>a3[i];
    cout<<*maxPtr(a3,n3)<<endl;
    delete[] a3;
// 4
    int n1=9,n2=11,*p1=nullptr,*p2=nullptr,k=0; double t;
    p1=&n2;
    p2=&n1;
    t=33.3;
    k=33.3;
    int a=50;
    cout<<*p1<<" "<<*p2<<" "<<t<<" "<<a<<endl;
// 5
    int a5[10];
    for(int i=0;i<10;i++) cin>>a5[i];
    int *p5=a5;
    for(int i=0;i<10;i++) cout<<(p5+i)<<" "<<*(p5+i)<<endl;
// 6
    int m6;
    cin>>m6;
    int *p6=&m6;
    cout<<*p6<<endl;
// 7
    int s7[]={88,76,90,85,92};
    cout<<avg7(s7,5)<<endl;
// 8
    int t8[]={10,20,30,40,50};
    int *p8=t8;
    p8+=4;
    cout<<*p8<<endl;
// 9
    int s9=75;
    int *p9=&s9;
    cout<<s9<<endl;
    *p9+=10;
    cout<<s9<<endl;
// 10
    int n10;
    cin>>n10;
    int *a10=new int[n10];
    for(int i=0;i<n10;i++) cin>>a10[i];
    rev10(a10,a10+n10-1);
    for(int i=0;i<n10;i++) cout<<a10[i]<<" ";
    cout<<endl;
    delete[] a10;
// 11
    int a11[]={78,95,85,62,88};
    top11(a11,5);
// 12
    int n12;
    cin>>n12;
    int *c12=countDigits(n12);
    for(int i=0;i<10;i++) cout<<"counts["<<i<<"]="<<c12[i]<<endl;
    delete[] c12;
    return 0;
}
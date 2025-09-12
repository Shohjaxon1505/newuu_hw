#include <iostream>
#include <cmath>
using namespace std;
int main() {
    {
        double a = 1.13e3, b = 411e-4;
        cout << a << " " << b << endl;
    }
    {
        int admitted = 241, groups = 11;
        int perGroup = admitted / groups;
        int remainder = admitted % groups;
        cout << "In first group: " << perGroup + (remainder > 0) << endl;
        cout << "In last group: " << remainder << endl;
    }
    {
        double s;
        cin >> s;
        double area = (3 * sqrt(3) / 2) * s * s;
        cout << "The area of the hexagon is " << area << endl;
    }
    {
        int num = 31;
        num++;
        num = num * 3;
        num = num - 14;
        num = num / 4;
        num = num - 1;
        num = num % 9;
        cout << num << endl;
    }
    {
        char c = 'A';
        cout << char(c+7) << char(c+4) << char(c+11) << char(c+11) << char(c+14) << char(c-32) << endl;
    }
    {
        float x = 17, y = 1;
        float z = (x + (++x)) / (3 * 2);
        cout << z << endl;
    }
    {
        int a, b;
        cin >> a >> b;
        cout << (a == b) << endl;
    }
    {
        int a, b;
        cin >> a >> b;
        cout << ((a < 140) && (a < b)) << endl;
    }
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a > b && a > c) << endl;
    }
    {
        int n1, n2, n3, n4, n5;
        cin >> n1 >> n2 >> n3 >> n4 >> n5;
        cout << ((n1 >= 0) || (n2 >= 0) || (n3 >= 0) || (n4 >= 0) || (n5 >= 0)) << endl;
    }
    {
        int a, b;
        cin >> a >> b;
        cout << ((a+b>30 && a*b>30)?1:0) << " ";
        cout << (((a+(b-10))>30 || (a*(b-10))>30)?1:0) << " ";
        cout << ((a>30 || b>30)?1:0) << endl;
    }
    {
        double x, y;
        cin >> x >> y;
        double mike = y * 30.48;
        cout << (mike > x) << endl;
    }
    return 0;
}
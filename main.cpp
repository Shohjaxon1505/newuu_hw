#include <iostream>
#include <cmath>
using namespace std;
int main() {
    {
        int intNumber = 30;
        float floatNumber = 3.14f;
        double doubleNumber = 45.1234;
        bool boolean = true;
        char charName = 'A';
        cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
        cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) << endl;
        cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << endl;
        cout << "Value of Char is " << charName << ". Size is " << sizeof(charName) << endl;
        cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;
    }
    {
        cout << "Shohjahon Komiljonov\n";
        cout << "250269\n";
        cout << "Neboley - Zivert, Basta\n";
        cout << "Cars 3\n";
    }
    {
        cout << "\"I’m standing\" on the edge of some crazy cliff.\n";
        cout << "What I have to do, I have to catch everybody\\\n";
        cout << "if they start to go over the cliff—I mean\\\n";
        cout << "\\if they’re running and they don’t look\n";
        cout << "where they’re going I have to come out\n";
        cout << "from somewhere and catch them.\n";
    }
    {
        int a = 189;
        char b = 'B';
        float res1 = a / 3.0f;
        int res2 = int(b);
        float res3 = (a + b) / 5.0f;
        char res4 = char(b + (a/10 - 1));
        cout << res1 << " " << res2 << " " << res3 << " " << res4 << endl;
    }
    {
        int a = 12, b = 38;
        cout << "Sum=" << a + b << endl;
        cout << "Product=" << a * b << endl;
    }
    {
        int x, y;
        cin >> x >> y;
        cout << "Sum: " << x << " + " << y << " = " << x + y << endl;
    }
    {
        double x, y;
        cin >> x >> y;
        double t = 3 * (pow(x, 2) + 3) / (pow(y, 4) + 3);
        cout << "t=" << t << endl;
    }
    {
        double d;
        cin >> d;
        double r = d / 2.0;
        double area = 4 * M_PI * r * r;
        cout << "Area: " << area << endl;
    }
    {
        double v0, v1, t;
        cin >> v0 >> v1 >> t;
        double a = (v1 - v0) / t;
        cout << a << endl;
    }
    {
        double distance, mpg, price;
        cin >> distance >> mpg >> price;
        double cost = (distance / mpg) * price;
        cout << "The cost of driving is $" << cost << endl;
    }
    return 0;
}
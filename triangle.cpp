

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double d,e,f;
    
    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter b: ";
    cin >> b;
    
    d = pow(a, 2.0);
    e = pow(b, 2.0);
    f = d+e;
    
    c = pow(f, 1.0/2.0);
    
    cout << "Side A was: " << a << endl;
    cout << "Side B was: " << b << endl;
    cout << "The computer calculated side C as: " << c << endl;
    
    //return 0;
    cin.get();
}


// CONSOLE OUTPUT

/*
 
 Alex-Miless-MacBook-Pro:csci milesa2$ g++ triangle.cpp -o triangle
 Alex-Miless-MacBook-Pro:csci milesa2$ ./triangle
 Enter a: 5
 Enter b: 12
 Side A was: 5
 Side B was: 12
 The computer calculated side C as: 13

 */


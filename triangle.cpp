

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
    cout << "C is: " << c << endl;
    
    //return 0;
    cin.get();
}


// CONSOLE OUTPUT

/*
 
 Enter a: 5
 Enter b: 12
 C is: 13

 */


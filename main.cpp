// Aalaysia Kelley j00958443 11/8/2022
// program #7 pg. 220

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double a, b, c, root1, root2, d;
    cout << "Enter the value of a:"; 
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    
    d= b * b - 4.0 * a * c;
    
    if (d < 0)
    {
        cout << "Complex conjugates\n";
    }
    
    if (d > 0){
        cout << "Real distinct roots\n";
        root1 = (-b + sqrt(d)) / (2.0 * a);
        root2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "First root = " << root1 << endl;
        cout << "Second root = " << root2 << endl;
        
        }
    
    else if (d == 0){
        cout << "Repeated real roots\n";
        root1 = -b / (2.0 * a);
        root2 = -b / (2.0 * a);
        cout << "Root = " << root1 << endl;
        

    }
   
 return 0;
 
 }

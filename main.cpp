// Aalaysia Kelley j00958443 11/8/2022.
// program #7 pg. 220

#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double a, b, c, root1, root2, d;
    
    
    d= b * b - 4.0 * a * c;
    
    if (d < 0)
    {
        cout << "Complex roots\n";
    }
    
    if (d > 0){
        root1 = (-b + sqrt(d)) / (2.0 * a);
        root2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "-First root  " << root1 << endl;
        cout << "-Second root  " << root2 << endl;
        
        }
    
    else if (d == 0){
        
        root1 = -b / (2.0 * a);
        root2 = -b / (2.0 * a);
        cout << "The single root is  " << root1 << endl;
        

    }
    
    if (a == 0)
    {
        cout << "invalid entry";
    }
   
 return 0;
 
 }

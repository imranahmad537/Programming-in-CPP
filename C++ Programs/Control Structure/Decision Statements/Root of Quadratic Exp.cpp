#include <iostream>
#include <cmath>  // for sqrt()

using namespace std;

int main() {
    // Declare variables for coefficients
    double a, b, c;

    // Take input from user
    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Check for different cases based on discriminant
    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        // One real root (repeated)
        double root = -b / (2 * a);
        cout << "The root is real and repeated." << endl;
        cout << "Root = " << root << endl;
    } 
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}

/*
Input: The program first takes the coefficients a, b, and c from the user.
Discriminant Calculation: The discriminant b2-4ac (b square - 4ac ) is computed.
Root Calculation: Depending on the value of the discriminant:

If D>0, the equation has two real roots, which are calculated using the quadratic formula.

If D=0, there is exactly one real root.

If D<0, the roots are complex, and the real and imaginary parts are computed separately.

Output: The program then prints the roots based on the discriminant.

*/


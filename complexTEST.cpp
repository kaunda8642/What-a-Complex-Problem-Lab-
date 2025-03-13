

#include <iostream>
#include <cassert>
#include "complex.h"

int main() {
    ComplexNumber c1(3.0, 2.0);
    ComplexNumber c2(1.0, 7.0);

    // Test add function
    ComplexNumber sum = c1.add(c2);
    assert(sum.realPart() == 4.0 && sum.imagPart() == 9.0);

    // Test subtract function
    ComplexNumber difference = c1.subtract(c2);
    assert(difference.realPart() == 2.0 && difference.imagPart() == -5.0);

    // Test multiply function
    ComplexNumber product = c1.multiply(c2);
    assert(product.realPart() == -11.0 && product.imagPart() == 23.0);

    // Test divide function
    ComplexNumber quotient = c1.divide(c2);
    assert(quotient.realPart() == 0.380952 && quotient.imagPart() == -0.0952381);

    // Test magnitude function
    assert(c1.magnitude() == 3.605551);

    // Test conjugate function
    ComplexNumber conjugate = c1.conjugate();
    assert(conjugate.realPart() == 3.0 && conjugate.imagPart() == -2.0);

    // Test negate function
    ComplexNumber negation = c1.negate();
    assert(negation.realPart() == -3.0 && negation.imagPart() == -2.0);

    // Print results to verify everything is correct
    std::cout << "All tests passed!" << std::endl;

    return 0;
}



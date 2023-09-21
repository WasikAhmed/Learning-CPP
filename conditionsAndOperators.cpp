// Operators for conditions and conditional statements

// 							Common operators
// assignment | increment | arithmetic |  logical | comparison | member | other
// 		      | decrement |            |		  |		       | access |
// -----------------------------------------------------------------------------                            
//   a = b    | ++a    |     +a	    |	 !a	   |   a == b   |  a[b]  | a(...)
//   a += b   |	--a	   |     -a		|  a && b  |   a != b   |   *a   |  a, b
//   a -= b   |	a++	   |   a + b	|  a || b  |   a < b    |   &a   |  ? :
//   a *= b   |	a--	   |   a - b	|	       |   a > b    |  a->b  |
//   a /= b   |		   |   a * b	|	       |   a <= b	|  a.b   |
//   a %= b   |		   |   a / b	|		   |   a >= b	|  a->*b |
//   a &= b   |		   |   a % b	|		   |   a <=> b	|  a.*b  |
//   a |= b   |		   |     ~a		|		   |		    |		 |
//   a ^= b   |		   |   a & b	|		   |   		    |		 |
//   a <<= b  |		   |   a | b	|		   |			|		 |
//   a >>= b  |		   |   a ^ b	|		   |			|		 |     
//    		  |		   |   a << b	|		   |			|		 |  
//      	  |		   |   a >> b	|		   |			|		 |  

// Conditional statements
// if - if a condition is true
// else - if a condition is false
// else if - if the first condition is false

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 5;

    // using if
    if(a > b) {
        cout<< "a is greater than b"<< endl;
    }

    if(a < b) {
        cout<<  "a is less than b"<< endl;
    }

    // using else
    if(a < b) {
        cout<< "a is less than b"<< endl;
    }
    else {
        cout<< "a is greater than b"<< endl;
    }

    // using else if
    if(a == b) {
        cout<< "a is equal to b"<< endl;
    }
    else if(a > b) {
        cout<< "a is greater than b"<< endl;
    }
    else {
        cout<< "a is less than b"<< endl;
    }

    return 0;
}
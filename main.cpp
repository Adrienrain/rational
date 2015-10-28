#include <iostream>

using namespace std;

//class Rational();



class Rational{
public:
    Rational(int n, int d){   // rational number constructor for two parameters
        numerator = n;
        denominator = d;
    } // end of constructor

    Rational(int wholeNumber){   // whole number constructor
        numerator = wholeNumber;
        denominator = 1;
    }

    Rational(){    // default constructor
        numerator = 0;
        denominator = 1;
    }

    void setNumerator(int x){
        numerator = x;
    } // end numerator setter

    void setDenominator(int y){
        denominator = y;
    } // end denominator setter

    int getNumerator(){
        return numerator;
    } // end numerator getter

    int getDenominator(){
        return denominator;
    } // end denominator getter

/*    void operator <<() {
 *         // hmmm...
 *    }
 *
 *    void operator >>() {
 *         // hmmm...
 *    }
 *
 *    void operator <() {
 *         // hmmm...
 *    }
 *
 *    void operator <=() {
 *         // hmmm...
 *    }
 *
 *    void operator >() {
 *         // hmmm...
 *    }
 *
 *    void operator >=() {
 *         // hmmm...
 *    }
 *
 *    void operator +() {
 *         // hmmm...
 *    }
 *
 *    void operator -() {
 *         // hmmm...
 *    }
 *
 *    void operator *() {
 *         // hmmm...
 *    }
 *
 *    void operator /() {
 *         // hmmm...
 *    }
 */






private:
    int numerator, denominator, x=1;






};


int main()
{
    Rational meow;
    cout << meow.getDenominator();


    return 0;
}




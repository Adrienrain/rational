#include <iostream>

using namespace std;

//class Rational();



class Rational{
public:
    Rational(int n, int d){
        numerator = n;
        denominator = d;
    } // end of constructor

    Rational(int wholeNumber){
        numerator = wholeNumber;
        denominator = 1;
    }

    Rational(){
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




private:
    int numerator, denominator;






};


int main()
{
    Rational meow;
    cout << meow.getDenominator();


    return 0;
}




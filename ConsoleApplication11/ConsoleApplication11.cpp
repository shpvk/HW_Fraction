#include <iostream>
#include <math.h>

class Fraction
{
private:
    double numerator;
    double denominator;
public:
    void Init(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    Fraction addition(Fraction& b)
    {
        Fraction result;
        result.numerator = this->numerator * b.numerator + b.numerator * this->denominator;
        result.denominator = this->denominator * b.denominator;
        return result;
    }

    Fraction subtraction(Fraction& b)
    {
        Fraction result;
        result.numerator = this->numerator - b.numerator;
        result.denominator = this->denominator;
        return result;
    }

    Fraction multiplication(Fraction& b)
    {
        Fraction result;
        result.numerator = this->numerator * b.numerator;
        result.denominator = this->denominator * b.denominator;
        return result;
    }

    Fraction division(Fraction& b)
    {
        if (b.numerator == 0 || b.denominator == 0 || this->numerator == 0 || this->denominator == 0)
        {
            std::cout << "Zero division error" << std::endl;
            return b;
        }


        Fraction result;
        result.numerator = this->numerator * b.denominator;
        result.denominator = this->denominator * b.numerator;
        return result;
    }
    void Print()
    {
        std::cout<< numerator / denominator << std::endl;
    }

};


int main()
{
    Fraction f1;
    Fraction f2;
    f1.Init(1, 4);
    f2.Init(7, 4);


    Fraction result;

    std::cout << "1/4 + 7/4 = ";
    result = f1.addition(f2);
    result.Print();

    std::cout << "1/4 - 7/4 = ";
    result = f1.subtraction(f2);
    result.Print();


    std::cout << "1/4 * 7/4 = ";
    result = f1.multiplication(f2);
    result.Print();


    std::cout << "1/4 / 7/4 = ";
    result = f1.division(f2);
    result.Print();
}
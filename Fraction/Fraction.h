#pragma once  
#include <iostream>  

namespace mathlib {
	template<typename T>
	class Fraction {
	public:
		T getNumerator() const { return numerator; }
		T getDenominator() const { return denominator; }

		Fraction() = default;
		Fraction(T numerator, T denominator) :
			numerator(numerator), denominator(denominator) {
			if (getNumerator() == 0) {
				std::cout << "numerator cannot = 0, set to 1 instead" << std::endl;
				this->numerator = 1;
			}
			if (getDenominator() == 0) {
				std::cout << "denominator cannot = 0, set to 1 instead" << std::endl;
				this->denominator = 1;
			}
		};

		Fraction operator + (const Fraction& other) const {
			if (denominator == other.denominator) {
				return Fraction(numerator + other.numerator, denominator);
			}
			else {
				return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
			}
		}

		Fraction operator - (const Fraction& other) const {
			if (denominator == other.denominator) {
				return Fraction(numerator - other.numerator, denominator);
			}
			else {
				return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
			}
		}

		Fraction operator * (const Fraction& other) const {
			return Fraction(numerator * other.numerator, denominator * other.denominator);
		}

		Fraction operator / (const Fraction& other) const {
			return Fraction(numerator * other.denominator, denominator * other.numerator);
		}

		bool operator == (const Fraction& other) const {
			return (getNumerator() == other.getNumerator() && getDenominator() == other.getDenominator());
		}

		bool operator != (const Fraction& other) const {
			return !(*this == other);
		}

		bool operator < (const Fraction& other) const {
			return (numerator * other.denominator < other.numerator * denominator);
		}

		bool operator > (const Fraction& other) const {
			return (numerator * other.denominator > other.numerator * denominator);
		}

		bool operator <= (const Fraction& other) const {
			return (numerator * other.denominator <= other.numerator * denominator);
		}

		bool operator >= (const Fraction& other) const {
			return (numerator * other.denominator >= other.numerator * denominator);
		}

		friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
			os << fraction.numerator << "/" << fraction.denominator;
			return os;
		}

		friend std::istream& operator>>(std::istream& is, Fraction& fraction) {
			char separator;
			is >> fraction.numerator >> separator >> fraction.denominator;
			return is;
		}

		Fraction Simplify() {
			T gcd = findGCD(numerator, denominator);

			T simplifiedNumerator = numerator / gcd;
			T simplifiedDenominator = denominator / gcd;

			if (simplifiedDenominator < 0) {
				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;
			}

			return Fraction(simplifiedNumerator, simplifiedDenominator);
		}

		T findGCD(T a, T b) {
			while (b != 0) {
				T temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}

		float toFloat() const {
			return static_cast<float>(numerator) / static_cast<float>(denominator);
		}

	private:
		T numerator{ 1 };
		T denominator{ 1 };
	};
}
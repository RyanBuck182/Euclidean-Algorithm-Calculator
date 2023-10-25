/* Euclidean Algorithm Calculator
 * 
 * Uses the Euclidean Algorithm to calculate the greatest common 
 * divisor of two integers then displays the result in the console.
 * 
 * Author: Ryan Buck
 */

/* The MIT License (MIT)
 * © Copyright 2023 Ryan Buck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE. 
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Performs the Euclidean Algorithm, an algorithm which calculates the greatest common divisor of two integers.
// khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm
int EuclideanAlgorithm(int dividend, int divisor) {
	if (divisor == 0) {
		return dividend;
	}
	
	int remainder = dividend % divisor;

	return EuclideanAlgorithm(divisor, remainder);
}

int main() {
	int integer1, integer2, greatestCommonDivisor;

	cout << "This program calculates the greatest common divisor of two integers using the Euclidean Algorithm.\n\n";

	while (true) {
		cout << setw(30) << "Enter an integer: ";
		cin >> integer1;
		cout << setw(30) << "Enter another integer: ";
		cin >> integer2;

		// Using absolute values allows the Euclidean Algorithm to work with negatives.
		greatestCommonDivisor = EuclideanAlgorithm(abs(integer1), abs(integer2));

		cout << "The greatest common divisor of " << integer1 << " and " << integer2 << " is " << greatestCommonDivisor << ".\n\n";
	}
}
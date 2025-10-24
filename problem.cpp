#include <complex>
#include <iostream>

using namespace std;

// //Problem 1
// int power(int x, int y) {
//     if (y == 0) return 1;
//     return x * power(x, y-1);
// }
//
// int main() {
//
//     cout << power(5,2);
//
//     return 0;
// }

// //Problem 2
//
// int inverseOrder(int n) {
//     if (n / 10 == 0) return n;
//     cout << n % 10;
//     return inverseOrder(n / 10);
// }
//
// int main() {
//
//     cout << inverseOrder(1234);
//
//     return 0;
// }

//Problem 4

// bool isPrime(int n, int value) {
//     if (value == 2) return true;
//     if (n % value == 0) return false;
//     return isPrime(n , value -= 1);
// }
//
// int main() {
//
//     int value, n = 20;
//     cout << isPrime(n, value = sqrt(n)) << endl;
//
//     return 0;
// }

// // Problem 5
//
// int countEvenDigits(int n) {
//     if (n == 0) return 0;
//     if ((n % 10) % 2 != 0) return 0 + countEvenDigits(n / 10);
//     if ((n % 10) % 2 == 0) return 1 + countEvenDigits(n / 10);
// }
//
// int main() {
//
//     cout << countEvenDigits(2468) << endl;
//
//     return 0;
// }

// //Problem 6
//
// int productDigits(int n) {
//     if (n == 0) return 1;
//     return (n%10)*productDigits(n/10);
// }
//
// int main() {
//
//     cout << productDigits(505) << endl;
//
//     return 0;
// }

// // Problem 7
//
// bool isPowerOfTwo(int n) {
//     if (n / 2 == 1) return true;
//     if (n % 2 != 0) return false;
//     return isPowerOfTwo(n / 2);
// }
//
// int main() {
//
//     cout << isPowerOfTwo(8) << endl;
//
//     return 0;
// }

// // Problem 10
//
// int power(int x, int y) {
//     if (y == 0) return 1;
//     if (y % 2 == 0) {
//         return power(x, y / 2) * power(x, y / 2);
//     }else {
//         return x * power(x, y - 1);
//     }
// }
//
// int main() {
//
//     cout << power(3, 5);
//
//     return 0;
// }

// // Problem 9
//
// int countZeros(int n) {
//     if (n == 0) return 0;
//     if (n % 10 == 0) return 1 + countZeros(n / 10);
//     return 0 + countZeros(n / 10);
// }
//
// int main() {
//
//     cout << countZeros(1050) << endl;
//
//     return 0;
// }

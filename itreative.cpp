#include <iostream>
#include <chrono>
long long factorial_iterative(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers.");}
         long long result = 1;
         for (int i = 1; i <= n; ++i) {
         result *= i;   }
         return result;}
int main() {
        try {
        int n = 10000;
        // Measure execution time
        auto start_time = std::chrono::high_resolution_clock::now();
        long long result = factorial_iterative(n);
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
        std::cout << "The factorial of " << n << " is: " << result << std::endl;
        std::cout << "Execution time: " << duration.count() << " microseconds" << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;}

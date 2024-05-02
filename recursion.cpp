#include <iostream>
#include <chrono>
long long factorial_recursive(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers."); }
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;}
    // Recursive case: n! = n * (n-1)!
    return n * factorial_recursive(n - 1);
}
int main() {
    try {
        int n = 10000;
        // Measure execution time
        auto start_time = std::chrono::high_resolution_clock::now();
        long long result = factorial_recursive(n);
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
        std::cout << "The factorial of " << n << " is: " << result << std::endl;
        std::cout << "Execution time: " << duration.count() << " microseconds" << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

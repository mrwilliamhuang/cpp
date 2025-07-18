#include <iostream>
#include <cmath>
#include <complex>

// 定义一个类来封装求解一元二次方程的功能
class QuadraticEquationSolver {
public:
    // 构造函数
    QuadraticEquationSolver(double a, double b, double c) : a(a), b(b), c(c) {}

    // 求解一元二次方程的函数
    void solve() {
        // 检查a是否为0，因为一元二次方程在a为0时退化为线性方程
        if (a == 0) {
            std::cerr << "Error: a cannot be 0 for a quadratic equation." << std::endl;
            return;
        }

        // 计算判别式
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            // 有两个不同的实数根
            double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
            std::cout << "方程有两个不同的实数根:" << std::endl;
            std::cout << "x1 = " << root1 << std::endl;
            std::cout << "x2 = " << root2 << std::endl;
        } else if (discriminant == 0) {
            // 有两个相同的实数根
            double root = -b / (2 * a);
            std::cout << "方程有两个相同的实数根:" << std::endl;
            std::cout << "x1 = x2 = " << root << std::endl;
        } else {
            // 有两个复数根
            std::complex<double> realPart(-b / (2 * a), 0);
            std::complex<double> imaginaryPart(0, std::sqrt(-discriminant) / (2 * a));
            std::complex<double> root1 = realPart + imaginaryPart;
            std::complex<double> root2 = realPart - imaginaryPart;
            std::cout << "方程有两个复数根:" << std::endl;
            std::cout << "x1 = " << root1 << std::endl;
            std::cout << "x2 = " << root2 << std::endl;
        }
    }

private:
    double a, b, c;
};

int main() {
    double a = 5;
    double b = 3;
    double c = -1;

    std::cout << "求解方程 " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    QuadraticEquationSolver solver(a, b, c);
    solver.solve();

    return 0;
}
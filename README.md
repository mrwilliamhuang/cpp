# C++ 项目
我是黄诚亮！！！！！
黄诚亮来修改代码了！！！！！！！！
快接受！！！！！！！！！！！！！！！！！！！！！1
本项目包含多个 C++ 程序，下面将详细介绍各个文件的功能、编译和运行方法。

## 项目结构
```plaintext
README.md
hello.cpp
solve_quadratic_equation.cpp
```

## 安装说明

在开始编译和运行程序之前，请确保您的系统上已安装以下工具。

### 安装 g++
`g++` 是 GNU 编译器集合的一部分，可以用来编译 C++ 程序。如果尚未安装，请使用以下命令进行安装：

```bash
sudo apt update
sudo apt install g++
```

### 检查是否安装 make
如果 `make` 未安装，您可以使用以下命令进行安装：

```bash
sudo apt install make
```

## 文件说明

### `hello.cpp`
这是一个简单的 C++ 程序，用于输出 "Hello, World!" 到标准输出。

#### 编译
要编译此程序，请使用以下命令：
```bash
g++ -o hello hello.cpp
```

#### 运行
编译完成后，使用以下命令运行程序：
```bash
./hello
```

### `solve_quadratic_equation.cpp`
这个程序用于求解一元二次方程 ax^2 + bx + c = 0 的根。它能够处理实数根和复数根的情况。

#### 编译
要编译此程序，请使用以下命令：
```bash
g++ -o solve_quadratic_equation solve_quadratic_equation.cpp -lm
```

#### 运行
编译完成后，使用以下命令运行程序：
```bash
./solve_quadratic_equation
```
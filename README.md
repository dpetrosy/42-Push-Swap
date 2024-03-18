<a name="readme-top"></a>
<div align="center">
  <!-- Logo -->
  <a href="https://github.com/dpetrosy/42-Push-Swap">
  <img src="README_files/logo.png" alt="Logo" width="80" height="80">
  </a>

  <!-- Project Name -->
  <h1>Push-Swap Project</h1>

  <!-- Short Description -->
  <p align="center">
	  <b>42 Yerevan Push-Swap</b><br>
	  For further information about 42cursus and its projects, please refer to <a href="https://github.com/dpetrosy/42cursus"><b>42cursus repo</b></a>.
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/dpetrosy/42-Push-Swap?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/dpetrosy/42-Push-Swap?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/dpetrosy/42-Push-Swap?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/dpetrosy/42-Push-Swap?style=for-the-badge" />
  </p>

  <h3>
      <a href="#-about-project">📜 About Project</a>
    <span> · </span>
      <a href="#-supported-specifiers">📑 Supported Specifiers</a>
    <span> · </span>
      <a href="#-usage">👨‍💻 Usage</a>
  </h3>
</div>

---

## 📜 About Project

* This project will make you sort data on a stack, with a limited set of operations, using the lowest possible number of actions.

* The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted.  
You have at your disposal a set of int values, 2 stacks and a set of operations to manipulate both stacks.  

* The goal is to write a program in C called push_swap which calculates and displays on the standard output the operations, that sort the integers received as arguments.

* The learning objectives of this project are rigor, use of C and use of basic algorithms. Especially looking at the complexity of these basic algorithms.

* You are allowed to use the following functions: malloc, free, exit, write, read.

For detailed information, refer to the [**subject of this project**](README_files/printf_subject.pdf).

	🚀 TLDR: Given a set of integers, sort it using a predefined set of operations using
 		 two stacks. The operations list is defined below. This program outputs a program
   		 in push_swap operations that sorts the input integers.

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more then 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.

## 📑 Operations List

The program is only allowed to work with two stacks: stack A and stack B. \
All the numbers are initially added to stack A, and stack B is empty.

The possible operations are:

| Code  | Operations                          | Action                                                 |
|:-----:|:-----------------------------------:|:------------------------------------------------------:|
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |

## 🧮 Algorithm

## 🌟 Bonus Part
* The Bonus exercise was to write a program called 'checker' that can read the operations from stdin and perform them on a stack of numbers.
* Checker will display 'OK' when the given operations will sort the numbers in ascending order. Otherwise it displays 'KO'.
* In case of an error (f.ex. operations doesn't exist) it displays 'Error'.

## 👨‍💻 Usage
### Requirements

The library is written in C language and thus needs the **gcc compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```
and, when compiling your code, add the required flags:

```shell
-lftprintf -L path/to/libftprintf.a -I path/to/ft_printf.h
```

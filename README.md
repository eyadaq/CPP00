# 42 C++ Module 00 (CPP00)

## 📚 Overview

This module is the first step into the C++ world at 42. It introduces fundamental concepts of C++ and emphasizes the differences between C and C++, including:

- The basic syntax of C++
- Namespace usage
- The standard input/output streams
- The differences between `new/delete` and `malloc/free`
- Basic class and instance management
- Member functions and attributes

---

## 🧠 Concepts Covered

- Namespaces
- `std::cout` / `std::cin` / `std::endl`
- Classes and Instances
- Member functions
- Public vs Private attributes
- Constructors and Destructors
- Comparison between C memory management and C++ memory management

---

## 📁 Project Structure

```

CPP00/
├── ex00/
│   ├── Megaphone.cpp
│   └── Makefile
├── ex01/
│   ├── PhoneBook.cpp
│   ├── Contact.cpp
│   ├── PhoneBook.hpp
│   ├── Contact.hpp
│   ├── main.cpp
│   └── Makefile
├── ex02/
│   ├── Account.cpp
│   ├── Account.hpp
│   ├── tests.cpp
│   └── Makefile
...

````

---

## 🧪 Exercises Breakdown

### 🔹 ex00 – Megaphone
A program that takes input arguments and prints them in uppercase to demonstrate simple I/O and string manipulation.

**Compile & Run:**
```bash
cd ex00
make
./megaphone "shhhh... I think the students are asleep..."
````

---

### 🔹 ex01 – PhoneBook

A simple contact management application. Demonstrates basic class usage, encapsulation, and input handling.

**Features:**

* Add contacts
* Search and display contacts
* Input validation

**Compile & Run:**

```bash
cd ex01
make
./phonebook
```

---

### 🔹 ex02 – Account Class

Simulation of a banking system with static class members and logs. Teaches static attributes and method encapsulation.

**Compile & Run:**

```bash
cd ex02
make
./account
```

---

## 🛠️ Compilation

Each exercise comes with a `Makefile`. Simply run:

```bash
make
```

To clean up object files and executables:

```bash
make clean
make fclean
```
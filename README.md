# C++ Object-Oriented Programming (OOP) Programs

This repository contains a collection of basic C++ Object-Oriented Programming (OOP) programs created for learning and practice. The programs demonstrate the fundamental concepts of OOP using simple examples.

## Topics Covered

### Classes and Objects
A **class** is a blueprint that defines the properties and behaviors of an object. An **object** is an instance of a class used to access its data members and member functions.

### Nested Classes
A **nested class** is a class declared inside another class. It helps organize related classes and improves code readability.

### Constructors and Destructors
A **constructor** initializes an object automatically when it is created, while a **destructor** is called automatically when the object is destroyed to perform cleanup tasks.

### Copy Constructor
A **copy constructor** creates a new object by copying the data from an existing object. It is useful when duplicating objects.

### Return by Object
In **return by object**, a function returns an object instead of a primitive data type. This is commonly used to return the result of object operations.

### Pointer to Object
A **pointer to an object** stores the memory address of an object and accesses its members using the `->` operator.

### Distance Between Two Points
This program uses classes to calculate the **Euclidean distance** between two points in the XY-plane using the distance formula.

### Object Comparison
Object comparison is the process of comparing the values of two or more objects to determine which object satisfies a particular condition.

### String Reversal Using Class
This program demonstrates how a class can be used to reverse a string by manipulating its characters and displaying the reversed result.

## Technologies Used
- **C++** – A general-purpose programming language used for developing efficient applications.
- **Object-Oriented Programming (OOP)** – A programming paradigm based on classes and objects that promotes code reusability and modularity.
- **Standard C++ Library** – Provides built-in functions and classes for input/output, strings, mathematics, and other utilities.

## Purpose
The purpose of this repository is to understand and practice the core concepts of Object-Oriented Programming in C++. These programs provide simple and practical examples that help beginners learn class design, object creation, constructors, copy constructors, pointers, and other essential OOP concepts.

# C++ Inheritance Programs

## Introduction
Inheritance is one of the fundamental concepts of Object-Oriented Programming (OOP). It allows a new class (called the derived or child class) to acquire the properties and functions of an existing class (called the base or parent class). This promotes code reusability, reduces duplication, and makes programs easier to maintain.
This repository contains C++ programs demonstrating different types of inheritance, including Single, Multilevel, Multiple, and Hybrid Inheritance. It also includes examples of ambiguity in inheritance, the `this` pointer, and aggregation to help understand the relationships between classes in C++.
## Topics Covered

- Single Inheritance
- Multilevel Inheritance
- Multiple Inheritance
- Hybrid Inheritance
- Ambiguity in Inheritance
- this Pointer
- Aggregation

## Class Diagrams

### Single Inheritance

```
Student
   │
   ▼
Library
```

### Multilevel Inheritance

```
LivingThings
      │
      ▼
    Human
      │
      ▼
   Student
```

### Multiple Inheritance

```
 Room      Gate
   \        /
    \      /
      Fan
```

### Hybrid Inheritance

```
Medical Organization
        │
        ▼
    Hospital
        │
        ▼
Teaching Hospital
        ▲
        │
Education Institute
```

### Aggregation

```
Library
   │
 Has-A
   │
   ▼
 Book
```


# C++ Polymorphism Programs

## Introduction

Polymorphism is one of the fundamental concepts of Object-Oriented Programming (OOP). The word **polymorphism** means **"many forms"**, allowing the same function or object to perform different tasks depending on the context. In C++, polymorphism is mainly achieved using **virtual functions**, **function overriding**, and **virtual destructors**. It improves code flexibility, reusability, and maintainability.

This repository contains simple C++ programs demonstrating runtime polymorphism, virtual inheritance, and virtual destructors.

---
## Topics Covered

### Runtime Polymorphism
Runtime polymorphism allows the same function call to perform different actions depending on the object it points to. It is achieved using **virtual functions** and a **base class pointer**, where the appropriate overridden function is selected during program execution.

---

### Virtual Functions
A virtual function is a member function declared with the `virtual` keyword in the base class. It enables **dynamic binding**, allowing the derived class version of the function to be called through a base class pointer.

---

### Function Overriding
Function overriding occurs when a derived class provides its own implementation of a function that already exists in the base class with the same name and parameters. This allows the derived class to customize the inherited behavior.

---

### Base Class Pointer
A base class pointer can point to objects of both the base class and its derived classes. When used with virtual functions, it enables runtime polymorphism by calling the correct overridden function based on the object's actual type.

---

### Hybrid Inheritance using Virtual Inheritance
Hybrid inheritance is a combination of more than one type of inheritance. Virtual inheritance is used to prevent multiple copies of the same base class when a class inherits through multiple paths, solving the **diamond problem**.

---

### Virtual Destructor
A virtual destructor ensures that when a derived class object is deleted using a base class pointer, the destructors of both the derived and base classes are executed in the correct order. This helps prevent memory leaks and ensures proper resource cleanup.

# C++ Templates – Generic Programming

**Templates (Generic Programming)**. Templates allow us to write reusable code that can work with different data types.

##  Topics Covered

* Function Template
* Template with Different Data Types
* Template Overloading

---

## 1. Function Template

A **function template** is a generic function that can work with different data types.

For example, instead of creating separate functions for adding:

* Two integers
* Two floating-point numbers
* Two double values

we can create one function template and use it for different data types.

### Example

```text
add(10, 20)
```

Output:

```text
30
```

Similarly:

```text
add(5.5, 2.5)
```

Output:

```text
8.0
```

The same function can perform the operation for different data types.

### Basic Syntax

```cpp
template <class T>
T function_name(T value1, T value2)
{
    // statements
}
```

Here, `T` is a generic type that represents the data type used when the function is called.

---

## 2. Template Using Different Data Types

A template can use **multiple template parameters** to work with different data types at the same time.

For example, a function can accept:

* An integer as the first argument
* A string as the second argument

### Example

```text
show(20, "Amardip")
```

Output:

```text
Number: 20
String: Amardip
```

Here:

```text
T1 → int
T2 → string
```

Another example could be:

```text
show(25.5, "Kathmandu")
```

In this case, the first parameter can be a floating-point value while the second parameter is a string.

### Basic Syntax

```cpp
template <class T1, class T2>
void function_name(T1 value1, T2 value2)
{
    // statements
}
```

Using multiple template parameters makes the function more flexible.

---

## 3. Template Overloading

**Template overloading** means defining multiple functions with the same name but different parameter lists.

For example, we can have:

```text
show(T)
```

and:

```text
show(T1, T2)
```

Both functions have the same name, but they accept different numbers of arguments.

### Example

```text
show(2.5)
```

This calls the one-parameter template.

```text
show(5, "Siraha")
```

This calls the two-parameter template.

A normal function can also exist with the same name:

```text
show(int)
```

When:

```text
show(20)
```

is called, the non-template `show(int)` function is generally preferred because it provides an exact non-template match.

---

##  Example of Function Selection

| Function Call       | Suitable Function |
| ------------------- | ----------------- |
| `show(20)`          | `show(int)`       |
| `show(2.5)`         | `show(T)`         |
| `show(5, "Siraha")` | `show(T1, T2)`    |

The compiler determines the appropriate function based on the **number and types of arguments**.

---

##  Key Concepts

### Template

A template allows us to create **generic and reusable code**.

### Function Template

Used to create a generic function that can work with different data types.

### Multiple Template Parameters

Allows a function to accept multiple values having different data types.

### Template Overloading

Allows multiple functions with the same name to work with different parameter lists.

---

##  Advantages of Templates

* **Code Reusability** – The same code can be used for multiple data types.
* **Less Code** – Avoids writing separate functions for each data type.
* **Flexibility** – Functions can work with different types of values.
* **Maintainability** – Changes can be made in one generic function.
* **Generic Programming** – Makes programs more reusable and flexible.

---

##  Learning Objectives

After completing these programs, i will understand:

* What templates are in C++.
* What generic programming means.
* How to create a function template.
* How to use multiple template parameters.
* How template overloading works.
* How C++ selects an appropriate overloaded function.
* The advantages of using templates.

---

## Conclusion

These programs demonstrate the basic concepts of **C++ Templates and Generic Programming**. Function templates allow the same function to work with different data types, while multiple template parameters allow different data types to be handled together. Template overloading further improves flexibility by allowing functions with the same name to perform different operations based on their parameters.

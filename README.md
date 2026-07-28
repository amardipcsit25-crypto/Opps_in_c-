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

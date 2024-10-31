# M+

![alt text](https://github.com/ice-lolly-ai/M/blob/main/file-IdL8sUgnzkxfsTfyiAL4CnZO.jpg)


M+ is a modern, compilable programming language based on TypeScript, designed to offer simplicity, robustness, and high performance. <br><br>
M+ aims to combine the best features from multiple programming languages, including JavaScript, C++, Java, and Python, <br>
while introducing an English-based keyword system for greater readability. It is intended to be both easy for beginners to <br>
learn and powerful enough to handle complex applications.
<br><br>
**History**<br>
Named after my daughter Emmy (we all call her M), M is also short for 'Magic', was first concieved in 2021. <br> After a very very long testing phase, 'M+' came about in 2024. <br><br>
M+ is about creating a programming language that simplifies development without sacrificing performance. <br>
Its design draws heavily from TypeScript and JavaScript, particularly in its use of strong typing and syntax, <br>
while incorporating features from compiled languages like C++ for better performance. The introduction of English-based keywords<br>
makes it distinct, offering a more natural and intuitive way for developers to write code.
<br><br>
Design Philosophy
M+ is designed around the following principles:
<br><br>
**Simplicity**: M+ is built to be easy to learn, using intuitive, English-like keywords for common programming constructs. <br>
This makes it accessible to new developers while retaining the flexibility for advanced usage.<br><br>
**Performance**: The language is compilable, producing optimized machine code for efficient execution. <br>
This allows M+ to be used in both small-scale and high-performance systems.<br><br>
**Robustness**: M+ enforces strong typing and includes comprehensive error handling to reduce runtime <br>
issues and provide greater control over data types and operations.
Features<br><br><br>
M+ integrates features from several established programming languages:

**Readable Syntax**: M+ uses plain English-based keywords for its syntax. For example, `hold` is used for declaring variables, <br>
`method` for defining functions, and `check` for conditionals.<br><br>
**Compilable**: The M+ compiler generates highly optimized machine code to enhance performance, <br>
similar to compiled languages like C and C++.<br><br>
**Strong Typing**: M+ supports strong, static typing wittype inference, allowing both explicit type declarations<br>
and inferred types for flexibility and safety, similar to TypeScript.<br><br>
**Asynchronous Support**: Built-in support for asynchronous programming, using keywords like `defer` <br>
and `fetch` to simplify the management of asynchronous tasks.<br><br>
**Memory Management**: M+ includes automatic memory management through garbage collection, reducing the<br>
burden on developers for manual memory management while maintaining efficient use of resources.<br><br>
**Cross-Platform**: M+ is designed to be cross-platform, able to compile to binaries that run on multiple <br>
operating systems including Windows, macOS, and Linux.
Syntax<br><br><br>
M+ uses a clean and readable syntax that is beginner-friendly while still offering the power expected from<br>
modern programming languages. Below are examples of some basic M+ syntax.

Variable Declaration
```
hold age: number = 25; auto name = "Alice"; // Type inferred as text

method greet(name: text) -> text {

    show("Hello, " + name);

}
```

Function Declaration
```
method greet(name: text) -> text {

    show("Hello, " + name);

}
```

Control Flow
```
check (age > 18) {

    show("You are an adult.");

} otherwise {

    show("You are a minor.");

}
```

Asynchronous Operations
```
defer method fetchData(url: text) -> map {

    hold response = fetch http.get(url);

    return response.data;

}
```

Error Handling
```
attempt {

    hold result = divide(10, 0);

    show(result);

} rescue (e) {

    show("Error: Division by zero.");

} finally {

    show("Operation complete.");

}

```
Tooling and Compilation
M+ is supported by a command-line compiler that translates M+ code into optimized machine code, <br>
allowing programs to run efficiently on various platforms. <br><br>
The compilation process also includes robust error checking, helping developers catch issues early.


To compile a basic M+ program:mplusc hello.mplus -o hello.exe The M+ compiler is cross-platform and <br> can produce executables for Windows, macOS, and Linux.

Applications
M+ is versatile and can be used for a wide range of applications, <br>
from web development and mobile apps to system-level programming and enterprise solutions. <br>
Its simple syntax and strong typing make it suitable for educational purposes, while its performance characteristics <br>
allow it to scale to more complex use cases, including backend services, game development, and high-performance computing.

Future Development
Future releases of M+ are expected to introduce support for additional features such as generics, higher-order functions,<br>
and extended library support. The goal is to evolve M+ into a fully-featured modern language while <br>
maintaining its core philosophy of simplicity and power.
<br><br>
# M+ Language Documentation

## Table of Contents
1. [Basic Syntax and Structure](#basic-syntax-and-structure)
    - [Variables and Data Types](#variables-and-data-types)
    - [Constants](#constants)
    - [Functions and Methods](#functions-and-methods)
2. [Control Flow](#control-flow)
    - [Conditional Statements](#conditional-statements)
    - [Loops](#loops)
    - [Switch/Match Cases](#switchmatch-cases)
3. [Error Handling](#error-handling)
4. [Data Structures](#data-structures)
    - [Lists (Arrays)](#lists-arrays)
    - [Maps (Dictionaries)](#maps-dictionaries)
    - [Tuples](#tuples)
5. [Object-Oriented Programming](#object-oriented-programming)
    - [Classes](#classes)
    - [Inheritance](#inheritance)
    - [Interfaces](#interfaces)
6. [Functions](#functions)
    - [Lambda Expressions](#lambda-expressions)
    - [Recursion](#recursion)
    - [Higher-Order Functions](#higher-order-functions)
7. [Asynchronous Programming](#asynchronous-programming)
8. [Modules and Imports](#modules-and-imports)
9. [Built-In Libraries](#built-in-libraries)
10. [Compiler Usage](#compiler-usage)
    - [How to Compile and Run M+ Code](#how-to-compile-and-run-m-code)

---

## 1. Basic Syntax and Structure

### 1.1 Variables and Data Types
M+ supports both type-inferred variables and explicitly typed variables. M+ uses the `hold` keyword to declare variables.

#### Data Types:
- `number`: For integers and floating-point numbers.
- `text`: String data type.
- `bool`: Boolean data type (`true` and `false`).
- `list`: Arrays/lists of values.
- `map`: Key-value pairs.
- `auto`: Automatically infers the type.

#### Example:

```
hold age: number = 25;
hold name: text = "Alice";
hold isStudent: bool = true;
hold numbers: list = [1, 2, 3, 4];
auto height = 5.9;  // Type inferred as number
```

### 1.2 Constants
Use `const` to declare a constant value that cannot be changed after initialization.
```
const PI: number = 3.1415;
const greeting: text = "Hello, world!";
```

### 1.3 Functions and Methods
```
Functions are declared using the `method` keyword in M+. They can take parameters and return values.
Example:

method add(x: number, y: number) -> number {
    return x + y;
}

method greet(name: text) -> text {
    return "Hello, " + name;
}
```

### 2. Control Flow
### 2.1 Conditional Statements
M+ uses `check` for `if` statements and `otherwise` for `else`.
```
check (age > 18) {
    show("You are an adult.");
} otherwise {
    show("You are a minor.");
}
```

### 2.2 Loops
Loops can be written using iterate for for loops.
```

iterate i from 0 to 10 {
    show(i);
}
```
Alternatively, M+ provides a while loop for indefinite looping:
```
hold counter = 0;
while (counter < 5) {
    show(counter);
    counter += 1;
}
```
### 2.3 Switch/Match Cases
M+ also allows for switch or match-like constructs.
```
check (fruit) {
    case "apple":
        show("You selected an apple.");
    case "orange":
        show("You selected an orange.");
    otherwise:
        show("Unknown fruit.");
}
```

### 3. Error Handling
M+ provides structured error handling using attempt and rescue.
```

attempt {
    hold result = divide(10, 0);
    show(result);
} rescue (e) {
    show("Error: Division by zero.");
} finally {
    show("Operation complete.");
}
```
### 4. Data Structures
### 4.1 Lists (Arrays)

Lists are used to store ordered collections of items.
```

hold myList: list = [1, 2, 3, 4, 5];
show(myList[0]);  // Access first element
```
### 4.2 Maps (Dictionaries)
Maps store key-value pairs.
```
hold myMap: map = {"name": "Alice", "age": 25};
show(myMap["name"]);  // Outputs: Alice
```

### 4.3 Tuples
M+ supports tuples, which are immutable collections of items.
```

hold myTuple = (1, "Alice", true);
```

## 5. Object-Oriented Programming
### 5.1 Classes
M+ supports class-based object-oriented programming. Classes are defined using the class keyword.
```
class Person {
    hold name: text;
    hold age: number;

    method init(name: text, age: number) {
        self.name = name;
        self.age = age;
    }

    method greet() -> text {
        return "Hello, my name is " + self.name;
    }
}
```

### 5.2 Inheritance
M+ allows for inheritance using the inherit keyword.
```
class Employee inherit Person {
    hold position: text;

    method init(name: text, age: number, position: text) {
        super.init(name, age);
        self.position = position;
    }

    method work() -> text {
        return self.name + " is working as a " + self.position;
    }
}
```

### 5.3 Interfaces
Interfaces define a contract for classes.
```
interface Drawable {
    method draw();
}

class Circle inherit Drawable {
    method draw() {
        show("Drawing a circle.");
    }
}
```

##  6. Functions
### 6.1 Lambda Expressions
M+ supports anonymous functions (lambdas).
```
hold square = (x: number) -> number {
    return x * x;
};
show(square(5));  // Outputs: 25
yaml
```

# M+ Keywords and Methods Explained

The M+ language uses several intuitive, English-based keywords to provide readability and ease of use. Below is an explanation of each core keyword in M+ and its purpose.

## `hold`
The `hold` keyword is used to declare variables. It can declare a variable with an explicit type or allow type inference.

#### Syntax:
```
hold variableName: Type = value;

hold age: number = 25;
auto name = "Alice";  // Type inferred as text
```

## `const`
The const keyword declares a constant that cannot be changed once initialized.

#### Syntax:
```
const constantName: Type = value;

const PI: number = 3.1415;
```

## `method`
The method keyword defines a function or method, specifying its parameters and return type.

#### Syntax:
```
method functionName(parameter: Type) -> returnType {
    // Function body
}

method add(x: number, y: number) -> number {
    return x + y;
}
```
## `check`
The check keyword initiates a conditional statement, similar to if in other languages. It evaluates a condition and executes code if the condition is true.

#### Syntax:
```
check (condition) {
    // Code to execute if condition is true
}

check (age > 18) {
    show("You are an adult.");
}
```

## `otherwise`
The otherwise keyword works in conjunction with check as the equivalent of else. It provides an alternative block of code if the initial condition in check is false.

#### Syntax:
```
check (condition) {
    // Code if condition is true
} otherwise {
    // Code if condition is false
}

check (age > 18) {
    show("You are an adult.");
} otherwise {
    show("You are a minor.");
}

```
## `iterate`
The iterate keyword creates a for loop, allowing iteration over a range of values.

#### Syntax:
```
iterate variable from start to end {
    // Code to execute in each iteration
}

iterate i from 0 to 10 {
    show(i);
}
```

## `while`
The while keyword creates a loop that runs as long as a specified condition is true.
```
while (condition) {
    // Code to execute while condition is true
}

hold counter = 0;
while (counter < 5) {
    show(counter);
    counter += 1;
}
```

## `attempt`
The attempt keyword is used to start a block of code where errors may occur. It’s similar to a try block in other languages.

#### Syntax:
```
attempt {
    // Code to attempt that might throw an error
}

attempt {
    hold result = divide(10, 0);
}

```
## `rescue`
The rescue keyword follows attempt and handles any errors that occur in the attempt block.

####  Syntax:
```
attempt {
    // Code that might throw an error
} rescue (errorVariable) {
    // Code to handle the error
}

attempt {
    hold result = divide(10, 0);
} rescue (e) {
    show("Error: Division by zero.");
}
```
## `finally`
The finally keyword defines a block that always executes after attempt and rescue, regardless of whether an error occurred.

#### Syntax:
```
attempt {
    // Code that might throw an error
} rescue (errorVariable) {
    // Code to handle the error
} finally {
    // Code that always runs after attempt/rescue
}

attempt {
    hold result = divide(10, 0);
} rescue (e) {
    show("Error: Division by zero.");
} finally {
    show("Operation complete.");
}
```

## `defer`
The defer keyword is used to define an asynchronous function that may perform non-blocking operations.

#### Syntax:
```
defer method asyncFunctionName(parameter: Type) -> returnType {
    // Code for asynchronous task
}

defer method fetchData(url: text) -> map {
    hold response = fetch http.get(url);
    return response.data;
}
```

## `fetch`
The fetch keyword is used in conjunction with asynchronous operations to handle data retrieval or asynchronous tasks.

#### Syntax:
```
hold data = fetch asyncFunction();

defer method loadData() -> map {
    hold response = fetch http.get("https://api.example.com");
    return response.data;
}
```
## `import`
The import keyword allows for the inclusion of other modules or libraries in the code.

#### Syntax:
```
import "moduleName";

import "mathLibrary";

method main() {
    hold result = mathLibrary.square(5);
    show(result);
}
```



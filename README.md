# M+

M+ is a modern, compilable programming language based on TypeScript, designed to offer simplicity, robustness, and high performance. 
M+ aims to combine the best features from multiple programming languages, including JavaScript, C++, Java, and Python, while introducing an English-based keyword system for greater readability. It is intended to be both easy for beginners to learn and powerful enough to handle complex applications.

History
M+ was developed in 2024 with the goal of creating a programming language that simplifies development without sacrificing performance. Its design draws heavily from TypeScript and JavaScript, particularly in its use of strong typing and syntax, while incorporating features from compiled languages like C++ for better performance. The introduction of English-based keywords makes it distinct, offering a more natural and intuitive way for developers to write code.

Design Philosophy
M+ is designed around the following principles:

**Simplicity**: M+ is built to be easy to learn, using intuitive, English-like keywords for common programming constructs. This makes it accessible to new developers while retaining the flexibility for advanced usage.
**Performance**: The language is compilable, producing optimized machine code for efficient execution. This allows M+ to be used in both small-scale and high-performance systems.
**Robustness**: M+ enforces strong typing and includes comprehensive error handling to reduce runtime issues and provide greater control over data types and operations.
Features
M+ integrates features from several established programming languages:

**Readable Syntax**: M+ uses plain English-based keywords for its syntax. For example, `hold` is used for declaring variables, `method` for defining functions, and `check` for conditionals.
**Compilable**: The M+ compiler generates highly optimized machine code to enhance performance, similar to compiled languages like C and C++.
**Strong Typing**: M+ supports strong, static typing wittype inference, allowing both explicit type declarations and inferred types for flexibility and safety, similar to TypeScript.
**Asynchronous Support**: Built-in support for asynchronous programming, using keywords like `defer` and `fetch` to simplify the management of asynchronous tasks.
**Memory Management**: M+ includes automatic memory management through garbage collection, reducing the burden on developers for manual memory management while maintaining efficient use of resources.
**Cross-Platform**: M+ is designed to be cross-platform, able to compile to binaries that run on multiple operating systems including Windows, macOS, and Linux.
Syntax
M+ uses a clean and readable syntax that is beginner-friendly while still offering the power expected from modern programming languages. Below are examples of some basic M+ syntax.

Variable Declaration
```mplus hold age: number = 25; auto name = "Alice"; // Type inferred as text


method greet(name: text) -> text {

    show("Hello, " + name);

}

Function Declaration
method greet(name: text) -> text {

    show("Hello, " + name);

}

Control Flow
check (age > 18) {

    show("You are an adult.");

} otherwise {

    show("You are a minor.");

}

Asynchronous Operations
defer method fetchData(url: text) -> map {

    hold response = fetch http.get(url);

    return response.data;

}

Error Handling
attempt {

    hold result = divide(10, 0);

    show(result);

} rescue (e) {

    show("Error: Division by zero.");

} finally {

    show("Operation complete.");

}

Tooling and Compilation
M+ is supported by a command-line compiler that translates M+ code into optimized machine code, allowing programs to run efficiently on various platforms. The compilation process also includes robust error checking, helping developers catch issues early.


To compile a basic M+ program:mplusc hello.mplus -o hello.exe The M+ compiler is cross-platform and can produce executables for Windows, macOS, and Linux.

Applications
M+ is versatile and can be used for a wide range of applications, from web development and mobile apps to system-level programming and enterprise solutions. Its simple syntax and strong typing make it suitable for educational purposes, while its performance characteristics allow it to scale to more complex use cases, including backend services, game development, and high-performance computing.

Future Development
Future releases of M+ are expected to introduce support for additional features such as generics, higher-order functions, and extended library support. The goal is to evolve M+ into a fully-featured modern language while maintaining its core philosophy of simplicity and power.

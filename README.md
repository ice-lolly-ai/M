# M+

![alt text](https://files.oaiusercontent.com/file-dnMbN8cZI21vtXyxwbjPE9Uv?se=2024-10-28T14%3A09%3A28Z&sp=r&sv=2024-08-04&sr=b&rscc=max-age%3D604800%2C%20immutable%2C%20private&rscd=attachment%3B%20filename%3D9139883a-06ca-4318-bb5d-6c7d6cb091f5.webp&sig=1s0ebkRG43HWa8vVptAHuFQfFnEnTLrDgKgdPJkD89U%3D)


Named after my daughter Emmy (we all call her M), M is also short for 'Magic', <br>
is a modern, compilable programming language based on TypeScript, designed to offer simplicity, robustness, and high performance. <br><br>
M+ aims to combine the best features from multiple programming languages, including JavaScript, C++, Java, and Python, <br>
while introducing an English-based keyword system for greater readability. It is intended to be both easy for beginners to <br>
learn and powerful enough to handle complex applications.
<br><br>
History
M+ was developed in 2024 with the goal of creating a programming language that simplifies development without sacrificing performance. <br>
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
burden on developers for manual memory management while maintaining efficient use of resources.<br>
**Cross-Platform**: M+ is designed to be cross-platform, able to compile to binaries that run on multiple <br>
operating systems including Windows, macOS, and Linux.
Syntax<br><br><br>
M+ uses a clean and readable syntax that is beginner-friendly while still offering the power expected from<br>
modern programming languages. Below are examples of some basic M+ syntax.

Variable Declaration
```mplus hold age: number = 25; auto name = "Alice"; // Type inferred as text


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
M+ is supported by a command-line compiler that translates M+ code into optimized machine code, allowing programs to run efficiently on various platforms. The compilation process also includes robust error checking, helping developers catch issues early.


To compile a basic M+ program:mplusc hello.mplus -o hello.exe The M+ compiler is cross-platform and can produce executables for Windows, macOS, and Linux.

Applications
M+ is versatile and can be used for a wide range of applications, from web development and mobile apps to system-level programming and enterprise solutions. Its simple syntax and strong typing make it suitable for educational purposes, while its performance characteristics allow it to scale to more complex use cases, including backend services, game development, and high-performance computing.

Future Development
Future releases of M+ are expected to introduce support for additional features such as generics, higher-order functions, and extended library support. The goal is to evolve M+ into a fully-featured modern language while maintaining its core philosophy of simplicity and power.

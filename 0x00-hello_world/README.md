# 0x00. C - Hello, World 🖥️

Welcome to the **C - Hello, World** project! This repository contains a set of C programming tasks designed to sharpen your skills and explore various aspects of the C language. Each task has a specific objective and detailed instructions for completion. Let's dive into some essential concepts to get you started! 🚀

## General

### Why C Programming is Awesome

C programming is awesome because it offers low-level control over hardware and memory, making it exceptionally efficient for systems programming, embedded systems, and developing high-performance software. It provides a solid foundation for understanding how computers work at a fundamental level.

### Who Invented C

C was invented by Dennis Ritchie at Bell Labs in the early 1970s. Dennis Ritchie's work on C revolutionized the field of programming and had a profound impact on the development of the Unix operating system.

### Key Figures

- **Dennis Ritchie**: Dennis Ritchie was a computer scientist known for co-inventing the C programming language and making significant contributions to the Unix operating system. His work laid the foundation for modern computing.

- **Brian Kernighan**: Brian Kernighan is another notable computer scientist who co-authored the influential book "The C Programming Language" with Dennis Ritchie. This book introduced C to a wider audience and is often referred to as K&R C (Kernighan and Ritchie C).

- **Linus Torvalds**: Linus Torvalds, while not directly related to the creation of C, is a prominent figure in the open-source community. He is best known for creating the Linux kernel, which is often developed in C and has become a cornerstone of modern computing.

### What Happens When You Type `gcc main.c`

When you type `gcc main.c`, you are invoking the GNU Compiler Collection (GCC) to compile the C source code file `main.c` into an executable program. The process involves several steps, including preprocessing, compiling, assembling, and linking. By default, the output file will be named `a.out`, which can be executed in your terminal.

### Entry Point and `main`

In C, the `main` function serves as the entry point of a program. It is the first function that gets executed when you run your C program. The `main` function typically returns an exit status, which is a numerical value indicating the program's termination status (0 usually indicates success, while other values represent errors or specific conditions).

### Printing Text

In C, you can print text using different functions:
- `printf`: This function provides extensive formatting options for displaying text and variables. It is a versatile choice for complex output formatting.
- `puts`: Use this function to print a string followed by a newline character. It's a convenient way to print simple text.
- `putchar`: This function prints a single character to the standard output.

### Getting Type Size

You can determine the size of a specific data type in C using the unary operator `sizeof`. For example, `sizeof(int)` will give you the size (in bytes) of an integer on your system.

### Compiling Using GCC

To compile a C program using GCC, you typically use the following command:

```bash
gcc source.c -o output
```

This command compiles the `source.c` file into an executable program named `output`.

### Default Program Name with GCC

By default, when compiling with GCC, the resulting executable is named `a.out`. You can specify a different output name using the `-o` option, as shown in the previous command.

### Official C Coding Style and Betty-Style

The official C coding style often refers to a set of conventions and guidelines known as "coding standards" or "style guides." These guidelines help maintain code consistency and readability. A popular tool for checking C code against a specific style guide, such as the Linux kernel's coding style, is `betty-style`. It helps ensure your code adheres to the prescribed conventions.

### Finding the Right Header for Standard Library Functions

To find the correct header to include in your C source code when using a standard library function, you can consult the C Standard Library documentation or relevant documentation for your C development environment. The header files provide declarations for functions, constants, and types, allowing your code to use these library features correctly.

### Main Function and Return Value

The `main` function plays a crucial role in influencing the return value of a C program. The value you return from the `main` function determines the program's exit status. By convention, a return value of 0 indicates a successful execution, while non-zero values often indicate specific errors or conditions. The exit status can be useful for scripting and automation, as it allows other programs or scripts to determine whether your C program ran successfully.

Task List
0️⃣ Preprocess C File
Objective: Write a script that runs a C file through the preprocessor and saves the result into another file.

Instructions:

Set the C file name to the value stored in the variable $CFILE.
Save the preprocessed output in a file named c.
Hint: You can use the gcc compiler with the -E option to perform preprocessing.

1️⃣ Compile C File (No Linking)
Objective: Write a script that compiles a C file without linking.

Instructions:

Set the C file name to the value stored in the variable $CFILE.
Generate the output file by replacing the .c extension with .o. Example: If the C file is main.c, the output file should be main.o.
Hint: Use the gcc compiler with the -c option to compile without linking.

2️⃣ Generate Assembly Code
Objective: Write a script that generates the assembly code of a C file and saves it in an output file.

Instructions:

Set the C file name to the value stored in the variable $CFILE.
Generate the output file by replacing the .c extension with .s. Example: If the C file is main.c, the output file should be main.s.
Hint: You can use the gcc compiler with the -S option to generate assembly code.

3️⃣ Compile and Create Executable
Objective: Write a script that compiles a C file and creates an executable named "cisfun".

Instructions:

Set the C file name to the value stored in the variable $CFILE.
Create the executable named "cisfun".
Hint: Use the gcc compiler without any additional options to compile and link.

4️⃣ Print String
Objective: Write a C program that prints "Programming is like building a multilingual puzzle" followed by a new line.

Instructions:

Use the puts function to print the string.
Ensure the program ends with the value 0.
Hint: You can use the puts function to print a string followed by a newline character.

5️⃣ Print with Proper Grammar
Objective: Write a C program that prints "with proper grammar, but the outcome is a piece of art," followed by a new line.

Instructions:

Use the printf function to print the string.
Ensure the program returns 0.
Compile the program without warnings using the -Wall gcc option.
Hint: You can use the printf function with proper formatting to print the desired string.

6️⃣ Print Size of Types
Objective: Write a C program that prints the size of various types on the computer it is compiled and run on.

Instructions:

Your program should produce the same output as the example provided.
Warnings are allowed.
Ensure the program returns 0.
Note: You might need to install the package libc6-dev-i386 on Linux to test the -m32 gcc option.
Hint: You can use the sizeof operator to determine the size of various types in C.

7️⃣ Generate Assembly Code (Intel Syntax)
Objective: Write a script that generates the assembly code (Intel syntax) of a C file and saves it in an output file.

Instructions:

Set the C file name to the value stored in the variable $CFILE.
Generate the output file by replacing the .c extension with .s. Example: If the C file is main.c, the output file should be main.s.
Hint: You can use the gcc compiler with the -S option and specify the Intel syntax using the -masm=intel option.

8️⃣ Print Art to Standard Error
Objective: Write a C program that prints "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

Instructions:

Do not use any functions listed in the NAME section of the man (3) printf or man (3) puts.
Ensure the program returns 1.
Compile the program without any warnings using the -Wall gcc option.
Hint: You can use the write function to print to the standard error file descriptor (stderr). Don't forget to include the necessary headers.

Thank you for exploring our project and reviewing the README and the tasks provided. We believe these hints will assist you in completing the tasks successfully. If you have any questions or require further assistance, please don't hesitate to reach out. We wish you success in completing the tasks and hope they contribute to your growth as a developer. 🖥️📚

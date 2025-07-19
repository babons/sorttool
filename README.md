# SortTool

A command-line utility written in C to read, store, and sort user-input lines. Supports sorting alphabetically (case-insensitive) or by line length and includes a simple text-based menu for interaction.  

## Features
- Read and store user input lines.  
- Sort lines alphabetically or by length.  
- Simple CLI menu for input, sorting, and displaying results.  
- Manual memory management using a statically allocated buffer.  

## Build Instructions
Compile with GCC:  
```bash
gcc -o sorttool main.c io.c sort.c

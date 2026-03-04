# Social Network Connection Finder (C++)

## Project Overview
This is a **Data-Driven** C++ application that models a social network as a **Graph**. It allows users to find the "Degrees of Separation" between any two individuals in the network using the **Breadth-First Search (BFS)** algorithm.

## Features
- **File Handling:** Loads social network connections dynamically from an external `names.txt` file.
- **Efficient Search:** Implements BFS to guarantee the shortest path between users.
- **Dynamic Mapping:** Uses STL `std::map` and `std::vector` for efficient graph storage (Adjacency List).

## Why This Project?
It demonstrates the practical application of Graph theory in social media analysis, proving proficiency in both algorithmic logic and C++ file system operations.

## How to use:
1. Ensure `names.txt` is in the same directory.
2. Compile: `g++ project.cpp -o connection_finder`
3. Run: `./connection_finder`
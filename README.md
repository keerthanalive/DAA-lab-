# Design and Analysis of Algorithms Lab

A collection of C++ implementations of classic algorithms and data structures, organized by topic. The examples are intended for learning and lab practice.

## Contents

- [`backtracking/`](backtracking/) — N-Queens
- [`divide_and_conquer/`](divide_and_conquer/) — Integer multiplication
- [`dynamic_programming/`](dynamic_programming/) — 0/1 Knapsack, Longest Common Subsequence, and Sequence Alignment
- [`graphs/`](graphs/) — Graph traversal, shortest paths, and minimum spanning trees
- [`sorting/`](sorting/) — Heap Sort, Insertion Sort, Merge Sort, and Quick Sort
- [`trees/`](trees/) — Binary trees, binary search trees, and tree traversals

## Build and run

Each `.cpp` file is a standalone program. With a C++ compiler such as `g++`, compile and run an example from the repository root:

```bash
g++ -std=c++17 -Wall -Wextra -o example sorting/MergeSort.cpp
./example
```

Replace `sorting/MergeSort.cpp` with the source file you want to try. Some programs may expect input; check the source code for the required format.

## Requirements

- A C++ compiler that supports C++17 (for example, GCC or Clang)

## Contributing

Feel free to open an issue or submit a pull request with improvements, additional algorithm examples, or corrections.

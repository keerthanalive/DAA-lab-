# Design and Analysis of Algorithms Lab

A collection of C++ implementations for classic algorithmic problems organized by topic.

## Repository structure

- `backtracking/` — N-Queens implementation
- `divide_and_conquer/` — Integer multiplication implementation
- `dynamic_programming/` — 0/1 Knapsack, Longest Common Subsequence, and Sequence Alignment
- `graphs/` — Graph traversal, shortest path, and minimum spanning tree algorithms
- `greedy/` — Fractional Knapsack and Huffman Coding
- `sorting/` — Heap Sort, Insertion Sort, Merge Sort, and Quick Sort
- `trees/` — Binary tree, binary search tree, and traversal implementations

## Included examples

### Backtracking
- `backtracking/Nqueens.cpp`

### Divide and Conquer
- `divide_and_conquer/IntegerMultiplication.cpp`

### Dynamic Programming
- `dynamic_programming/Knapsack01.cpp`
- `dynamic_programming/LongestCommonSubsequence.cpp`
- `dynamic_programming/SequenceAlignment.cpp`

### Greedy
- `greedy/fractionalknapsack.cpp`
- `greedy/huffman.cpp`

### Graphs
- `graphs/traversal/BFS.cpp`
- `graphs/traversal/DFS.cpp`
- `graphs/shortest_path/Dijkstra.cpp`
- `graphs/shortest_path/BellmanFord.cpp`
- `graphs/shortest_path/FloydWarshall.cpp`
- `graphs/minimum_spanning_tree/PrimsAlgorithm.cpp`
- `graphs/minimum_spanning_tree/KruskalsAlgorithm.cpp`

### Sorting
- `sorting/HeapSort.cpp`
- `sorting/InsertionSort.cpp`
- `sorting/MergeSort.cpp`
- `sorting/QuickSort.cpp`

### Trees
- `trees/BinaryTree.cpp`
- `trees/BinarySearchTree.cpp`
- `trees/InOrderTraversal.cpp`
- `trees/PreOrderTraversal.cpp`
- `trees/PostOrderTraversal.cpp`

## How to run

Each file is a standalone C++ program. From the repository root, compile with:

```bash
g++ -std=c++17 -Wall -Wextra -o program path/to/file.cpp
./program
```

Example:

```bash
g++ -std=c++17 -Wall -Wextra -o merge sorting/MergeSort.cpp
./merge
```

## Requirements

- C++ compiler supporting C++17 (for example GCC or Clang)

## Notes

- Some programs expect user input while running.

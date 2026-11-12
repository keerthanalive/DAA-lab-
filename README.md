# Design and Analysis of Algorithms Lab

A collection of C++ implementations for classic algorithmic problems organized by topic.

## Repository structure

- `backtracking/` — N-Queens implementations
- `divide_and_conquer/` — Integer multiplication implementations
- `dynamic_programming/` — 0/1 Knapsack, LCS, and Sequence Alignment implementations
- `graphs/` — Graph traversal, shortest path, and MST algorithms
- `greedy/` — Fractional Knapsack and Huffman Coding implementations
- `sorting/` — Heap Sort, Insertion Sort, Merge Sort, and Quick Sort implementations
- `trees/` — Binary tree and traversal implementations

## Included examples

### Backtracking
- `backtracking/NQueens.cpp`
- `backtracking/Nqueens.cpp`

### Divide and Conquer
- `divide_and_conquer/IntegerMultiplication.cpp`
- `divide_and_conquer/integermultiplication.cpp`

### Dynamic Programming
- `dynamic_programming/Knapsack01.cpp`
- `dynamic_programming/knapsack.cpp`
- `dynamic_programming/LCS.cpp`
- `dynamic_programming/LongestCommonSubsequence.cpp`
- `dynamic_programming/SequenceAlignment.cpp`
- `dynamic_programming/sequencealigment.cpp`

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
- The repository includes multiple versions of the same algorithm with different filename casing for lab practice and experimentation.

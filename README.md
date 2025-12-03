# 📚 Data Structures & Algorithms

![Language](https://img.shields.io/badge/language-C-blue) ![License](https://img.shields.io/badge/license-MIT-green) ![Status](https://img.shields.io/badge/status-Active-success)

This repository contains clean, optimized, and well-documented implementations of fundamental Data Structures and Algorithms in **C**.

The goal of this project is to understand the "under the hood" logic of these structures using C's low-level memory management capabilities (pointers, struct, malloc/free) and to serve as a resource for technical interview preparation.

## 🚀 Table of Contents

- [Data Structures](#-data-structures)
- [Algorithms](#-algorithms)
- [Complexity Analysis (Big O)](#-complexity-analysis-big-o)
- [Setup & Usage](#-setup--usage)

---

## 🏗 Data Structures

Implementations of essential data structures built from scratch:

| Data Structure | Description | Path |
| :--- | :--- | :--- |
| **Linked List** | Singly and Doubly Linked List implementations using pointers and dynamic memory allocation. | `src/linked-list` |
| **Stack & Queue** | Array and Linked List based implementations of LIFO and FIFO structures. | `src/stack-queue` |
| **Trees** | Binary Search Tree (BST), AVL Tree, and Tree Traversal methods. | `src/trees` |
| **Hash Maps** | Custom hash map implementation with collision handling using arrays of linked lists (chaining). | `src/hashing` |
| **Graphs** | Graph representations (Adjacency Matrix/List) and traversals (BFS, DFS). | `src/graphs` |

> **Note:** Each directory contains a brief explanation of how the specific structure works.

---

## ⚡ Algorithms

Solutions to common algorithmic problems and optimization techniques:

* **Sorting:** Bubble Sort, Merge Sort, Quick Sort, Heap Sort.
* **Searching:** Binary Search, Linear Search.
* **Graph Algorithms:** Dijkstra, Prim's, Kruskal's.

---

## 📊 Complexity Analysis (Big O)

Time and Space complexity analysis for operations are included in the code comments. Here is a quick overview:

| Operation | Array | Linked List | BST (Avg) | Hash Table |
| :--- | :---: | :---: | :---: | :---: |
| **Access** | $O(1)$ | $O(n)$ | $O(\log n)$ | $O(1)$ |
| **Search** | $O(n)$ | $O(n)$ | $O(\log n)$ | $O(1)$ |
| **Insertion** | $O(n)$ | $O(1)$ | $O(\log n)$ | $O(1)$ |
| **Deletion** | $O(n)$ | $O(1)$ | $O(\log n)$ | $O(1)$ |

---

## 💻 Setup & Usage

To run this project locally, you will need a C compiler (like GCC).

1. **Clone the repository:**
   ```bash
   git clone https://github.com/MehmetDr/Data-Structures-in-C.git

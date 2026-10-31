# 💻 Computer Science & Software Engineering Codebase

[![C](https://img.shields.io/badge/Language-C11-00599C?logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Python](https://img.shields.io/badge/Language-Python%203.10+-3776AB?logo=python&logoColor=white)](https://www.python.org/)
[![Flask](https://img.shields.io/badge/Framework-Flask-000000?logo=flask&logoColor=white)](https://flask.palletsprojects.com/)
[![Web Dev](https://img.shields.io/badge/Frontend-HTML5%20%7C%20CSS3%20%7C%20JS-E34F26?logo=html5&logoColor=white)](https://developer.mozilla.org/)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://github.com/arnav537/arnav)

A comprehensive, production-grade repository covering computer science fundamentals, systems programming, object-oriented software engineering, data structures & algorithms (DSA), modern Python scripting, and full-stack web applications.

---

## 📌 Table of Contents

- [Architectural Overview](#-architectural-overview)
- [Module Breakdown](#-module-breakdown)
  - [1. Procedural Systems Programming (C)](#1-procedural-systems-programming-c)
  - [2. Object-Oriented Software Design (C++)](#2-object-oriented-software-design-c)
  - [3. Data Structures & Algorithms (DSA)](#3-data-structures--algorithms-dsa)
  - [4. Python & Backend Web Architecture](#4-python--backend-web-architecture)
  - [5. Full-Stack Web Development](#5-full-stack-web-development)
- [DSA Complexity Reference](#-dsa-complexity-reference)
- [Getting Started & Build Guide](#-getting-started--build-guide)
  - [Prerequisites](#prerequisites)
  - [Compiling C & C++ Programs](#compiling-c--c-programs)
  - [Running Python & Flask Services](#running-python--flask-services)
- [Software Engineering Best Practices](#-software-engineering-best-practices)
- [Author & License](#-author--license)

---

## 🏛️ Architectural Overview

```
Codes/
├── C/                  # 78 C modules: Memory management, pointers, string parsing, sorting
├── C++/                # 86 C++ modules: OOP, polymorphism, operator overloading, templates, STL
├── DSA/                # 33 DSA implementations: Trees, lists, heaps, binary search patterns
├── Python/             # 47 Python modules & 10 Flask micro-projects
│   └── flask/          # Modular Flask architecture: APIs, templates, forms, static serving
├── Web Dev/            # 139 Frontend modules & dynamic Flask website
│   └── website/        # Multi-page responsive Flask web application
├── .gitignore          # Build, OS, and virtualenv exclusions
└── README.md           # Engineering documentation
```

---

## 📦 Module Breakdown

### 1. Procedural Systems Programming (`C/`)
Covers foundational procedural programming, manual memory management (`malloc`, `calloc`, `realloc`, `free`), pointer arithmetic, and algorithmic logic across 78 focused modules:

| Topic Area | Sample Implementations | Description |
|:---|:---|:---|
| **Pointers & Memory** | `a49_dynamic_array.c`, `a53_palaandrome_with_pointer.c` | Dynamic heap allocation, pointer dereferencing, pointer arithmetic. |
| **String Operations** | `a34_use_of_strcmp.c`, `a38_find_vowel_consonent_string.c` | Null-terminated string parsing, ASCII manipulation, custom search. |
| **Sorting & Search** | `a55_bubble_sort.c`, `a56_selection_sort.c` | Array partitioning, in-place sorting routines, binary search. |
| **Mathematical Algorithms** | `a20_prime_between_two_no.c`, `a33_prime_check.c`, `a40_armstrong_no.c` | Number theory, recursion, digit factorizations. |
| **Matrices & Arrays** | `a44_matrix_multiplication.c`, `a42_transpose_of_matrix.c` | Multi-dimensional memory buffers, 2D matrix transformations. |

### 2. Object-Oriented Software Design (`C++/`)
86 modules demonstrating modern C++ design patterns, OOP principles, and clean class architectures:

- **Encapsulation & Constructors**: Parameterized constructors, copy constructors (`B47_CopyConstructor.cpp`), destructor lifecycle management (`B29_ConstructorDestructor.cpp`), constructor delegation, and initialization lists.
- **Operator Overloading**: Prefix/Postfix unary operators (`B37_OperatorOverloadingPrefix.cpp`, `B39_OperatorOverloadingPostfix.cpp`), binary operators (`+`, `-`, `*`), relational operators (`>`, `<`), and custom stream insertion/extraction (`B48_StudentMarksOperator.cpp`).
- **Inheritance & Hierarchy Design**:
  - Single, Multilevel, Multiple, and Hierarchical inheritance (`B53_MultilevelInheritance.cpp`, `B54_MultipleInheritance.cpp`).
  - Resolution of the classic **Diamond Problem** using `virtual` base classes (`B63_VirtualBaseClass.cpp`, `B67_AmbiguityResolution.cpp`).
- **Polymorphism & Dynamic Dispatch**: Virtual functions (`B64_VirtualFunction.cpp`), pure virtual interfaces / abstract classes (`B70_AbstractEmployee.cpp`), and virtual destructors (`B65_VirtualDestructor.cpp`) preventing memory leaks.
- **Templates & STL**: Function and class templates (`B81_Templates.cpp`), standard template library containers (`std::vector`, `std::list`, `std::map`), iterators, and custom generic data structures (`B72_StackImplementation.cpp`, `B73_LinkedList.cpp`, `B83_List.cpp`).

### 3. Data Structures & Algorithms (`DSA/`)
Production-ready implementations of core linear and non-linear data structures with edge-case validation:

- **Linked Lists**:
  - `11.single_linked_list.c`: Singly linked list with insertion, deletion by key/position, reversal, and sorted insertion.
  - `13.double_linked_list.c`: Doubly linked list with bidirectional pointer maintenance.
  - `14.circular_double_linked_list.c`: Circular doubly linked list.
- **Stacks & Queues**:
  - `1.stack.c`, `7.queue.c`, `8.circular_queue.c`, `22.priority_queue.c`: Static array and dynamic linked list representations.
  - `3.infix_to_postfix.c`, `4.evaluation_of_prefix.c`, `20.expression_tree.c`: Operator precedence parsing and syntax tree evaluations.
- **Tree Structures**:
  - `16.binary_tree_traversal.c`: Preorder, Inorder, and Postorder traversals (recursive and iterative).
  - `17.binary_search_tree.c`: Search, Insertion, Min/Max extraction, and node deletion with in-order predecessor replacement.
  - `18.avl_tree.c`: Height-balanced self-balancing tree with Left-Left (LL), Right-Right (RR), Left-Right (LR), and Right-Left (RL) rotations.
- **Sorting & Binary Search Paradigms**:
  - `merge_sort.c`, `23.heap_sort.c`: $O(n \log n)$ divide-and-conquer and max-heap algorithms.
  - `24.book_allocation_problem.cpp`, `25.painters_problem.cpp`, `26.aggressive_cows.cpp`: Monotonic binary search predicate optimization ($O(n \log(\text{sum})))$.

### 4. Python & Backend Web Architecture (`Python/`)
Comprehensive Python modules from language internals to microservice architectures:

- **Language Internals & OOP**:
  - Decorators (`A27_decorators.py`), Class methods & Static methods (`A31_class_methods.py`), Property getters/setters (`A30_getters_setters.py`).
  - Inheritance, polymorphism, and dunder methods (`A33_inheritance.py`, `A36_operator_overloading.py`).
  - Robust exception handling (`A19_exception_handling.py`) and streaming file I/O (`A23_file_manipulation.py`).
- **Flask Web Services (`Python/flask/`)**:
  - `flask_basics`: Minimal WSGI routing and application factory.
  - `flask_forms`: Request parsing, form validation, and POST submission workflows.
  - `flask_jinja_basics` & `flask_jinja_comments_loops`: Jinja2 templating syntax, loops, conditionals, and filters.
  - `flask_template_inheritance`: Modular master layouts with `{% extends %}` and `{% block %}`.
  - `flask_serving_static`: Asset pipeline configuration for CSS, JavaScript, and Bootstrap 5 bundles.
  - `flask_apis`: JSON REST endpoints and serialization.
  - `flask_flashing`: Flash message messaging across HTTP redirects.

### 5. Full-Stack Web Development (`Web Dev/`)
- **Frontend Core (139 files)**: Semantic HTML5 forms, modern CSS3 styling, and JavaScript DOM interaction, event listeners, array manipulation, and dynamic client-side rendering.
- **Flask Website (`Web Dev/website/`)**: Complete full-stack web application featuring routing (`app.py`), modular Jinja2 templates (`home.html`, `adm.html`, `fac.html`, `infra.html`), and custom stylesheet architecture.

---

## ⚡ DSA Complexity Reference

| Data Structure / Algorithm | Access | Search | Insertion | Deletion | Space Complexity |
|:---|:---:|:---:|:---:|:---:|:---:|
| **Singly Linked List** | $O(n)$ | $O(n)$ | $O(1)$ *(at head)* | $O(n)$ | $O(n)$ |
| **Doubly Linked List** | $O(n)$ | $O(n)$ | $O(1)$ *(at head/tail)* | $O(1)$ *(with node pointer)* | $O(n)$ |
| **Stack / Queue** | $O(n)$ | $O(n)$ | $O(1)$ | $O(1)$ | $O(n)$ |
| **Binary Search Tree** | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ | $O(n)$ |
| **AVL Tree (Self-Balancing)** | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ | $O(n)$ |
| **Heap Sort** | — | $O(n)$ | $O(\log n)$ | $O(\log n)$ | $O(1)$ aux |
| **Merge Sort** | — | — | — | — | $O(n)$ aux / $O(n \log n)$ time |
| **Predicate Binary Search** | — | $O(n \log M)$ | — | — | $O(1)$ aux |

---

## 🚀 Getting Started & Build Guide

### Prerequisites
- **C/C++ Compiler**: GCC (`gcc`, `g++`) or Clang (Apple Silicon / macOS Xcode CLI tools).
- **Python Runtime**: Python 3.10 or higher.
- **Web Browser**: Chrome, Firefox, or Safari for frontend preview.

### Compiling C & C++ Programs

Compile any C program with strict compiler warnings:
```bash
# Compile and run a C module
gcc -Wall -Wextra -std=c11 C/a55_bubble_sort.c -o bubble_sort
./bubble_sort
```

Compile any C++ program using C++17:
```bash
# Compile and run a C++ OOP module
g++ -Wall -Wextra -std=c++17 C++/B64_VirtualFunction.cpp -o virtual_demo
./virtual_demo
```

Compile DSA implementations:
```bash
# Compile and run AVL Tree
gcc -Wall -Wextra -std=c11 DSA/18.avl_tree.c -o avl_tree
./avl_tree
```

### Running Python & Flask Services

1. **Activate Python Virtual Environment**:
   ```bash
   python3 -m venv .venv
   source .venv/bin/activate    # On Windows: .venv\Scripts\activate
   ```

2. **Install Flask Dependencies**:
   ```bash
   pip install flask
   ```

3. **Run a Flask Service**:
   ```bash
   cd Python/flask/flask_static_site
   python3 main.py
   ```
   Access the server at `http://127.0.0.1:5000/`.

4. **Run the Full-Stack Web Application**:
   ```bash
   cd "Web Dev/website"
   pip install -r requirements.txt
   python3 app.py
   ```

---

## 📐 Software Engineering Best Practices

- **Zero Memory Leaks**: All manual dynamic memory allocations (`malloc`, `calloc`, `new`) are paired with appropriate deallocations (`free`, `delete`, `delete[]`) and defensive null pointer checks.
- **Defensive Error Handling**: Input validation across interactive CLI prompts and web routes to prevent buffer overflows, division-by-zero, and runtime crashes.
- **Idiomatic Code Style**:
  - C/C++: Consistent naming conventions, modular function decomposition, header guards, and type safety.
  - Python: PEP 8 adherence, list comprehensions, context managers (`with` statements), and exception hierarchies.
- **Decoupled Architecture**: Clean separation between core algorithm engines, UI templates, and routing logic.

---

## 👨‍💻 Author & Contributions

**Arnav Bansal**
- GitHub: [@arnav-bansal-20](https://github.com/arnav-bansal-20) / [@arnav537](https://github.com/arnav537)
- Contributions, issues, and code reviews are welcome!

---

## 📄 License
This repository is developed for educational, academic, and open-source software engineering reference.

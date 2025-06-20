# C - Binary Trees

This project focuses on implementing and working with **binary trees** in C.

We practiced creating nodes, inserting children, checking node types, traversing the tree, and calculating properties like height, size, and balance.

---

##  Project Description

This project includes the implementation of several functions to handle binary trees, such as:

- Creating a new node
- Inserting nodes (left and right)
- Deleting trees
- Checking node types (leaf, root)
- Tree traversals (pre-order, in-order, post-order)
- Tree properties (height, depth, size, number of leaves/nodes)
- Structural checks (full, perfect, balance factor)
- Node relationships (sibling, uncle)

---

##  Tasks Breakdown

| Task No. | Task Name            | Developer              |
|----------|----------------------|------------------------|
| 0-8      | Core functionality   | sara ali  Mareer       |
| 9-18     | Advanced functionality | *Abdullah Aldafas  * |

---

## Testing

All functions were tested using an online C compiler such as **OnlineGDB**.

We used the provided `main.c` files from each task, combined them with our implementations, compiled the code, and verified the output.

We carefully examined the printed binary tree **before and after each operation** to confirm correct behavior (deletion, calculation, traversal, etc.).

---

## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` with the following flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code style: **Betty**
- All header files must be guarded
- Prototypes must be declared in `binary_trees.h`
- Only allowed functions: `malloc`, `free`, `printf`, `write`

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
                                                                                 
 ##  Example Usage


binary_tree_t *root = binary_tree_node(NULL, 98);
binary_tree_insert_left(root, 64);
binary_tree_insert_right(root, 128);
binary_tree_print(root);


## Authors

Sara Ali Mareer
Email: 10942@holbertonstudents.com

Abdullah Aldafas
Email: 10946@holbertonstudents.com


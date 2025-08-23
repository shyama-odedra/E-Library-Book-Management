## ✅ E-Library Book Management 

# E-Library Book Management

## 📌 Project Concept
Borrow and return books with an **undo functionality** using a stack.

## 🚀 How to Run
```bash
g++ src/library.cpp -o library
./library
```
```bash
sample output:

Library Inventory:
AI Concepts by Russell (Available)
Python Guide by Guido (Available)
C++ Basics by Bjarne (Available)

Book borrowed: C++ Basics
Book borrowed: Python Guide

Library Inventory:
AI Concepts by Russell (Available)
Python Guide by Guido (Borrowed)
C++ Basics by Bjarne (Borrowed)

Book returned: Python Guide

Library Inventory:
AI Concepts by Russell (Available)
Python Guide by Guido (Available)
C++ Basics by Bjarne (Borrowed)

Book returned: C++ Basics

Library Inventory:
AI Concepts by Russell (Available)
Python Guide by Guido (Available)
C++ Basics by Bjarne (Available)

Found: AI Concepts by Russell (Available)
``

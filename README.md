# E-Library Book Management
 
**🔗 Live site: [elibrarybookmanagement.netlify.app](https://elibrarybookmanagement.netlify.app/)**
 
## 📌 Project concept
 
A circulation system for a small library: borrow and return books, roll back the last action with an undo stack, and search the catalog. The core data structures are a **singly linked list** (catalog) and a **stack** (undo history).
 
This repo has two implementations of the same logic:
 
| | Language | Interface |
|---|---|---|
| `library.cpp` | C++ | Command-line, fixed demo in `main()` |
| `index.html` | JavaScript (single file) | Interactive website, deployable |
 
The web version is a straight port, not a redesign of the logic — same linked-list traversal, same stack-based undo, same output messages (`Book borrowed: ...`, `No actions to undo.`, etc.), just with a UI instead of `cout`.
 
## 🚀 Run the C++ version
 
```
g++ library.cpp -o library
./library
```
 
Sample output:
 
```
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
...
Found: AI Concepts by Russell (Available)
```
 
## 🌐 The web version
 
**Live: https://elibrarybookmanagement.netlify.app/**
 
It's a single self-contained `index.html` — no build step, no dependencies — so it also runs fine by just opening the file directly in a browser.
 
## 🚢 Redeploying / other hosting options
 
**Netlify** (currently used)
- Push changes to this repo, then in the Netlify dashboard: **Site → Deploys → Trigger deploy**, or connect the repo directly under **Site settings → Build & deploy** so it redeploys automatically on every push.
**GitHub Pages** (alternative)
1. Go to `github.com/shyama-odedra/E-Library-Book-Management` → **Settings → Pages**.
2. Under **Source**, choose **Deploy from a branch** → Branch: `main`, folder: `/ (root)` → **Save**.
3. Live at `https://shyama-odedra.github.io/E-Library-Book-Management/`.
## 🧠 What to say about it on your resume
 
Something like:
 
> Built a library circulation system in C++ using a custom linked-list catalog and a stack-based undo mechanism; ported the logic to a deployed, interactive web app (HTML/CSS/JS).
 
That one line shows both DSA fundamentals and the ability to take a CLI tool to something a recruiter can actually click into.
  and the ability to take a CLI tool to something a recruiter can actually click into.

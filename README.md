# E-Library Book Management

## 📌 Project concept

A circulation system for a small library: borrow and return books, roll back the last action with an undo stack, and search the catalog. The core data structures are a **singly linked list** (catalog) and a **stack** (undo history).

This repo has two implementations of the same logic:

| | Language | Interface |
|---|---|---|
| `src/library.cpp` | C++ | Command-line, fixed demo in `main()` |
| `index.html` | JavaScript (single file) | Interactive website, deployable |

The web version is a straight port, not a redesign of the logic — same linked-list traversal, same stack-based undo, same output messages (`Book borrowed: ...`, `No actions to undo.`, etc.), just with a UI instead of `cout`.

## 🚀 Run the C++ version

```
g++ src/library.cpp -o library
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

## 🌐 Run the web version locally

Just open `index.html` in a browser — it's a single self-contained file, no build step, no dependencies.

## 🚢 Deploy it (free options)

**GitHub Pages** (simplest if the code is already on GitHub)
1. Push this repo to GitHub.
2. Repo → **Settings → Pages** → Source: `Deploy from a branch` → Branch: `main`, folder: `/root` (or `/docs` if you move `index.html` there).
3. Your site goes live at `https://<username>.github.io/<repo-name>/`.

**Netlify**
1. [netlify.com](https://netlify.com) → **Add new site → Deploy manually**.
2. Drag the folder containing `index.html` into the drop zone.
3. Netlify gives you a live URL instantly; you can rename it or attach a custom domain for free.

**Vercel**
1. [vercel.com](https://vercel.com) → **Add New → Project → Import** your GitHub repo (or drag-and-drop like Netlify).
2. No build settings needed for a static HTML file — deploy as-is.

Any of the three works well for a resume link — GitHub Pages is the easiest to set up straight from your existing repo.

## 🧠 What to say about it on your resume

Something like:

> Built a library circulation system in C++ using a custom linked-list catalog and a stack-based undo mechanism; ported the logic to a deployed, interactive web app (HTML/CSS/JS).

That one line shows both DSA fundamentals and the ability to take a CLI tool to something a recruiter can actually click into.

#include <iostream>
#include <stack>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    bool available;
    Book* next;
};
struct Action {
    string actionType;
    string title;
};
class Library {
    Book* head;
    stack<Action> actions;
public:
    Library() { head = NULL; }
    void addBook(string title, string author) {
        Book* newBook = new Book{title, author, true, head};
        head = newBook;
    }
    void borrowBook(string title) {
        Book* temp = head;
        while (temp != NULL) {
            if (temp->title == title && temp->available) {
                temp->available = false;
                actions.push({"borrow", title});
                cout << "Book borrowed: " << title << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Book not available.\n";
    }
    void returnBook(string title) {
        Book* temp = head;
        while (temp != NULL) {
            if (temp->title == title && !temp->available) {
                temp->available = true;
                actions.push({"return", title});
                cout << "Book returned: " << title << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found in borrowed list.\n";
    }
    void undo() {
        if (actions.empty()) {
            cout << "No actions to undo.\n";
            return;
        }
        Action last = actions.top();
        actions.pop();
        if (last.actionType == "borrow") {
            returnBook(last.title);
        } else if (last.actionType == "return") {
            borrowBook(last.title);
        }
    }
    void search(string title) {
        Book* temp = head;
        while (temp != NULL) {
            if (temp->title == title) {
                cout << "Found: " << temp->title << " by " << temp->author 
                     << " (" << (temp->available ? "Available" : "Borrowed") << ")\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Book not found.\n";
    }
    void displayBooks() {
        Book* temp = head;
        cout << "\nLibrary Inventory:\n";
        while (temp != NULL) {
            cout << temp->title << " by " << temp->author 
                 << " (" << (temp->available ? "Available" : "Borrowed") << ")\n";
            temp = temp->next;
        }
    }
};
int main() {
    Library lib;
    lib.addBook("C++ Basics", "Bjarne");
    lib.addBook("Python Guide", "Guido");
    lib.addBook("AI Concepts", "Russell");
    lib.displayBooks();
    lib.borrowBook("C++ Basics");
    lib.borrowBook("Python Guide");
    lib.displayBooks();
    lib.undo(); // Undo last borrow
    lib.displayBooks();
    lib.returnBook("C++ Basics");
    lib.displayBooks();
    lib.search("AI Concepts");
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;

    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    Book book1("Title 1", "Author 1", 100);
    Book book2("Title 2", "Author 2", 200);

    book1.displayInfo();
    book2.displayInfo();

    return 0;
}

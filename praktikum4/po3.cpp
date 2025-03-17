#include <iostream>
#include <string>
using namespace std;

struct Books {
    char title[50];
    char author [50];
    char subject [100];
    int book_id;
    int release_year;
    float price;
};

int main () {
    struct Books book1;
    struct Books book2;

    strcpy (book1.title, "Learn C++ Programming");
    strcpy (book1.author, "Chand Miyan");
    strcpy (book1.subject, "C++ Programming");
    book1.book_id = 6495407;
    book1.release_year = 2008;
    book1.price = 49.99;

    strcpy (book2.title, "Telecom Billing");
    strcpy (book2.author, "Yakit Singha");
    strcpy (book2.subject, "Telecom");
    book2.book_id = 6495700;
    book2.release_year = 2003;
    book2.price = 39.99;

    cout << "Book 1 title : " << book1.title << endl;
    cout << "Book 1 author : " << book1.author << endl;
    cout << "Book 1 subject : " << book1.subject << endl;
    cout << "Book 1 id : " << book1.book_id << endl;
    cout << "Book 1 release year : " << book1.release_year << endl;
    cout << "Book 1 price : $" << book1.price << endl;
    
    cout << "Book 2 title : " << book2.title << endl;
    cout << "Book 2 author : " << book2.author << endl;
    cout << "Book 2 subject : " << book2.subject << endl;
    cout << "Book 2 id : " << book2.book_id << endl;
    cout << "Book 2 release year : " << book2.release_year << endl;
    cout << "Book 2 price : $" << book2.price << endl;

    return 0;
}
#include <iostream>
using namespace std;

struct Books {
    char title[50];
    char author[50];
    int release_year;
    float price;
    double weight;
};

int main (){
    struct Books book1;
    struct Books book2;
    struct Books book3;
    struct Books book4;
    struct Books book5;

    strcpy(book1.title, "Learn C++ Programming");
    strcpy(book1.author, "Chand Miyan");
    book1.release_year = 2008;
    book1.price = 49.99;
    book1.weight = 4.2;

    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Yakit Singha");
    book2.release_year = 2003;
    book2.price = 39.99;
    book2.weight = 3.6;

    strcpy(book3.title, "Harry Potter Vol 1");
    strcpy(book3.author, "J. K. Rolling");
    book3.release_year = 1997;
    book3.price = 29.99;
    book3.weight = 7.0;

    strcpy(book4.title, "Harry Potter Vol 2");
    strcpy(book4.author, "J. K. Rolling");
    book4.release_year = 1998;
    book4.price = 29.99;
    book4.weight = 6.8;

    strcpy(book5.title, "Harry Potter Vol 3");
    strcpy(book5.author, "J. K. Rolling");
    book5.release_year = 1999;
    book5.price = 29.99;
    book5.weight = 6.9;

    cout << "\nBook 1 info : " << endl;
    cout << "Book 1 title : " << book1.title << endl;
    cout << "Book 1 author : " << book1.author << endl;
    cout << "book 1 release year : " << book1.release_year << endl;
    cout << "book 1 price : $" << book1.price << endl;
    cout << "book 1 weight : " << book1.weight << "kg" << endl;

    cout << "\nBook 2 info : " << endl;
    cout << "Book 2 title : " << book2.title << endl;
    cout << "Book 2 author : " << book2.author << endl;
    cout << "book 2 release year : " << book2.release_year << endl;
    cout << "book 2 price : $" << book2.price << endl;
    cout << "book 2 weight : " << book2.weight << "kg" << endl;

    cout << "\nBook 3 info : " << endl;
    cout << "Book 3 title : " << book3.title << endl;
    cout << "Book 3 author : " << book3.author << endl;
    cout << "book 3 release year : " << book3.release_year << endl;
    cout << "book 3 price : $" << book3.price << endl;
    cout << "book 3 weight : " << book3.weight << "kg" << endl;

    cout << "\nBook 4 info : " << endl;
    cout << "Book 4 title : " << book4.title << endl;
    cout << "Book 4 author : " << book4.author << endl;
    cout << "book 4 release year : " << book4.release_year << endl;
    cout << "book 4 price : $" << book4.price << endl;
    cout << "book 4 weight : " << book4.weight << "kg" << endl;

    cout << "\nBook 5 info : " << endl;
    cout << "Book 5 title : " << book5.title << endl;
    cout << "Book 5 author : " << book5.author << endl;
    cout << "book 5 release year : " << book5.release_year << endl;
    cout << "book 5 price : $" << book5.price << endl;
    cout << "book 5 weight : " << book5.weight << "kg" << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

union film {
    char title [100];
    int release_year;
    double price_per_ticket;
    double imdb_rating;
    int revenue;
};

int main () {
    union film movie1, movie2, movie3;

    strcpy (movie1.title, "Captain America : The Winter Soldier");
    movie1.release_year = 2014;
    movie1.price_per_ticket = 19.99;
    movie1.imdb_rating = 0.70;
    movie1.revenue = 714400000;

    strcpy (movie2.title, "Captain America : Civil War");
    movie2.release_year = 2016;
    movie2.price_per_ticket = 19.99;
    movie2.imdb_rating = 0.70;
    movie2.revenue = 1153304495;

    strcpy (movie3.title, "Thor : Ragnarok");
    movie3.release_year = 2017;
    movie3.price_per_ticket = 14.99;
    movie3.imdb_rating = 0.79;
    movie3.revenue = 850482778;

    cout << "\nMovie 1 info : " << endl;
    cout << "Movie 1 title : " << movie1.title << endl;
    cout << "Movie 1 release year : " << movie1.release_year << endl;
    cout << "Movie 1 price per ticket : " << movie1.price_per_ticket << endl;
    cout << "Movie 1 imdb rating : " << movie1.imdb_rating << endl;
    cout << "Movie 1 revenue : " << movie1.revenue << endl;
    cout << "Ukuran dari elemen title : " << sizeof (movie1.title) << endl;
    cout << "Ukuran dari elemen release_year : " << sizeof (movie1.release_year) << endl;
    cout << "Ukuran dari elemen price_per_ticket : " << sizeof (movie1.price_per_ticket) << endl;
    cout << "Ukuran dari elemen imdb_rating : " << sizeof (movie1.imdb_rating) << endl;
    cout << "Ukuran dari elemen revenue : " << sizeof (movie1.revenue) << endl;
    cout << "Ukuran dari elemen union : " << sizeof (film) << endl;

    cout << "\nMovie 2 info : " << endl;
    cout << "Movie 2 title : " << movie2.title << endl;
    cout << "Movie 2 release year : " << movie2.release_year << endl;
    cout << "Movie 2 price per ticket : " << movie2.price_per_ticket << endl;
    cout << "Movie 2 imdb rating : " << movie2.imdb_rating << endl;
    cout << "Movie 2 revenue : " << movie2.revenue << endl;
    cout << "Ukuran dari elemen title : " << sizeof (movie2.title) << endl;
    cout << "Ukuran dari elemen release_year : " << sizeof (movie2.release_year) << endl;
    cout << "Ukuran dari elemen price_per_ticket : " << sizeof (movie2.price_per_ticket) << endl;
    cout << "Ukuran dari elemen imdb_rating : " << sizeof (movie2.imdb_rating) << endl;
    cout << "Ukuran dari elemen revenue : " << sizeof (movie2.revenue) << endl;
    cout << "Ukuran dari elemen union : " << sizeof (film) << endl;

    cout << "\nMovie 3 info : " << endl;
    cout << "Movie 3 title : " << movie3.title << endl;
    cout << "Movie 3 release year : " << movie3.release_year << endl;
    cout << "Movie 3 price per ticket : " << movie3.price_per_ticket << endl;
    cout << "Movie 3 imdb rating : " << movie3.imdb_rating << endl;
    cout << "Movie 3 revenue : " << movie3.revenue << endl;
    cout << "Ukuran dari elemen title : " << sizeof (movie3.title) << endl;
    cout << "Ukuran dari elemen release_year : " << sizeof (movie3.release_year) << endl;
    cout << "Ukuran dari elemen price_per_ticket : " << sizeof (movie3.price_per_ticket) << endl;
    cout << "Ukuran dari elemen imdb_rating : " << sizeof (movie3.imdb_rating) << endl;
    cout << "Ukuran dari elemen revenue : " << sizeof (movie3.revenue) << endl;
    cout << "Ukuran dari elemen union : " << sizeof (film) << endl;

    return 0;
}
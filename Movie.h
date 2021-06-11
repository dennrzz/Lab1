/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: Movie.h
 */

#ifndef INC_2021_SUMMER_CSCI2421_MOVIE_H
#define INC_2021_SUMMER_CSCI2421_MOVIE_H

#include <string>

using namespace std;

class Movie {
public:

/**
     * #TODO 1: Declare the Constructor.
     * #TODO 2: Declare getters and setters for all private attributes
     * #TODO 3: Declare the operator <<
     * #TODO 4: Declare the operator ==. Two movies are equal is their titles are the same.
     * */

    Movie(string title, string actor, int year); // constructor

    // getters and setters methods

    string getTitle();
    string getActor();
    int getYear();

    void setTitle(string title);
    void setActor(string actor);
    void setYear(int year);

    // operator declarations
    friend ostream &operator<<(ostream &output, const Movie &M);

    virtual bool &operator==(const Movie &E) const;

private:
    /**
     * #TODO 5: Declare private attributes
     * #TODO 6: Don't forget to document your code using the syntax described on Canvas.
     * */

    string title;       // string member function for 'title'
    string actorName;   // string member function for 'actorName'
    int releaseYear;    // int member function for 'releaseYear'

};

#include "Movie.cpp"


#endif //INC_2021_SUMMER_CSCI2421_MOVIE_H

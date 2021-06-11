/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: Movie.cpp
 */
#include <iostream>
#include "Movie.h"

using namespace std;

/*#TODO 1: implement all methods from movie.h*/

// initializes Movie to movie Title, Actor Name, and Release Year
Movie::Movie(string title, string actor, int year) {
    this -> title = title;
    this -> actorName = actor;
    this -> releaseYear = year;
}

// getters and setters methods from Movie class
string Movie::getTitle() {
    return title;
}

void Movie::setTitle(string title) {
    this -> title = title;
}

string Movie::getActor() {
    return actorName;
}

void Movie::setActor(string actor) {
    this -> actorName = actor;
}

int Movie::getYear() {
    return releaseYear;
}

void Movie::setYear(int year) {
    this -> releaseYear = year;
}

// output operator that defines the movie with its title, actor name, and release year
ostream &operator<<(ostream& output, const Movie &M) {
    return output << ">>" << M.title << "--" << M.actorName << "--" << M.releaseYear << "<<" << endl;
}

// equality operator that checks if two movie titles are matching
bool Movie::operator==(Movie &movLeft, Movie &movRight) {
    return movLeft.getTitle() == movRight.getTitle();
}

/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: StreamingService.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include "StreamingService.h"

using namespace std;

/**
 * #TODO 1: Implement all methods from StreamingService.h
 */

StreamingService::StreamingService() {
    // empty
}

void StreamingService::addMovie(string title, string actorName, int releaseYear) {
    //make a movie and add to movieList private member
    //Movie mov = Movie(title, actorName, releaseYear);

    movieList.add(mov);
}

bool StreamingService::isMovieAvailable(string title) {
    //convert movieList array to vector
    vector<Movie> v(begin(movieList), end(movieList));

    //iterate over vector v to see if title is equal to element at curr index
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getTitle() == title) {
            return true;
        }
    }
    return false;
}


ostream &operator << (ostream &output, const StreamingService &S) {
    return output << S.movieList << endl;
}

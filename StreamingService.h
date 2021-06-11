/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: StreamingService.h
 */
#ifndef INC_2021_SUMMER_CSCI2421_STREAMINGSERVICE_H
#define INC_2021_SUMMER_CSCI2421_STREAMINGSERVICE_H

#include "Bag.h"
#include "Movie.h"

class StreamingService {
private:
    /**
     * #TODO 1: Declare the movies bag.
     */

    Bag<Movie> movieList;

public:
    /**
     * #TODO 2: Declare the constructor
     * #TODO 3: Declare the addMovie method
     * #TODO 4: Declare the isMovieAvailable method.
     * #TODO 5: Declare the operator <<.
     */

    StreamingService();     // constructor
    virtual void addMovie(string title, string actorName, int releaseYear);     // addMovie method
    virtual bool isMovieAvailable(string title);    // isMovieAvailable method

    friend ostream &operator << (ostream &output, const StreamingService &S);

};

#include "StreamingService.cpp"

#endif //INC_2021_SUMMER_CSCI2421_STREAMINGSERVICE_H

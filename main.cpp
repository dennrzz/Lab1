/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: main.cpp
 */

#include <iostream> // For cout and cin
#include <string>   // For string objects
#include "StreamingService.h"



using namespace std;

int main()
{
    cout << string(80, '*')  << endl;
    cout << string(30, ' ')<< "LABORATORY #1"  << endl;
    cout << string(80, '*')  << endl;


    /* #TODO: 1. Create the Streaming Service Object * */
    /* #TODO: 2. Add the movies showed on the Readme.md * */
    /* #TODO: 3. Display the menu described on the Readme.md  * */

//    The main program loads the predefined data (the one shown see [StreamingService Output](#streamingservice-output) above)
//    and displays a menu as it opens with 4 options:
//    1. Display the movies in the streaming service.
//                                           - Will just print the StreamingService object.
//    1. Add new movie to the system
//    - Will ask for the movie title, main author and release year.
//                                                            - Will add the movie to the Streaming Service.
//    1. Check movie availability
//    - asks the user for a movie title and if the movie is in the system it will print it out
//    - otherwise, will tell the user that the movie is not there.
//    1. Exit the application.

    char userContinue = 'y';
    int userChoice = 0;

    std::string movieTitle;
    std::string movieAuthor;
    int releaseYear;

    while (userContinue == 'y' || userContinue == 'Y') {
        cout << "Please select an option from below:\n\n";

        cout << "\t1. Display the movies in the streaming service.\n";

        cout << "\t2. Add new movie to the system.\n";

        cout << "\t3. Check movie availability.\n";

        cout << "\t4. Exit the application.\n";

        cin >> userChoice;

        switch (userChoice) {
            case 1:
                //displays movie in streaming service
                StreamingService obj();

                cout << obj;
                break;
            case 2:
                cout << "Please enter movie title: ";
                cin >> movieTitle;

                cout << "\n\nPlease enter movie author: ";
                cin >> movieAuthor;

                cout << "\n\nPlease enter release year: ";
                cin >> releaseYear;

                //add movie to streaming service catalogue
                addMovie(movieTitle, movieAuthor, releaseYear);

                break;
            case 3:
                cout << "Please enter movie title: ";
                cin >> movieTitle;

                //check if movie exists in catalogue
                //bool movieAvail = isMovieAvailable(movieTitle);

                if (movieAvail) {
                    cout << "\nMovie is available! Titled: " << movieTitle;
                } else {
                    cout << "\nMovie is not available.";
                }
                break;
            case 4:
                userContinue = 'n';
                break;
            default:
                break;
        }
    }
    cout << "Program Terminated." <<endl;
};

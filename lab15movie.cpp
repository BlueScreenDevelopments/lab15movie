#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

/*
Brandon Julao
COMSC-210-5470
09.28.25
Movie Class + Text Input
*/

class Movie{
private:
    string title;
    int yearReleased;
    string screenWriter;

public:

    //setters
    void setTitle(const string &t) {title =t; }
    void setYearReleased(int y) {yearReleased = y; }
    void setScreenWriter(const string &sw) {screenWriter = sw; }

    //getters
    string getTitle() const {return title; }
    int getYearReleased() const {return yearReleased; }
    string getScreenWriter() const {return screenWriter; }

    //print
    void print() const{
        cout << "Movie: " << screenWriter << endl;
        cout << "    Year Released: " << yearReleased << endl;
        cout << "    Screenwriter: " << title << endl;
        cout << endl;

    }
};

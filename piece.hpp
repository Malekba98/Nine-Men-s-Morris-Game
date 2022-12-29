#ifndef PIECE_HPP_INCLUDED
#define PIECE_HPP_INCLUDED
#include<iostream>

class Stein {
public :


    Stein();
    int team;
    char teamzugehorigkeit;
    bool ausgewahlt;
    bool istMuhle;
    int right;
    int left ;
    int up ;
    int down;

};


#endif // STEIN_HPP_INCLUDED

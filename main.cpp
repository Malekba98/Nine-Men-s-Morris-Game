#include <iostream>
#include "spielbrett.hpp"


int main() {


SpielBrett Brett(0,0,true,false,false,true,false,false,false);

Brett.start();
do {
    Brett.Update(); }
 while (Brett.gameover()==false);









}


#include <iostream>
#include "spielbrett.hpp"










SpielBrett::SpielBrett(int TurnNumberWhite,
    int TurnNumberBlack,
bool setzPhaseWhite,
bool zugPhaseWhite,
bool endPhaseWhite,
bool setzPhaseBlack,
bool zugPhaseBlack,
bool endPhaseBlack,
bool GAMEOVER) :  TurnNumberWhite(TurnNumberWhite) , TurnNumberBlack(TurnNumberBlack),
setzPhaseWhite(setzPhaseWhite) , zugPhaseWhite(zugPhaseWhite) , endPhaseWhite(endPhaseWhite),
setzPhaseBlack(setzPhaseBlack) , zugPhaseBlack(zugPhaseBlack) , endPhaseBlack(endPhaseBlack),
GAMEOVER(GAMEOVER)
     {

    for(int i=0;i<24;i++)
    {
    /*Initialisierung der Positionen */
    steinpositionen[i].ausgewahlt=false;
    steinpositionen[i].team=0;
    steinpositionen[i].teamzugehorigkeit='O';
    steinpositionen[i].istMuhle=false;
    steinpositionen[i].right=-1; /* -1 entspricht : die Position hat keine right */
    steinpositionen[i].left=-1;  /* -1 entspricht : die Position hat keine left */
    steinpositionen[i].up=-1;   /* -1 entspricht : die Position hat keine up */
    steinpositionen[i].down=-1;  /* -1 entspricht : die Position hat keine down */
    }


    /*Initialisierung der Neighbours von der Positionen */
    steinpositionen[0].right=1;
    steinpositionen[0].down=9;


    steinpositionen[1].right=2;
    steinpositionen[1].left=0;
    steinpositionen[1].down=4;


    steinpositionen[2].left=1;
    steinpositionen[2].down=14;

    steinpositionen[3].right=4;

    steinpositionen[3].down=10;

    steinpositionen[4].right=5;
    steinpositionen[4].left=3;
    steinpositionen[4].up=1;
    steinpositionen[4].down=7;


    steinpositionen[5].left=4;

    steinpositionen[5].down=13;

    steinpositionen[6].right=7;
    steinpositionen[6].down=11;

    steinpositionen[7].right=8;
    steinpositionen[7].left=6;
    steinpositionen[7].up=4;



    steinpositionen[8].left=7;

    steinpositionen[8].down=12;

    steinpositionen[9].right=10;
    steinpositionen[9].up=0;
    steinpositionen[9].down=21;

    steinpositionen[10].right=11;
    steinpositionen[10].left=9;
    steinpositionen[10].up=3;
    steinpositionen[10].down=18;

    steinpositionen[11].left=10;
    steinpositionen[11].up=6;
    steinpositionen[11].down=15;

    steinpositionen[12].right=13;
    steinpositionen[12].up=8;
    steinpositionen[12].down=17;

    steinpositionen[13].right=14;
    steinpositionen[13].left=12;
    steinpositionen[13].up=5;
    steinpositionen[13].down=20;

    steinpositionen[14].left=13;
    steinpositionen[14].up=2;
    steinpositionen[14].down=23;

    steinpositionen[15].right=16;
    steinpositionen[15].up=11;

    steinpositionen[16].right=17;
    steinpositionen[16].left=15;
    steinpositionen[16].down=19;


    steinpositionen[17].left=16;
    steinpositionen[17].up=12;

    steinpositionen[18].right=19;
    steinpositionen[18].up=10;

    steinpositionen[19].right=20;
    steinpositionen[19].left=18;
    steinpositionen[19].up=16;
    steinpositionen[19].down=22;


    steinpositionen[20].left=19;
    steinpositionen[20].up=13;

    steinpositionen[21].right=22;
    steinpositionen[21].up=9;

    steinpositionen[22].right=23;
    steinpositionen[22].left=21;
    steinpositionen[22].up=19;


    steinpositionen[23].left=22;
    steinpositionen[23].up=14;



















}


bool SpielBrett::KannBewegen(int position) {

    bool kann=false;
    if (steinpositionen[position].down!=-1)
    {
        if (steinpositionen[steinpositionen[position].down].ausgewahlt==false)
        {
            kann=true;

        }
    }

     if (steinpositionen[position].up!=-1)
    {
        if (steinpositionen[steinpositionen[position].up].ausgewahlt==false)
        {
            kann=true;

        }
    }

     if (steinpositionen[position].right!=-1)
    {
        if (steinpositionen[steinpositionen[position].right].ausgewahlt==false)
        {
            kann=true;

        }

    }



     if (steinpositionen[position].left!=-1)
    {
        if (steinpositionen[steinpositionen[position].left].ausgewahlt==false)
        {
            kann=true;

        }
    }

 return kann;

}

void SpielBrett::PrintBoard()
{
    for (int i=0;i<7;i++)
        for (int j=0;j<7;j++)
    {
        Board[i][j]=' ';
    }

Board [0][0]=steinpositionen[0].teamzugehorigkeit;
Board [0][3]=steinpositionen[1].teamzugehorigkeit;
Board [0][6]=steinpositionen[2].teamzugehorigkeit;
Board [1][1]=steinpositionen[3].teamzugehorigkeit;
Board [1][3]=steinpositionen[4].teamzugehorigkeit;
Board [1][5]=steinpositionen[5].teamzugehorigkeit;
Board [2][2]=steinpositionen[6].teamzugehorigkeit;
Board [2][3]=steinpositionen[7].teamzugehorigkeit;
Board [2][4]=steinpositionen[8].teamzugehorigkeit;
Board [3][0]=steinpositionen[9].teamzugehorigkeit;
Board [3][1]=steinpositionen[10].teamzugehorigkeit;
Board [3][2]=steinpositionen[11].teamzugehorigkeit;
Board [3][4]=steinpositionen[12].teamzugehorigkeit;
Board [3][5]=steinpositionen[13].teamzugehorigkeit;
Board [3][6]=steinpositionen[14].teamzugehorigkeit;
Board [4][2]=steinpositionen[15].teamzugehorigkeit;
Board [4][3]=steinpositionen[16].teamzugehorigkeit;
Board [4][4]=steinpositionen[17].teamzugehorigkeit;
Board [5][1]=steinpositionen[18].teamzugehorigkeit;
Board [5][3]=steinpositionen[19].teamzugehorigkeit;
Board [5][5]=steinpositionen[20].teamzugehorigkeit;
Board [6][0]=steinpositionen[21].teamzugehorigkeit;
Board [6][3]=steinpositionen[22].teamzugehorigkeit;
Board [6][6]=steinpositionen[23].teamzugehorigkeit;


for (int i=0 ; i<7 ; i++)
    {
        for (int j=0; j<7 ; j++)
        {
        std::cout<< Board[i][j];
        }

    std::cout<<""<<std::endl;
    }
}

int SpielBrett::Auswahl() {

    int wahl;
    do {
    std::cin>>wahl;
    } while ( (wahl>23)  || (wahl<0) );
    return wahl;

}

void SpielBrett::start () {

    std::string antwort;
    do {
    std::cout<<"Wer startet ? "<<std::endl;
    std::cout<<"Waehlen Sie 'W' fuer WEISS or 'B' fuer SCHWARZ "<<std::endl;

    std::cin>>antwort;
    } while ( (antwort!="W" ) && (antwort!="B") );

    spieleramZug=antwort;

                       }



void SpielBrett::EntfernenWhite()
{
  int positionremove;
     bool removed=false;
     do
        {
            std::cout<<"Waehlen Sie einen weissen Stein zu entfernen"<<std::endl;
    positionremove=Auswahl();

     if  (steinpositionen[positionremove].team==-1)
            {
                if (steinpositionen[positionremove].istMuhle==false)
                {
         steinpositionen[positionremove].team=0;
         steinpositionen[positionremove].ausgewahlt=false;
         steinpositionen[positionremove].teamzugehorigkeit='O';
         removed=true ;
         PrintBoard();
                }
                else if (steinpositionen[positionremove].istMuhle==true)
                {
                    int AnzahlWhiteNichtInMuhle=0;
                    for (int f=0; f<24;f++)
                    {
                      if ( (steinpositionen[f].team==-1) && (steinpositionen[f].istMuhle==false) )
                            {
                                AnzahlWhiteNichtInMuhle=AnzahlWhiteNichtInMuhle+1;

                            }
                    }

                if (AnzahlWhiteNichtInMuhle==0)
                            {
                                steinpositionen[positionremove].team=0;
                                steinpositionen[positionremove].ausgewahlt=false;
                                steinpositionen[positionremove].teamzugehorigkeit='O';
                                removed=true ;
                                PrintBoard();

                            }



                }
            }

        }

     while (removed==false);

}

void SpielBrett::EntfernenBlack ()

 {
     int positionremove;
     bool removed=false;
     do
        {
            std::cout<<"Waehlen sie einen Shwarzenen Stein zu entfernen " <<std::endl;
    positionremove=Auswahl();

     if  (steinpositionen[positionremove].team==1)
            {
                if (steinpositionen[positionremove].istMuhle==false)
                {
         steinpositionen[positionremove].team=0;
         steinpositionen[positionremove].ausgewahlt=false;
         steinpositionen[positionremove].teamzugehorigkeit='O';
         removed=true ;
         PrintBoard();
                }
                else if (steinpositionen[positionremove].istMuhle==true)
                {
                    int AnzahlBlackNichtInMuhle=0;
                    for (int f=0; f<24;f++)
                    {
                      if ( (steinpositionen[f].team==1) && (steinpositionen[f].istMuhle==false) )
                            {
                                AnzahlBlackNichtInMuhle=AnzahlBlackNichtInMuhle+1;

                            }
                    }

                if (AnzahlBlackNichtInMuhle==0)
                            {
                                steinpositionen[positionremove].team=0;
                                steinpositionen[positionremove].ausgewahlt=false;
                                steinpositionen[positionremove].teamzugehorigkeit='O';
                                removed=true ;
                                PrintBoard();

                            }



                }
            }

        }

     while (removed==false);


}

int SpielBrett::MuhleBlack()
{
    int s=0;
     int k=0;
     int sum [16] ;
     for (int i=0 ; i<16 ;i++)
     {
         sum[i]=0;
     }



    for (int j=0 ; j<8 ;j++) /**< horizontale Muehle checken */

    {
        for (int i=k ; i<k+3; i++)
            {

         sum[j]=sum[j]+steinpositionen[i].team;

            }
           if (sum[j]==3)
                {
                    for (int i=k ; i<k+3; i++)
                        {

                          steinpositionen[i].istMuhle=true;

                        }

                }
            k=k+3;

    }



    sum[8]=steinpositionen[0].team+steinpositionen[9].team+steinpositionen[21].team; /**< vertikale Muehle checken */
    if (sum[8]==3)   {
            steinpositionen[0].istMuhle=true;
            steinpositionen[9].istMuhle=true;
            steinpositionen[21].istMuhle=true;

    }                                                                                                 /*erste spalte */
    sum[9]=steinpositionen[3].team+steinpositionen[10].team+steinpositionen[18].team;
    if (sum[9]==3)   {
            steinpositionen[3].istMuhle=true;
            steinpositionen[10].istMuhle=true;
            steinpositionen[18].istMuhle=true;

    }
    sum[10]=steinpositionen[6].team+steinpositionen[11].team+steinpositionen[15].team;
    if (sum[10]==3)   {
            steinpositionen[6].istMuhle=true;
            steinpositionen[11].istMuhle=true;
            steinpositionen[15].istMuhle=true;

    }
    sum[11]=steinpositionen[1].team+steinpositionen[4].team+steinpositionen[7].team;
    if (sum[11]==3)   {
            steinpositionen[1].istMuhle=true;
            steinpositionen[4].istMuhle=true;
            steinpositionen[7].istMuhle=true;

    }
    sum[12]=steinpositionen[16].team+steinpositionen[19].team+steinpositionen[22].team;
    if (sum[12]==3)   {
            steinpositionen[16].istMuhle=true;
            steinpositionen[19].istMuhle=true;
            steinpositionen[22].istMuhle=true;

    }
    sum[13]=steinpositionen[8].team+steinpositionen[12].team+steinpositionen[17].team;
    if (sum[13]==3)   {
            steinpositionen[8].istMuhle=true;
            steinpositionen[12].istMuhle=true;
            steinpositionen[17].istMuhle=true;

    }
    sum[14]=steinpositionen[5].team+steinpositionen[13].team+steinpositionen[20].team;
    if (sum[14]==3)   {
            steinpositionen[5].istMuhle=true;
            steinpositionen[13].istMuhle=true;
            steinpositionen[20].istMuhle=true;

    }
    sum[15]=steinpositionen[2].team+steinpositionen[14].team+steinpositionen[23].team;
    if (sum[15]==3)   {
            steinpositionen[2].istMuhle=true;
            steinpositionen[14].istMuhle=true;
            steinpositionen[23].istMuhle=true;

    }

    for (int i=0 ; i<16;i++)
    {
            if (sum[i]==3)
             {
                    s=s+1;
            }
    }
    return s;
}


void SpielBrett::NichtMuhleBlack()
{
    int k=0;
     int sum [16] ;
     for (int i=0 ; i<16 ;i++)
     {
         sum[i]=0;
     }




    for (int j=0 ; j<8 ;j++) /*horizontal checken */

    {
        for (int i=k;i<k+3; i++)
            {

         sum[j]=sum[j]+steinpositionen[i].team;

            }

            if (sum[j]!=3)
                {
                    for (int i=k ; i<k+3; i++)
                        {

                          steinpositionen[i].istMuhle=false;

                        }

                }
            k=k+3;


    }

    sum[8]=steinpositionen[0].team+steinpositionen[9].team+steinpositionen[21].team;
    if (sum[8]!=3)   {
            steinpositionen[0].istMuhle=false;
            steinpositionen[9].istMuhle=false;
            steinpositionen[21].istMuhle=false;

    }                                                                                                 /*erste spalte */
    sum[9]=steinpositionen[3].team+steinpositionen[10].team+steinpositionen[18].team;
    if (sum[9]!=3)   {
            steinpositionen[3].istMuhle=false;;
            steinpositionen[10].istMuhle=false;
            steinpositionen[18].istMuhle=false;

    }
    sum[10]=steinpositionen[6].team+steinpositionen[11].team+steinpositionen[15].team;
    if (sum[10]!=3)   {
            steinpositionen[6].istMuhle=false;
            steinpositionen[11].istMuhle=false;
            steinpositionen[15].istMuhle=false;

    }
    sum[11]=steinpositionen[1].team+steinpositionen[4].team+steinpositionen[7].team;
    if (sum[11]!=3)   {
            steinpositionen[1].istMuhle=false;
            steinpositionen[4].istMuhle=false;
            steinpositionen[7].istMuhle=false;

    }
    sum[12]=steinpositionen[16].team+steinpositionen[19].team+steinpositionen[22].team;
    if (sum[12]!=3)   {
            steinpositionen[16].istMuhle=false;
            steinpositionen[19].istMuhle=false;
            steinpositionen[22].istMuhle=false;

    }
    sum[13]=steinpositionen[8].team+steinpositionen[12].team+steinpositionen[17].team;
    if (sum[13]!=3)   {
            steinpositionen[8].istMuhle=false;
            steinpositionen[12].istMuhle=false;
            steinpositionen[17].istMuhle=false;

    }
    sum[14]=steinpositionen[5].team+steinpositionen[13].team+steinpositionen[20].team;
    if (sum[14]!=3)   {
            steinpositionen[5].istMuhle=false;
            steinpositionen[13].istMuhle=false;
            steinpositionen[20].istMuhle=false;

    }
    sum[15]=steinpositionen[2].team+steinpositionen[14].team+steinpositionen[23].team;
    if (sum[15]!=3)   {
            steinpositionen[2].istMuhle=false;
            steinpositionen[14].istMuhle=false;
            steinpositionen[23].istMuhle=false;

    }




}


void SpielBrett::NichtMuhleWhite()
{
    int k=0;
     int sum [16] ;
     for (int i=0 ; i<16 ;i++)
     {
         sum[i]=0;
     }




    for (int j=0 ; j<8 ;j++) /*horizontal checken */

    {
        for (int i=k;i<k+3; i++)
            {

         sum[j]=sum[j]+steinpositionen[i].team;

            }

            if (sum[j]!=-3)
                {
                    for (int i=k ; i<k+3; i++)
                        {

                          steinpositionen[i].istMuhle=false;

                        }

                }
            k=k+3;


    }

    sum[8]=steinpositionen[0].team+steinpositionen[9].team+steinpositionen[21].team;
    if (sum[8]!=-3)   {
            steinpositionen[0].istMuhle=false;
            steinpositionen[9].istMuhle=false;
            steinpositionen[21].istMuhle=false;

    }                                                                                                 /*erste spalte */
    sum[9]=steinpositionen[3].team+steinpositionen[10].team+steinpositionen[18].team;
    if (sum[9]!=-3)   {
            steinpositionen[3].istMuhle=false;;
            steinpositionen[10].istMuhle=false;
            steinpositionen[18].istMuhle=false;

    }
    sum[10]=steinpositionen[6].team+steinpositionen[11].team+steinpositionen[15].team;
    if (sum[10]!=-3)   {
            steinpositionen[6].istMuhle=false;
            steinpositionen[11].istMuhle=false;
            steinpositionen[15].istMuhle=false;

    }
    sum[11]=steinpositionen[1].team+steinpositionen[4].team+steinpositionen[7].team;
    if (sum[11]!=-3)   {
            steinpositionen[1].istMuhle=false;
            steinpositionen[4].istMuhle=false;
            steinpositionen[7].istMuhle=false;

    }
    sum[12]=steinpositionen[16].team+steinpositionen[19].team+steinpositionen[22].team;
    if (sum[12]!=-3)   {
            steinpositionen[16].istMuhle=false;
            steinpositionen[19].istMuhle=false;
            steinpositionen[22].istMuhle=false;

    }
    sum[13]=steinpositionen[8].team+steinpositionen[12].team+steinpositionen[17].team;
    if (sum[13]!=-3)   {
            steinpositionen[8].istMuhle=false;
            steinpositionen[12].istMuhle=false;
            steinpositionen[17].istMuhle=false;

    }
    sum[14]=steinpositionen[5].team+steinpositionen[13].team+steinpositionen[20].team;
    if (sum[14]!=-3)   {
            steinpositionen[5].istMuhle=false;
            steinpositionen[13].istMuhle=false;
            steinpositionen[20].istMuhle=false;

    }
    sum[15]=steinpositionen[2].team+steinpositionen[14].team+steinpositionen[23].team;
    if (sum[15]!=-3)   {
            steinpositionen[2].istMuhle=false;
            steinpositionen[14].istMuhle=false;
            steinpositionen[23].istMuhle=false;

    }




}


int SpielBrett::MuhleWhite()
 {
     int s=0;
     int k=0;
     int sum [16] ;
     for (int i=0 ; i<16 ;i++)
     {
         sum[i]=0;
     }




    for (int j=0 ; j<8 ;j++) /**< horizontale Muehle checken */

    {
        for (int i=k;i<k+3; i++)
            {

         sum[j]=sum[j]+steinpositionen[i].team;

            }

            if (sum[j]==-3)
                {
                    for (int i=k ; i<k+3; i++)
                        {

                          steinpositionen[i].istMuhle=true;

                        }

                }
            k=k+3;


    }

sum[8]=steinpositionen[0].team+steinpositionen[9].team+steinpositionen[21].team; /**< vertikale Muehle checken */
    if (sum[8]==-3)   {
            steinpositionen[0].istMuhle=true;
            steinpositionen[9].istMuhle=true;
            steinpositionen[21].istMuhle=true;

    }                                                                                                 /*erste spalte */
    sum[9]=steinpositionen[3].team+steinpositionen[10].team+steinpositionen[18].team;
    if (sum[9]==-3)   {
            steinpositionen[3].istMuhle=true;
            steinpositionen[10].istMuhle=true;
            steinpositionen[18].istMuhle=true;

    }
    sum[10]=steinpositionen[6].team+steinpositionen[11].team+steinpositionen[15].team;
    if (sum[10]==-3)   {
            steinpositionen[6].istMuhle=true;
            steinpositionen[11].istMuhle=true;
            steinpositionen[15].istMuhle=true;

    }
    sum[11]=steinpositionen[1].team+steinpositionen[4].team+steinpositionen[7].team;
    if (sum[11]==-3)   {
            steinpositionen[1].istMuhle=true;
            steinpositionen[4].istMuhle=true;
            steinpositionen[7].istMuhle=true;

    }
    sum[12]=steinpositionen[16].team+steinpositionen[19].team+steinpositionen[22].team;
    if (sum[12]==-3)   {
            steinpositionen[16].istMuhle=true;
            steinpositionen[19].istMuhle=true;
            steinpositionen[22].istMuhle=true;

    }
    sum[13]=steinpositionen[8].team+steinpositionen[12].team+steinpositionen[17].team;
    if (sum[13]==-3)   {
            steinpositionen[8].istMuhle=true;
            steinpositionen[12].istMuhle=true;
            steinpositionen[17].istMuhle=true;

    }
    sum[14]=steinpositionen[5].team+steinpositionen[13].team+steinpositionen[20].team;
    if (sum[14]==-3)   {
            steinpositionen[5].istMuhle=true;
            steinpositionen[13].istMuhle=true;
            steinpositionen[20].istMuhle=true;

    }
    sum[15]=steinpositionen[2].team+steinpositionen[14].team+steinpositionen[23].team;
    if (sum[15]==-3)   {
            steinpositionen[2].istMuhle=true;
            steinpositionen[14].istMuhle=true;
            steinpositionen[23].istMuhle=true;

    }

    for (int i=0 ; i<16;i++)
    {
            if (sum[i]==-3)
             {
                    s=s+1;
            }
    }
    return s;


}


void SpielBrett::Update() {

    int SUM=0;
    int positiontomove;
    int positiongewahlt;
    int positionadd;
    int Muhlzahlbefore;
    bool checkafter[24];
    bool checkbefore [24];
    bool different=false;



        if (spieleramZug=="W")
        {
            if (setzPhaseWhite==true)
            {

            Muhlzahlbefore=MuhleWhite();
            do{
                    std::cout<<"Den Weissen Stein setzen : Waehlen Sie eine Position"<<std::endl;
            positionadd=Auswahl(); } while (steinpositionen[positionadd].ausgewahlt==true) ;

            steinpositionen[positionadd].ausgewahlt=true;
            steinpositionen[positionadd].team=-1;
            steinpositionen[positionadd].teamzugehorigkeit='W';
            ++TurnNumberWhite;
            PrintBoard();
            if (TurnNumberWhite>=9) {setzPhaseWhite=false; zugPhaseWhite=true;}


                        MuhleWhite();
                        if (MuhleWhite()>Muhlzahlbefore )
                        {
                            EntfernenBlack();
                        }

                        spieleramZug='B';







        } else if (zugPhaseWhite==true)

                {
                    for(int i=0 ; i<24; i++)
            {
                if ( (steinpositionen[i].teamzugehorigkeit=='W') &&  (KannBewegen(i)==true) )
                    {
                        SUM=SUM+1;
                    }

            }
            if (SUM==0) {GAMEOVER=true;}

            if (GAMEOVER==false)
                    {


                    for (int i=0;i<24 ;i++)
                    {
                        checkbefore[i]=steinpositionen[i].istMuhle;
                    }
                    Muhlzahlbefore=MuhleWhite();
                do
                {
                     std::cout<<"Waehlen Sie einen weissen Stein zu bewegen "<<std::endl;

                    positiongewahlt=Auswahl();

                }  while ( (steinpositionen[positiongewahlt].teamzugehorigkeit!='W') ||
                            (KannBewegen(positiongewahlt)==false)  ) ;



                        do
                    {
                        std::cout<<"Wo moechten Sie den weissen Stein legen ? "<<std::endl;

                       positiontomove=Auswahl(); }

                       while (  ( (positiontomove!=steinpositionen[positiongewahlt].right) && (positiontomove!=steinpositionen[positiongewahlt].left)
                            && (positiontomove!=steinpositionen[positiongewahlt].up) && (positiontomove!=steinpositionen[positiongewahlt].down)  )
                                    || (steinpositionen[positiontomove].ausgewahlt==true) );



                            steinpositionen[positiontomove].ausgewahlt=true;
                            steinpositionen[positiontomove].team=-1;
                            steinpositionen[positiontomove].teamzugehorigkeit='W';
                            steinpositionen[positiongewahlt].ausgewahlt=false;
                            steinpositionen[positiongewahlt].team=0;
                            steinpositionen[positiongewahlt].teamzugehorigkeit='O';
                            NichtMuhleWhite();
                            MuhleBlack();
                            MuhleWhite();
                            PrintBoard();

                            for (int i=0; i<24 ; i++)
                            {
                                checkafter[i]=steinpositionen[i].istMuhle;
                                if(checkafter[i]!=checkbefore[i]) {different=true; break;}
                            }
                            if ( (MuhleWhite()>=Muhlzahlbefore ) && (different==true) )
                        {
                            EntfernenBlack();
                        }

                        if  (countblack()==3) {zugPhaseBlack=false ; endPhaseBlack=true;}
                        spieleramZug='B';

                    }

                    else { std::cout<<"GAME-OVER:Schwarzer Spieler hat gewonnen"<<std::endl; }


                }

                else if (endPhaseWhite==true)
                {
if (countwhite()==2) {GAMEOVER=true;}

                if (GAMEOVER==false)

                {


        Muhlzahlbefore=MuhleWhite();
                do
                {

                    std::cout<<"Waehlen Sie einen Weissen Stein zu bewegen "<<std::endl;
                    positiongewahlt=Auswahl(); }

                            while (steinpositionen[positiongewahlt].teamzugehorigkeit!='W' );


                        do
                    {
                        std::cout<<"Wo moechten Sie den Weissen Stein legen ?"<<std::endl;

                       positiontomove=Auswahl(); } while   (steinpositionen[positiontomove].ausgewahlt==true) ;


                            steinpositionen[positiontomove].ausgewahlt=true;
                            steinpositionen[positiontomove].team=-1;
                            steinpositionen[positiontomove].teamzugehorigkeit='W';
                            steinpositionen[positiongewahlt].ausgewahlt=false;
                            steinpositionen[positiongewahlt].team=0;
                            steinpositionen[positiongewahlt].teamzugehorigkeit='O';
                            NichtMuhleWhite();
                            MuhleBlack();
                            MuhleWhite();
                            PrintBoard();

                            if (MuhleWhite()>Muhlzahlbefore )
                        {
                            EntfernenBlack();
                        }
                }

                else {std::cout<<"GAME-OVER:Schwarzer Spieler hat gewonnen"<<std::endl;}

                spieleramZug='B';

                }

        }

        else if (spieleramZug=="B")
        {
                if (setzPhaseBlack==true)
                {


            Muhlzahlbefore=MuhleBlack();
            do {
                    std::cout<<"Den Schwarzen Stein setzen : Waehlen Sie eine Position"<<std::endl;

            positionadd=Auswahl(); } while (steinpositionen[positionadd].ausgewahlt==true) ;

            steinpositionen[positionadd].ausgewahlt=true;
            steinpositionen[positionadd].team=1;
            steinpositionen[positionadd].teamzugehorigkeit='B';
            ++TurnNumberBlack;
            PrintBoard();
            if (TurnNumberBlack>=9) {setzPhaseBlack=false; zugPhaseBlack=true;}


                        MuhleBlack();
                        if (MuhleBlack()>Muhlzahlbefore )
                        {
                            EntfernenWhite();

                        }
                        spieleramZug='W';

        }


        else if (zugPhaseBlack==true)

        {
            for(int i=0 ; i<24; i++)
            {
                if ( (steinpositionen[i].teamzugehorigkeit=='B') &&  (KannBewegen(i)==true) )
                    {
                        SUM=SUM+1;
                    }

            }
            if (SUM==0) {GAMEOVER=true;}

            if (GAMEOVER==false )
            {

             for (int i=0;i<24 ;i++)
                    {
                        checkbefore[i]=steinpositionen[i].istMuhle;
                    }


        Muhlzahlbefore=MuhleBlack();
                do
                {

                    std::cout<<"Waehlen Sie einen schwarzen Stein zu bewegen "<<std::endl;

                    positiongewahlt=Auswahl(); }

                                                 while ( (steinpositionen[positiongewahlt].teamzugehorigkeit!='B') ||
                            (KannBewegen(positiongewahlt)==false)  ) ;

                        do
                    {
                        std::cout<<"Wo moechten Sie das Schwarzen Stein legen ?"<<std::endl;

                       positiontomove=Auswahl(); } while (  ( (positiontomove!=steinpositionen[positiongewahlt].right) && (positiontomove!=steinpositionen[positiongewahlt].left)
                            && (positiontomove!=steinpositionen[positiongewahlt].up) && (positiontomove!=steinpositionen[positiongewahlt].down)  )
                                    || (steinpositionen[positiontomove].ausgewahlt==true) );


                            steinpositionen[positiontomove].ausgewahlt=true;
                            steinpositionen[positiontomove].team=1;
                            steinpositionen[positiontomove].teamzugehorigkeit='B';
                            steinpositionen[positiongewahlt].ausgewahlt=false;
                            steinpositionen[positiongewahlt].team=0;
                            steinpositionen[positiongewahlt].teamzugehorigkeit='O';
                            NichtMuhleBlack();
                            MuhleWhite();
                            MuhleBlack();
                            PrintBoard();
                            for (int i=0; i<24 ; i++)
                            {
                                checkafter[i]=steinpositionen[i].istMuhle;
                                if(checkafter[i]!=checkbefore[i]) {different=true; break;}
                            }
                            if ( (MuhleBlack()>=Muhlzahlbefore ) && (different==true))
                        {
                            EntfernenWhite();
                        }

                        if  (countwhite()==3) {zugPhaseWhite=false ; endPhaseWhite=true;}
                        spieleramZug='W';

        }

        else {std::cout<<"GAME-OVER:Weisser Spieler hat gewonnen"<<std::endl;}








        }

            else if (endPhaseBlack==true)
            {
                if (countblack()==2) {GAMEOVER=true;}

                if (GAMEOVER==false)

                {


        Muhlzahlbefore=MuhleBlack();
                do
                {

                    std::cout<<"Waehlen Sie einen schwarzen Stein zu bewegen "<<std::endl;
                    positiongewahlt=Auswahl(); }

                            while (steinpositionen[positiongewahlt].teamzugehorigkeit!='B' );


                        do
                    {
                        std::cout<<"Wo moechten Sie das Schwarzen Stein legen ?"<<std::endl;

                       positiontomove=Auswahl(); } while   (steinpositionen[positiontomove].ausgewahlt==true) ;


                            steinpositionen[positiontomove].ausgewahlt=true;
                            steinpositionen[positiontomove].team=1;
                            steinpositionen[positiontomove].teamzugehorigkeit='B';
                            steinpositionen[positiongewahlt].ausgewahlt=false;
                            steinpositionen[positiongewahlt].team=0;
                            steinpositionen[positiongewahlt].teamzugehorigkeit='O';
                            NichtMuhleBlack();
                            MuhleWhite();
                            MuhleBlack();
                            PrintBoard();

                            if (MuhleBlack()>Muhlzahlbefore )
                        {
                            EntfernenWhite();
                        }
                }

                else {std::cout<<"GAME-OVER:Weisser Spieler hat gewonnen"<<std::endl;}


            spieleramZug='W';
            }


    }


}


int SpielBrett::countwhite () {

int s=0;
for (int i=0 ; i<24 ;i++)
{
    if (steinpositionen[i].teamzugehorigkeit=='W')
        s=s+1;
}
return s;

}

int SpielBrett::countblack () {
int s=0;
for (int i=0 ; i<24 ;i++)
{
    if (steinpositionen[i].teamzugehorigkeit=='B')
        s=s+1;
}
return s;

}

bool SpielBrett::gameover() {

return GAMEOVER;
}

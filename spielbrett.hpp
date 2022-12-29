#ifndef SPIELBRETT_HPP_INCLUDED
#define SPIELBRETT_HPP_INCLUDED
#include<array>
#include "stein.hpp"

class SpielBrett
{


public:

    SpielBrett(int TurnNumberWhite,
    int TurnNumberBlack,
bool setzPhaseWhite,
bool zugPhaseWhite,
bool endPhaseWhite,
bool setzPhaseBlack,
bool zugPhaseBlack,
bool endPhaseBlack,
bool GAMEOVER);

/** \brief printet den Board Nach jeder Aenderung des SpielBretts
 *
 * \param
 * \param
 * \return
 *
 */

    void PrintBoard();

/** \brief jedes Mal wen dieser Funktion aufgerufen wird , wird der Benutzer gefragt eine Position
            einzugeben : position muss zwischen 0 und 23 sein.
 *
 * \param
 * \param
 * \return
 *
 */


    int Auswahl();
   /** \brief Die wichtigste Funktion des Spiels: gesamte Logik ist hier implementiert :
            macht den Update des SpielBretts.
    *
    * \param
    * \param
    * \return
    *
    */



   void Update();
    /** \brief Wenn aufgerufen , wird der Benutzer gefragt : wer den Spiel startet :also White oder Black.
     *
     * \param
     * \param
     * \return
     *
     */


    void start();
  /** \brief entfernt einen weissen Stein aus dem SpielBretts
      *
      * \param
      * \param
      * \return
      *
      */


     void EntfernenWhite();
     /** \brief entfernt einen schwarzen Stein aus dem SpielBretts
      *
      * \param
      * \param
      * \return
      *
      */

     void EntfernenBlack();

     /** \brief gibt zurueck die Anzahl der weissen Steine auf dem SpielBretts.
            dient zur Ueberpruefung der Verlauf der Phasen fuer den weissen Spieler.
      *
      * \param
      * \param
      * \return Anzahl weissen Steine aus dem SpielBretts.
      *
      */
    int countwhite();

      /** \brief gibt zurueck die Anzahl der schwarzen Steine auf dem SpielBretts.
        dient zur Ueberpruefung der Verlauf der Phasen fuer den schwarzen Spieler.
      *
      * \param
      * \param
      * \return Anzahl schwarzen Steine aus dem SpielBretts.
      *
      */
    int countblack();

    /** \brief checkt ob game ist aus oder noch laueft.
     *
     * \param
     * \param
     * \return true falls Spiel ist aus und false falls Spiel laueft noch.
     *
     */

    bool gameover();
    /** \brief checkt fuer jeden weissen Stein ob er zu einer weissen MUEhle gehOErt und gibt
    zurueck Anzahl der weissen Muehlen.
    falls Stein zu einer weissen Muehle gehoert dann ist der Attribut istMuhle=true
     *
     * \param
     * \param
     * \return Anzahl der weissen Muehlen im Spielbrett.
     *
     */

    int MuhleWhite();
    /** \brief  checkt fuer jeden schwarzen Stein ob er zu einer schwarzen Muehle gehoert und gibt
    zurueck Anzahl der schwarzen Muehlen.
    falls Stein zu einer shwarzen Muehle gehoert dann ist der Attribut istMuhle=true
     *
     * \param
     * \param
     * \return Anzahl der schwarzen Muehlen im Spielbrett.
     *
     *
     */

    int MuhleBlack();
    /** \brief  checkt fuer jeden weissen Stein ob er NICHT zu einer weissen Muehle gehoert
    falls Stein NICHT zu einer schwarzen Muehle gehoert dann ist der Attribut istMuhle=false
     *
     * \param
     * \param
     * \return
     *
     */

    void NichtMuhleWhite();

    /** \brief checkt fuer jeden schwarzen Stein ob er NICHT zu einer schwarzen Muehle gehoert
    falls Stein NICHT zu einer schwarzen Muehle gehoert dann ist der Attribut istMuhle=false
     *
     * \param
     * \param
     * \return
     *
     */

    void NichtMuhleBlack();

    /** \brief checkt ob ein Stein sich bewegen kann.
     *
     * \param [in] position einer Stein
     * \param
     * \return true falls Steinkann sich bewegen und false falls Stein kann nicht bewegen
     *
     */

    bool KannBewegen(int position);








char Board [7] [7];
Stein steinpositionen [24];

private:

    int TurnNumberWhite;
    int TurnNumberBlack;
std::string spieleramZug;
bool setzPhaseWhite;
bool zugPhaseWhite;
bool endPhaseWhite;
bool setzPhaseBlack;
bool zugPhaseBlack;
bool endPhaseBlack;
bool GAMEOVER;


};


#endif // SPIELBRETT_HPP_INCLUDED

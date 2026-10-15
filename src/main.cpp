#include "Game.hpp"

wxIMPLEMENT_APP_NO_MAIN(Game);

int main(int argc, char** argv)
{
    return wxEntry(argc, argv);
}

//GAME IDEA:
// playing as a cat called fluffy
// you have 9 lives
// goal is to try and get to 0 lives but everything in the world does not want to kill you 
// becasue your a cute cat, so you have to find ways to make enemies hurt you and people 
// damage you without them knowing, or just piss off everyone into hating you, thats also an option.

// text based adventure RPG
// interact with world via user typed input string in certain format.
// if in conversation with NPC, then input becomes dialoge select isntead
// pressign escape or typing quit closes the game
// RPG character levelling with features and ability scores.
// GUI is terminal interface with top bar beign where stats are 
// dsiplayed and character portrai c=that can chnage depednign on character actions/status.
// yping world or w into the input chnages termianl area into world map (ASCII)
//typing local or l into the input chnages the terminal area into a local map if availiable (like if in a town or cavesystem/dungeon)
// typing inventory or i in the chat chnages the terminal to shwo player sinventory
// from oth maps and inventory there is a button to go back to termianl interface.
// Get the number of players per team.

#include <iostream>
using namespace std;

int main()
  {
    int teamPlayers;
    int players;
    const double MIN_PLAYERS = 2;
    const double MAX_PLAYERS = 24;

    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    // Validate the error.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
      //Explain the error.
      cout << "You should have at least " << MIN_PLAYERS
      << " but no more than "<< MAX_PLAYERS << " per team.\n";

      // Get the input again.
      cout << "How many players do you wish per team? ";
      cin >> teamPlayers;
    }
    // Get the number of players available.
    cout << "How many players are available? ";
    cin >> players;

    //Validate the input.
    while (players <=0)
    {
      // Get the input again.
      cout <<"Please enter 0 or greater: ";
      cin>> players;
    }
return 0;
}

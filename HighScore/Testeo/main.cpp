#include <iostream>
#include "../HighScore/Score.h"
#include "../HighScore/PlayerScore.h"

using namespace std;

int main()
{
	PlayerScore * play[8];
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		play[a] = new PlayerScore("hola", a, 60);
		cout << play[a]->getId();
	}
	ScoreMax(*play);
	hola();
	//delete [] play;
}
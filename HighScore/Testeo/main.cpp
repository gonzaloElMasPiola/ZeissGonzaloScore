#include <iostream>
#include "../HighScore/Score.h"
#include "../HighScore/PlayerScore.h"

using namespace std;

int main()
{
	const int tamArray = 8;
	PlayerScore * play[tamArray];
	for (int a = 0; a < tamArray; a++)
	{
		play[a] = new PlayerScore("hola", a, 60);
		cout << play[a]->getId();
	}
	ScoreMax(*play);
	hola();

	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		delete play[a];
	}
}
#include <iostream>
#include "PlayerScore.h"

using namespace std;

void hola()
{
	cout << "hola";
	cin.get();
}
float ScoreMax(PlayerScore *play)
{
	float aux = 0;
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		if(play[a].getScore() > aux) 
		{
			aux = play[a].getScore();
		}
	}
	return aux;
}
int ScoreMaxID(PlayerScore *play)
{
	int aux = 0;
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		if (play[a].getScore() > aux)
		{
			aux = play[a].getId();
		}
	}
	return aux;
}
float ScoreMin(PlayerScore *play)
{
	float aux = play[0].getScore();
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		if (play[a].getScore() < aux)
		{
			aux = play[a].getScore();
		}
	}
	return aux;
}
int ScoreMinId(PlayerScore *play)
{
	float aux = play[0].getScore();
	int aux2;
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		if (play[a].getScore() < aux)
		{
			aux2 = play[a].getId();
		}
	}
	return aux2;
}
void ResetScore(PlayerScore *play, float num)
{
	for (int a = 0; a < sizeof(play) / sizeof(*play); a++)
	{
		play[a].setScore(num);
	}
}
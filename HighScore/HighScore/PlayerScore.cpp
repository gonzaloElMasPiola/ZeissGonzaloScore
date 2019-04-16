#include "PlayerScore.h"



PlayerScore::PlayerScore(string name2, int id2, float score2)
{
	name = name2;
	id = id2;
	score = score2;
}
float PlayerScore::getScore()
{
	return score;
}
string PlayerScore::getName()
{
	return name;
}
void PlayerScore::setName(string name2)
{
	name = name2;
}
void PlayerScore::setScore(float score2)
{
	score = score2;
}
int PlayerScore::getId() 
{
	return id;
}
PlayerScore::~PlayerScore()
{
}

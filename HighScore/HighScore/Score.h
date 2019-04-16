#ifndef SCORE
#define SCORE
#include "PlayerScore.h"

void hola();
float ScoreMax(PlayerScore *play);
int ScoreMaxId(PlayerScore *play);
float ScoreMin(PlayerScore *play);
int ScoreMinId(PlayerScore *play);
void ResetScore(PlayerScore *play, float num);

#endif

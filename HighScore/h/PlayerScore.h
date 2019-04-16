#ifndef PLAAYERSCORE
#define PLAAYERSCORE
#include <iostream> 
#include <string>

using namespace std;

class PlayerScore
{
public:
	PlayerScore(string name2, int id2, float score2);
	float getScore();
	void setScore(float score2);
	string getName();
	void setName(string name2);
	int getId();
	~PlayerScore();
private:
	float score;
	int id;
	string name;
};
#endif


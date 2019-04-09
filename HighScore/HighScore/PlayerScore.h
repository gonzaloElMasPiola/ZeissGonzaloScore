#ifndef PLAAYERSCORE
#define PLAAYERSCORE
#include <iostream> 
#include <string>

using namespace std;

class PlayerScore
{
public:
	PlayerScore();
	float getScore();
	void setScore(int a);
	string getName();
	void setName(string name);
	~PlayerScore();
private:
	float a, b;
};
#endif


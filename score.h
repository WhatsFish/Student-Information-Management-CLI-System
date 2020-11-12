#ifndef SCOREH
#define SOOREH

#include <string>
using namespace std;

class score
{
public:
    score(){};
    score(string id, int yw, int sx, int yy): studenId(id), yuwen(yw), yingyu(yy) {};
    string studenId;
    int yuwen;
    int shuxue;
    int yingyu;
};

#endif
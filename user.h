#ifndef USERH
#define USERH


#include <string>
#include "score.h"

using namespace std;
class user
{
protected:
    string userName;
    string userPassword;
public:
    user();
    virtual void showMenu() = 0;
};


#endif
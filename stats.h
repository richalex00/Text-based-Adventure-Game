#ifndef STATS_H_
#define STATS_H_

#include <string>
using namespace std;

class stats
{
private:
    string name;
    int lvl;
    int exp;
    int hp;
    int chari;
    int intl;
    int con;
    int dex;
    int str;
    int wis;

public:
//Functions
    void initialize(int lvl);
    
    //setName(string name);
    //Accessors
    inline const string &getName() const { return this->name; }
    inline const int &getLvl() const { return this->lvl; }
    inline const int &getExp() const { return this->exp; }
    inline const int &getHp() const { return this->hp; }
    inline const int &getChari() const { return this->chari; }
    inline const int &getIntl() const { return this->intl; }
    inline const int &getCon() const { return this->con; }
    inline const int &getDex() const { return this->dex; }
    inline const int &getStr() const { return this->str; }
    inline const int &getWis() const { return this->wis; }
};
#endif /*STATS_H_*/

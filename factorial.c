#include<iostream>
using namespace std;
class singleton
{
public:
static singleton *getInstance();
private:
singleton();
static singleton *instance;
};

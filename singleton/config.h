#pragma once

#include <string>

#include "singleton.h"


using namespace std;

class CConfig : public CSingleton < CConfig >
{
  private:
    string *mName;

  public:
    CConfig();
    ~CConfig();


    const string& GetName();
};

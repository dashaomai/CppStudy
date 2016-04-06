#include "config.h"

CConfig::CConfig()
{
  mName = new string("江波达测试名");
}

CConfig::~CConfig()
{
  delete mName;
  mName = NULL;
}

const string& CConfig::GetName()
{
  return *mName;
}

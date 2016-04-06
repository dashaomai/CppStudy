#include <iostream>

#include "config.h"

int main(int argc, const char *argv[])
{
  CConfig *config = CConfig::GetSingletonPtr();
  cout << config->GetName() << endl;
  delete config;

  return 0;
}

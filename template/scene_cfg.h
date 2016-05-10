#pragma once

#include "parser.h"

struct SSceneTab
{
  int   iId;
};

class CSceneCfg :
  public CParser<CSceneCfg, SSceneTab>
{
  public:
    static bool Build(SSceneTab *);
    static bool Release(SSceneTab *);
};

#pragma once
#include "DataParser.h"

struct SSceneTab
{
	int	iId;
};

class CSceneCfg :
	public CDataParser<CSceneCfg, SSceneTab>
{
public:
	static bool Build(SSceneTab *data);
	static bool Release(SSceneTab *data);
};


#pragma once

#include <map>

using namespace std;

template <class TMgr, typename T>
class CDataParser
{
private:
	map<int, T*> m_map;

public:

	//virtual	bool	Build(T *data) = NULL;

	bool	Create(const char *path)
	{
		for (int i = 0, m = 10; i < m; i++)
		{
			T *data = new T;
			TMgr::Build(data);

			this->m_map[i] = data;
		}

		return true;
	}

	//virtual	bool	Release(T *data) = NULL;

	bool	Destory()
	{
		for (map<int, T*>::iterator it = m_map.begin();
		it != m_map.end(); it++)
		{
			T *data = *it;

			TMgr::Release(data);

			delete data;
		}

		this->m_map.empty();

		return true;
	}
};
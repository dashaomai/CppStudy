#pragma once

#include <map>

using namespace std;

template<class TMgr, typename T>
class CParser
{
  private:
    map<int, T*> m_map;

  public:
    bool Create()
    {
      for (int i = 0, m = 10; i<m; i++)
      {
        T *data = new T;
        TMgr::Build(data);

        m_map[i] = data;
      }

      return true;
    }

    bool Destory()
    {
      for (map<int, T*>::iterator it = m_map.begin();
          it != m_map.end(); it ++)
      {
        T *data = *it;

        TMgr::Release(data);

        delete data;
      }

      m_map.empty();

      return true;
    }
};

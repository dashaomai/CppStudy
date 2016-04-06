#pragma once

#include <iostream>

template<typename T>
class CSingleton
{
  public:
    static T*   mInstance;

  public:
    static T&   GetSingleton() {
      if (CSingleton::mInstance == NULL)
        CSingleton::mInstance = new T();

      return *CSingleton::mInstance;
    }

    static T*   GetSingletonPtr() {
      if (CSingleton::mInstance == NULL)
        CSingleton::mInstance = new T();

      return CSingleton::mInstance;
    }
};

template<typename T> T* CSingleton<T>::mInstance = NULL;

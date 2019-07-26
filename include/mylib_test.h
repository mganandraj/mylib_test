#pragma once

#include <memory>

struct IMyUtils {
  virtual int getToken() = 0;
};

__declspec(dllexport) std::unique_ptr<IMyUtils> createMyUtils();

#pragma once

#include <memory>

struct IMyUtils {
  virtual int getToken() = 0;
};

std::unique_ptr<IMyUtils> createMyUtils();

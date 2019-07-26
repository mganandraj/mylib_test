#include "include/mylib_test.h"

using namespace std;

class MyUtilsImpl : public IMyUtils {
  int getToken() override {
    return 101;
  }
};

std::unique_ptr<IMyUtils> createMyUtils() {
  return std::make_unique<MyUtilsImpl>();
}
#include <vector>
// clang++ -g3 -stdlib=libc++ -fsanitize=address -o container_overflow container_overflow.cpp
int main() {
  std::vector<int> v = { 12, 23, 34, 45 };
  v.reserve(8);
  v.data()[6] = 0;
}

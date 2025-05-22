#include <vector>
/**
 * @brief Demonstrates writing to reserved but uninitialized memory in a std::vector.
 *
 * Initializes a vector with four integers, reserves capacity for eight elements, and writes to the seventh element using direct data access. This write occurs beyond the vector's current size but within its reserved capacity, potentially leading to undefined behavior.
 *
 * @return int Exit status code.
 */
int main() {
  std::vector<int> v = { 12, 23, 34, 45 };
  v.reserve(8);
  v.data()[6] = 0;
}

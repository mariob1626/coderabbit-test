#include <vector>
/**
 * @brief Demonstrates undefined behavior by writing to a reserved but uninitialized element of a vector.
 *
 * Initializes a vector with four elements, reserves additional capacity, and writes to an index beyond the current size but within the reserved capacity, resulting in undefined behavior.
 *
 * @return int Exit status code.
 */
int main() {
  std::vector<int> v = { 12, 23, 34, 45 };
  v.reserve(8);
  v.data()[6] = 0;
}

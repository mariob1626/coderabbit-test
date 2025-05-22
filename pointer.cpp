#include <iostream>
#include <string>
#include <string_view>

/**
 * @brief Demonstrates string concatenation and string view usage.
 *
 * Initializes a string, concatenates it with a string literal, creates a string view from the result, and outputs it to standard output.
 * 
 * @return int Exit status code.
 *
 * @note This code results in undefined behavior due to creating a string view from a temporary string, which leads to a dangling reference.
 */
int main() {
  std::string s = "Hellooooooooooooooo ";
  std::string_view sv = s + "World\n";
  std::cout << sv;
}

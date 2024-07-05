#include "/content/Renderform/include/renderform/renderform.h"
int main() {
  Renderform::Formula output = Renderform::parseImage(input_file);
  // Print to stdout
  output.print();
  // Get LaTeX formula
  std::string latex = output.getLaTeX();
  // Print LaTeX formula
  std::cout << latex << std::endl;
  return 0;
}

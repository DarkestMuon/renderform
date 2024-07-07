#include "renderform.hpp"
int trial() {
  std::string input_file = "/home/abhi/Downloads/Screenshot-4210.png";
  Renderform::Formula output = Renderform::parseImage(input_file);
  // Print to stdout
  output.print();
  // Get LaTeX formula
  std::string latex = output.getLaTeX();
  // Print LaTeX formula
  std::cout << latex << std::endl;
  return 0;
}

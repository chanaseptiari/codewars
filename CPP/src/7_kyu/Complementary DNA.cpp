#include <iostream>
#include <string>

std::string DNAStrand(const std::string &dna)
{
  std::string tmp;
  for (auto &i : dna)
  {
    switch (i)
    {
    case 65:
      tmp.push_back(84);
      break;
    case 84:
      tmp.push_back(65);
      break;
    case 71:
      tmp.push_back(67);
      break;
    case 67:
      tmp.push_back(71);
      break;
    default:
      tmp.push_back(i);
    }
  }
  return tmp;
}

int main(int argc, char const *argv[])
{
  std::cout << DNAStrand("AAAA") << std::endl;  // Result ("TTTT")
  std::cout << DNAStrand("ATTGC") << std::endl; // Result ("TAACG")
  std::cout << DNAStrand("GTAT") << std::endl;  // Result ("CATA"))
  std::cout << DNAStrand("QAZ") << std::endl;   // Result ("QTZ"))
  return 0;
}

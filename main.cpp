#include <iostream>
#include <string>
int main(){
  std::string a[19];
  int n = 10;
  a[0] = "#include <iostream>";
  a[1] = "#include <string>";
  a[2] = "int main(){";
  a[3] = "  std::string a[19];";
  a[4] = "  int n = ";
  a[5] = "10";
  a[6] = ";";
  a[7] = "  if (n > 0){";
  a[8] = "    for (int i = 0; i < 4; i++) {std::cout << a[i] << std::endl;}";
  a[9] = "    a[5] = std::to_string(std::stoi(a[5]) - 1);";
  a[10] = "    for (int i = 4; i < 7; i++) {std::cout << a[i];}";
  a[11] = "    std::cout << std::endl;";
  a[12] = "    for (int i = 0; i < 19; i++) {";
  a[13] = "      std::cout << ' ' << ' ' << 'a' << '[' << i << ']' << ' ' << '=' << ' ';";
  a[14] = "      std::cout << char(34) << a[i] << char(34) << ';'  << std::endl;";
  a[15] = "    }";
  a[16] = "    for (int i = 7; i < 19; i++) {std::cout << a[i] << std::endl;}";
  a[17] = "  }";
  a[18] = "}";
  if (n > 0){
    for (int i = 0; i < 4; i++) {std::cout << a[i] << std::endl;}
    a[5] = std::to_string(std::stoi(a[5]) - 1);
    for (int i = 4; i < 7; i++) {std::cout << a[i];}
    std::cout << std::endl;
    for (int i = 0; i < 19; i++) {
      std::cout << ' ' << ' ' << 'a' << '[' << i << ']' << ' ' << '=' << ' ';
      std::cout << char(34) << a[i] << char(34) << ';'  << std::endl;
    }
    for (int i = 7; i < 19; i++) {std::cout << a[i] << std::endl;}
  }
}
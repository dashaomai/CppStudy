#include <iostream>
#include <string>

using namespace std;

#define BUFF_SIZE 128

enum InputFormat {
  IF_Int = 1,
  IF_Float,
  IF_String,
  IF_Void = 99
};

InputFormat check(const char *line)
{
  InputFormat format = IF_String;

  unsigned int length = strlen(line);

  if (length == 0 || line[0] == '\0')
    return IF_Void;
  else if ((line[0] < '0' || line[0] > '9') && (line[0] != '-' && line[0] != '.' && line[0] != ' '))
    return IF_String;
  else {
    bool isNegative = line[0] == '-';
    bool hasRadix = line[0] == '.';

    for (unsigned int i = 0; i<length; i++) {
      if (line[i] == '.') {
        if (i > 0 && hasRadix) {
          // 出现了一个以上的小数点
          return IF_String;
        } else {
          hasRadix = true;
        }
      } else if (line[i] == '-') {
        if (i > 0 && isNegative) {
          // 出现了一个以上的 - 符号
          return IF_String;
        } else {
          isNegative = true;
        }
      } else if (line[i] == ' ') {
        continue;
      } else if (i == 0 && isNegative) {
        continue;
      } else if (line[i] < '0' || line[i] > '9') {
        return IF_String;
      }
    }

    return hasRadix ? IF_Float : IF_Int;
  }
}

int main(int argc, const char *argv[])
{
  char line[BUFF_SIZE];

  for (;line[0] != '\0'; cin.getline(line, BUFF_SIZE)) {
    cout << "The input is: " << check(line) << endl;
  }

  return 0;
}

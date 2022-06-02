#include <iostream>
#include <stdio.h>
#include <stdlib.h>

const int BUFF_SIZE(256);
const std::string TERMINAL_CMD("cd ~/Documents && ls -1");

std::string Get_Stdout_Shell_Response(std::string shell_input) {

  std::string(data);
  std::FILE * stream;

  char buffer[BUFF_SIZE];
  shell_input.append(" 2>&1"); // **LEADING SPACE IS NEEDED**

  stream = popen(shell_input.c_str(), "r");
  
  if (stream) {
    while (!feof(stream))
      if (fgets(buffer, BUFF_SIZE, stream) != NULL) data.append(buffer);
    pclose(stream);
  }

  return data;
}

int main() {

  std::string shell_response(Get_Stdout_Shell_Response(TERMINAL_CMD));
  std::cout << "\t" 
                << "::LS -1:: \n" 
                        << shell_response << std::endl;
  return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>

void simpleShell() {
    std::string command;
    while (true) {
        std::cout << "TB_Shell >>";
        std::getline(std::cin, command);
        
        if (command == "exit" || command == "quit") {
            std::cout << "Exiting shell..." << std::endl;
            break;
        } else if (command.empty()) {
            continue;
        } else if (command.find("touch") == 0 || command.find("cat") == 0 || command.find("echo") == 0 ||
                   command.find("rm") == 0 || command.find("mv") == 0 || command.find("cp") == 0 ||
                   command.find("ls") == 0 || command.find("chmod") == 0 || command.find("chown") == 0) {
            system(command.c_str());
        } else {
            std::cout << "Unsupported command. Use basic file operations like touch, cat, echo, rm, mv, cp, ls, chmod, chown." << std::endl;
        }
    }
}

int main() {
    simpleShell();
    return 0;
}

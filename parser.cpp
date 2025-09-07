#include "parser.h"

namespace StringUtils {

    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
        bool foundSpace = false;

        for (char c : fullName) {
            if (!foundSpace && c != ' ') {
                *firstName += c;
            } else if (c == ' ') {
                foundSpace = true;
            } else {
                *lastName += c;
            }
        }

        if (!foundSpace) {
            *lastName = "";
        }
    }

    std::string getUsername(const std::string& email) {
        std::string username;
        for (int i = 0; i < email.size(); i++) {
            if (email[i] == '@') {
                break;
            }
            username += email[i];
        }
        return username;
    }

}


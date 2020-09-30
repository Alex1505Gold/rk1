
#include <iostream>
#include <string>
//Golenkov 8 variant
int main()
{
    std::string s;
    std::getline(std::cin, s);
    
    int bykvi[26];
    for (int i = 0; i < 26; ++i) bykvi[i] = 0;
    int vsego = 0;
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i] >= 65) && (s[i] <= 90)) {
            bykvi[s[i] - 65] ++;
            vsego++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        std::cout << char(i + 65) << ":" << bykvi[i] << " iz " << vsego << ". 4astota = " << bykvi[i] * 1.0 / vsego * 100 << std::endl;
    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'S') s[i] = 'E';
        else if (s[i] == 'T') s[i] = 'A';
        else if (s[i] == 'Z') s[i] = 'I';
        else if (s[i] == 'I') s[i] = 'R';
        else if (s[i] == 'M') s[i] = 'S';
        else if (s[i] == 'F') s[i] = 'O';
        else if (s[i] == 'X') s[i] = 'F';
        else if (s[i] == 'R') s[i] = 'T';
        else if (s[i] == 'J') s[i] = 'H';
        else if (s[i] == 'K') s[i] = 'M';
        else if (s[i] == 'G') s[i] = 'L';
        else if (s[i] == 'U') s[i] = 'N';
        else if (s[i] == 'Q') s[i] = 'Y';
        else if (s[i] == 'C') s[i] = 'D';
        else if (s[i] == 'O') s[i] = 'W';
        else if (s[i] == 'H') s[i] = 'U';
        else if (s[i] == 'Y') s[i] = 'G';
        else if (s[i] == 'V') s[i] = 'P';
        else if (s[i] == 'N') s[i] = 'C';
        else if (s[i] == 'L') s[i] = 'V';
        else if (s[i] == 'W') s[i] = 'K';
        else if (s[i] == 'P') s[i] = 'B';
        else if (s[i] == 'E') s[i] = 'Q';
        else if (s[i] == 'B') s[i] = 'X';
        else if (s[i] == 'A') s[i] = 'Z';
        else if (s[i] == 'D') s[i] = 'J';
        
    }
    std::cout << s;
    return 0;
}


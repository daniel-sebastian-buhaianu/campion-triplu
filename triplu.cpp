#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
void concat(char*, char*, char*);
int main()
{
    ifstream f("triplu.in");
    char a[5], b[5];
    f >> a >> b;
    f.close();
    char c[9];
    concat(a, b, c);
    int x = atoi(c);
    concat(b, a, c);
    int y = atoi(c);
    int t = x > y ? x*3 : y*3;
    ofstream g("triplu.out");
    g << t;
    g.close();
    return 0;
}
void concat(char* a, char* b, char* c)
{
    strcpy(c, "");
    strcat(c, a);
    strcat(c, b);
}

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() {
 
    float v1;
    int v4;
 
    srand (time(NULL));
 
  
    cout << "\n\nRango de 10000000 a -10000000:\n";
    for(int i = 1; i <= 10000000; i++){
        v4 = rand() %  + 1000000;
        cout << setw(7) << v4 << " ";
    }
 
    cout << endl;
}

#include <iostream>
using namespace std;
int miejscowosc_zamieszkania=1; int minuty=0;
int main() {
do
    {
        minuty++;
        miejscowosc_zamieszkania = miejscowosc_zamieszkania *2;
        cout << "Minelo minut:" << minuty;
        cout << " Miejscowosc zamieszkania:" << miejscowosc_zamieszkania << endl;
    }
while(miejscowosc_zamieszkania<=1000000000);
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float time;
    cout << "Enter the time of sunrise" << endl;
    cin >> time;
    int hour = int(time);
    int hourintoMinitues = hour * 60;
    int sunrisetotalMinitues = hourintoMinitues + int(time - hour);
    int brahmahourintoMinitues = 60;
    int brahmatotalMinitues = brahmahourintoMinitues + 36;
    int BrahmaMuhurta = sunrisetotalMinitues - brahmatotalMinitues;
    int BrahmaMuhurtaMinitueDuration = brahmatotalMinitues + 48;
    float BrahmaMuhurtaHour = float(BrahmaMuhurta) / 60;
    cout << fixed << setprecision(2);
    cout << "--------------------------" << endl;
    cout << "Brahma Muhurta will start at :" << BrahmaMuhurtaHour << " AM" << endl;
    return 0;
}
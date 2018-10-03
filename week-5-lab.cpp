#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int w;
    int h;

        cout << "Please Enter The Width Of The Triangle: " << endl;
        cin >> w;
        cout << endl;

        cout << "Please Enter The Height Of The Triangle: " << endl;
        cin >> h;
        cout << endl;

    int sum = w*w+h*h;
    auto side= sqrt(sum);

        ofstream output;
        output.open ("output.txt");
        output << "“Your triangle has 3 sides that are " << w << " cm, " << h << " cm and " << side << " cm. \n";
        output.close(); 


    return 0;

}
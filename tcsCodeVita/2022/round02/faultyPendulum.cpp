#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numberOfForces, initalPos;
    string initalDir;
    cin >> numberOfForces;
    cin >> initalPos >> initalDir;
    // if right take +ve and if left take -ve
    if (initalDir == "Left")
    {
        initalPos = -initalPos;
    }
    vector<int> force(numberOfForces);
    for (int i = 0; i < numberOfForces; i++)
    {
        cin >> force[i];
    }

    for (int i = 0; i < (int)force.size(); i++)
    {
        if (initalPos == 0)
        {
            cout << "Possible";
            return 0;
        }

        if (initalPos > 0)
        {
            initalPos -= force[i];
        }
        else
        {
            initalPos += force[i];
        }
    }

    cout << "Not Possible";

    return 0;
}
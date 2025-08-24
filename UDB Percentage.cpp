#include<iostream>
#include<vector>
using namespace std;

// Variables
vector<int> AllUDB;
int UDB;
int UDBvalue {1};
int Percentage {10};

int main()
{
    cout << "Pourcentage a retirer : ";
    cin >> Percentage;
    Percentage = 100/Percentage;

    while (UDBvalue != 0)
    {
        cout << "Total de l'UDB ? ( 0 pour lancer le calcul )" << endl;
        cin >> UDBvalue;
        if ( UDBvalue != 0 )
        {
            AllUDB.push_back(UDBvalue);
        }
    }

    cout << "\n";

    for (int i = 0; i < AllUDB.size(); i++)
    {
        UDB = AllUDB[i];
        UDB = UDB - ( UDB / Percentage );
        cout << "UDB n°" << i+1 << " : " << UDB << "\n";
    }
    return 0;
}
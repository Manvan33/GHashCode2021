#include <bits/stdc++.h>
using namespace std;


int main()
{
    ifstream input("a_example.txt");
    int m, t2, t3, t4;
    input >> m >> t2 >> t3 >> t4;

    vector<pair<int, vector<string>>> pizzas;

    for(int i=0; i<m; i++)
    {
        int nb_of_ingr;
        vector<string> ingredients;
        pair<int, vector<string>> temp;

        input >> nb_of_ingr;

        for(int i=0; i<nb_of_ingr; i++)
        {
            string tmp;
            input >> tmp;
            ingredients.push_back(tmp);
        }

        temp.first = nb_of_ingr;
        temp.second = ingredients;

        pizzas.push_back(temp);
    }
    
    for(int i = 0; i<m; i++)
    {
        int n = pizzas[i].first;
        cout << n;

        for(int j=0; j<n; j++)
        {
            cout << " ";
            cout << pizzas[i].second[j];
        }
        cout << "\n";
    }

    return 0;
}
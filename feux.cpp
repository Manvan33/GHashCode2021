#include <bits/stdc++.h>
using namespace std;

vector<string> inter[];
map<string,int> roads;

int tableau[]; 

int I = 222;
void addRue(int intersection, string nomDeRue) {
    inter[intersection].push_back(nomDeRue);
}

void calculer(vector<string>* inter, int I) {
    int i;
    int howManyInter = 0;
    vector<string> outpute;
    for (i = 0; i < I; i++) {
        bool uselessInter = true;
        vector<string> usefulRues;
        for (int j = 0; j < (int) inter[i].size(); j++) {
            if (roads.find(inter[i][j]) != roads.end()) {
                usefulRues.push_back(inter[i][j] + " " + to_string(roads[inter[i][j]]));
                uselessInter = false;
            }
        }
        if (!uselessInter) {
            howManyInter++;
            outpute.push_back(to_string(i));
            outpute.push_back(to_string(usefulRues.size()));
            for (vector<string>::iterator it = usefulRues.begin(); it != usefulRues.end(); it++) {
                outpute.push_back(*it);
            }
        }
    }
    cout << howManyInter;
    for (vector<string>::iterator it = outpute.begin(); it != outpute.end(); it++) {
        cout << *it;
        cout << "\n";
    }
}
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <string>

using namespace std; 

bool compare(const pair<int, string> &a, const pair<int, string> &b){
    return a.first<b.first; 
}

int main(){
   int n, i, age ; 
   string name; 
   vector<pair<int, string>> crews;
   cin >> n ; 

   for(i=0; i<n ; i++){
       cin >> age >> name ; 
       crews.push_back(make_pair(age, name));
   }
   stable_sort(crews.begin(), crews.end(), compare);

   for(i=0;i<n;i++){
    cout << crews[i].first << " " << crews[i].second << "\n";
   }
}
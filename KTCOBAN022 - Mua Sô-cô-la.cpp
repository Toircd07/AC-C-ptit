#include<iostream>
using namespace std;

int main(){
  int t ; cin >> t ;  
  while(t--){
    long long x , y , m ;
    cin >> x >> y >> m ;
    long long socola = m/x ;
    int tmp = socola ;
    while(tmp>=y){
      long long socola_doi = tmp/y ;
      socola += socola_doi ;
      tmp = socola_doi + tmp%y ;
    }
    cout << socola << endl;
  }
}
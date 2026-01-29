#include<iostream>
using namespace std;

bool isBetween(int x, int y, int z) {
    return (x<z)?(x<y && y<z):(z<y || y<x);
}
int main(){
    int t, a, b, c, d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        bool intersect=(isBetween(a, c, b)^isBetween(a, d, b)) && (isBetween(c, a, d)^isBetween(c, b, d));
        cout<<(intersect? "Yes":"No")<<endl;
    }
}
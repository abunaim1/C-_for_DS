#include<iostream> // input output stream(guccho)
#include<iomanip> //input output manipulation-->float output ke manipulate kore choto korteche
using namespace std; // namespace is a group name;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;

    //float value dhoshomiker por 2/3/.. por print krar system
    float f;
    cin>>f;
    cout<<fixed<<setprecision(2)<<f;
    return 0;
}
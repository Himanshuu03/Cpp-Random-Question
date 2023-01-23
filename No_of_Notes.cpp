

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=0;
    int note500,note100,note50=0;
    if(n >= 500){
        cout<<"No. of 500 Note ="<<n/500<<endl;
        n = n - (n/500)*500;
    }
    if(n >= 100){
        cout<<"No. of 100 Note ="<<n/100<<endl;
        n = n- (n/100)*100;
    }
    if(n >= 50){
        cout<<"No. of 50 Note ="<<n/50<<endl;
        n = n- (n/50)*50; 
    }
}

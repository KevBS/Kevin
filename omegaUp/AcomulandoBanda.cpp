#include<iostream>
using namespace std;
int main(){

int a,b,c,d,e,k;

cin>>a>>b>>c>>d>>e;
cin>>k;
int res;

if(k==1){
    res=a;

}
else if(k==2){
    res=a+b;
}
else if(k==3){
    res==a+b+c;
}
else if(k==4){
    res==a+b+c+d;
}
else if(k==5){
    res==a+b+c+d+e;
}

cout<<res<<endl;







return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Stack{
static const int size = 15;
int st[size];

int top;

public:
Stack(){
top = -1;
}

void push(int x){
if(top == size-1){
cout<<"stack overflow "<<endl;
return;
}
top = top+1;
st[top] = x;
}
};

int main(){
Stack st;
st.push(2);
st.push(3);
st.push(5);
return 0;
}

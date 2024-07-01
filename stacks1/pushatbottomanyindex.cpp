// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void print(stack<int> st)
// {
//     stack<int> st1;
//     while (st.size() > 0)
//     {
//         st1.push(st.top());
//         st.pop();
//     }
//     while (st1.size() > 0)
//     {
//         cout<<st1.top()<<" ";
//         st.push(st1.top());
//         st1.pop();
//     }

// }
// void pushAtBottom(stack<int> &st, int value)
// {
//     stack<int> st1;
//     while (st.size() > 0)
//     {
//         // cout<<st.top()<<" ";
//         st1.push(st.top());
//         st.pop();
//     }
//     st.push(value);
//     while (st1.size() > 0)
//     {
//         st.push(st1.top());
//         st1.pop();
//     }
// }

// void pushAtIndex(stack<int> &st, int index, int value)
// {
//     stack<int> st1;
//     while (st.size() > index - 1)
//     {
//         // cout<<st.top()<<" ";
//         st1.push(st.top());
//         st.pop();
//     }
//     st.push(value);
//     while (st1.size() > 0)
//     {
//         st.push(st1.top());
//         st1.pop();
//     }
// }

// int main()
// {
//     stack<int> st;
//     stack<int> temp;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     pushAtBottom(st, 80);
//     pushAtIndex(st, 2, 90);
//     print(st);

//     return 0;
// }

// push a bottom using recursion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bottom(stack<int> &st)
{
    if (st.size() == 0)
    {
        st.push(800);
        return;
    }
    int x = st.top();
    // cout << x << " ";
    st.pop();
    bottom(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x); 
 }
int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    bottom(st);
    display(st);
    cout<<endl;

    return 0;
}
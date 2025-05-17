//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class twoStacks {
private:
    int* arr;
    int size;
    int top1, top2;

public:
    // Constructor with size
    twoStacks() {
    size = 1000;
    arr = new int[size];
    top1 = -1;
    top2 = size;
}


    // Push into Stack1
    void push1(int x) {
        if (top1 + 1 < top2) {
            top1++;
            arr[top1] = x;
        }
    }

    // Push into Stack2
    void push2(int x) {
        if (top1 + 1 < top2) {
            top2--;
            arr[top2] = x;
        }
    }

    // Pop from Stack1
    int pop1() {
        if (top1 >= 0) {
            int val = arr[top1];
            top1--;
            return val;
        } else {
            return -1;
        }
    }

    // Pop from Stack2
    int pop2() {
        if (top2 < size) {  
            int val = arr[top2];
            top2++;
            return val;
        } else {
            return -1;
        }
    }
};




//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1) {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }

        cout << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
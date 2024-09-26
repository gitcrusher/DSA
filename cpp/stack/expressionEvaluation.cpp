#include<bits/stdc++.h>
using namespace std;
    class evaluateExpression{
        public:
        int stack[100];
        int top = -1;
        int evaluate(string exp){
            for (int i = 0 ; i < exp.size() ; i++){
                if(isspace(exp[i])){
                    continue;
                }
                if(isdigit(exp[i])){
                    stack[top++] = (exp[i]-'0');
                }
                else{
                int val1 = stack[top--];
                int val2 = stack[top--];
                switch(exp[i]){
                    case'+':
                        stack[++top] = val2 + val1;
                        break;
                
                    case '-':
                        stack[++top] = val2 - val1;
                        break;
                    case '*':
                        stack[++top] = val2 * val1;
                        break;
                    case '/':
                        stack[++top]= val2 / val1;
                        break;
                }
            }
        }
        return stack[top];
    }

    };
int main (){
    evaluateExpression e;
    string exp;
    cin>>exp;
    cout<<e.evaluate(exp);
return 0;
}
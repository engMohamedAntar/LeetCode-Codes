#includeiostream
#includestack
#includeunordered_set
#includevector
#includestring
using namespace std;

    int evalRPN(vectorstring& tokens) O(n) time and O(n) memory
    {
        stackint stk;
        unordered_setstring set;
        set.insert();
        set.insert();
        set.insert(+);
        set.insert(-);
        for(string sttokens)
        {
            if(set.count(st))
            {
                int value2;
                int value1;
                value2=stk.top();
                stk.pop();
                value1=stk.top();
                stk.pop();
 
                if(st==)
                    stk.push(value1value2);
                else if(st==)
                    stk.push(value1value2);
                else if(st==+)
                    stk.push(value1+value2);
                else
                    stk.push(value1-value2);
            }
            else if the st is a digit
            {
                int digit=stoi(st);
                stk.push(digit);
            }
        }
        int result=stk.top();
        return result;
    }

int main()
{
    vectorstring v {10,6,9,3,+,-11,,,,17,+,5,+};
    int reslut=evalRPN(v);
    coutResult reslutendl;
    return 0;
}

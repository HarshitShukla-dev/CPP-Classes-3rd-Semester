#include <iostream>
#include <vector>

using namespace std;

vector<int> nextsmallerindex(vector<int> &arr, int n)
{
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                ans[i] = j;
                break;
            }
        }
    }
    return ans;
}

vector<int> prevsmallerindex(vector<int> &arr, int n)
{
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                ans[i] = j;
                break;
            }
        }
    }
    return ans;
}

int largestRectangleArea(vector<int> &arr)
{
    int n = arr.size();
    vector<int> next(n);
    next = nextsmallerindex(arr, n);

    vector<int> prev(n);
    prev = prevsmallerindex(arr, n);

    int area = 0, maxarea = 0;
    for (int i = 0; i < n; i++)
    {
        int l = arr[i];
        if (next[i] != -1)
            next[i] = n;
        int b = next[i] - prev[i] - 1;
        area = l * b;
        maxarea = max(maxarea, area);
    }
    return maxarea;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Rectangle Area: " << largestRectangleArea(arr) << endl;
    return 0;
}

//_____________________

/*
Stack : It is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).
*/

// SYNTAX: stack <data_type> stack_name;

/*
It supports the following standard operations:
1. push() : Insert element at the top of the stack. Syntax: stack_name.push(value);
2. pop() : Remove element from the top of the stack.
It is not possible to remove any element from the bottom of the stack as only the top element can be accessed and removed.
Syntax: stack_name.pop();
3. top() : Access the top element of the stack. Syntax: stack_name.top();
4. empty() : Check if the stack is empty. Syntax: stack_name.empty();
5. size() : Return the size of the stack. Syntax: stack_name.size();
*/

//_____________________

// Create an array which has elements from 1 to 10. Traverse through the array and push the even elements into the stack. Now calculate the sum of those elements which are divisible by 4 present in the stack.

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    stack<int> s;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            s.push(arr[i]);
            n++;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s.top();
        if (x % 4 == 0)
        {
            sum += x;
        }
        s.pop();
    }
    cout << "Sum: " << sum << endl;

    return 0;
}

//_____________________

// Anothe example of stack

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(31);
    s.push(32);
    s.push(33);
    s.push(34);
    int n = 0;
    s.push(n);
    s.pop();
    s.pop();

    while (!s.empty())
    {
        cout << s.top() << " "; // printing top most element
        s.pop();                // removing top most element
    }

    return 0;
}
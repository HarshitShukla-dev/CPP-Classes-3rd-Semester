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
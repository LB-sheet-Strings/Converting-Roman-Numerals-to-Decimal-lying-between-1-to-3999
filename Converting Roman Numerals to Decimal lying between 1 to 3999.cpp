/*
M C M I V =  1100+900
    |            
		        
*/

#include <bits/stdc++.h>
using namespace std;
 
// This function returns value of a Roman symbol
int romanToDecimal(string str)
{
    map<char, int> m;
    m.insert({ 'I', 1 });
    m.insert({ 'V', 5 });
    m.insert({ 'X', 10 });
    m.insert({ 'L', 50 });
    m.insert({ 'C', 100 });
    m.insert({ 'D', 500 });
    m.insert({ 'M', 1000 });
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
    	cout<<"\n\ni => "<<i;
        /*If present value is less than next value,
          subtract present from next value and add the
          resultant to the sum variable.*/
        if (m[str[i]] < m[str[i + 1]])
        { cout<<"\nIf ke andar";
            sum+=m[str[i+1]]-m[str[i]];
            cout<<"\nsum => "<<sum;
            i++;  //aage wale ke saath calculation apready ho chuka hai to ek i badha diya
            continue;
        }
        sum += m[str[i]];
        cout<<"\nsum => "<<sum;
    }
    return sum;
}
 
// Driver Code
int main()
{
    // Considering inputs given are valid
    string str = "IV";
    cout << "\nInteger form of Roman Numeral is "<< romanToDecimal(str) << endl;
 
    return 0;
}

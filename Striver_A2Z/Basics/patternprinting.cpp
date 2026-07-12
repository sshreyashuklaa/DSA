/*
*****

*****

*****

*****

*****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

     for(int i = 0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
}
        */

/*
*

**

***

****

*****
*/
/*
#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the value of n: ";
cin>>n;

for(int i=0; i<n; i++)
{
    for(int j=0; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}*/

/*
1

12

123

1234

12345

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

     for(int i = 1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<j;
            }
            cout<<endl;
        }
}
        */

/*
1

22

333

4444

55555
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
}
*/

/*
*****

****

***

**

*
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<n-i;
        }
        cout<<endl;
    }
}
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The value of n ; ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    return 0;

} */


/*#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the value of i : ";
    cin>>i;
    while(i--)
    {
        cout<<"*";

    }
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{   
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
            
        }
        cout<<"\n";
        
    }
    return 0;

    
} 
*/
/*#include <iostream>
using namespace std;
int main()
{
    int n=6;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
*/

/*#include <iostream>
using namespace std; b
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=n ;j++)
        {
            if(i<=j)
            {
                cout<<"*";                 // RIGHT UPPER BORDER STAR TRIANGLE

            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i =1;i<=n;i++)
    {
        for (int j =1;j<=n;j++)           // STAIR CASE
        {
            if(j<=(n-i))
            {
                cout<<" ";
            }
            else 
            {
                cout<<"*";

            }
        }
        cout<<"\n";
    }
    return 0;
}


/*#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i=1; i<=n ; i++)
    {
        for (int j=1; j<=n ; j++)           //SQAURE STAR
        {
            cout<<"*";

        }
        cout<<"\n";
    }
    return 0;
}
*/

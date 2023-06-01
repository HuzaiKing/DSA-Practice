#include <iostream>
using namespace std;
int main()
{
    int no;
    cin >> no;
    cout << endl;
    /*
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4

    */

    //    int i=1;
    //    while(i<=no)
    //    {
    //     int j=1;
    //     while(j<=no)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //    }
    //     cout<<endl;

    /*
         4 3 2 1
         4 3 2 1
         4 3 2 1
         4 3 2 1
     */

    //    int i=1;
    //    while(i<=no)
    //    {
    //     int j=1;
    //     while(j<=no)
    //     {
    //         cout<<no-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //    }
    cout << endl;
    /*
        1 2 3 4
        5 6 7 8
        9 10 11 12
    */

    //    int i=1,value=1;
    //    while(i<=no)
    //    {
    //     int j=1;
    //     while(j<=no)
    //     {
    //         cout<<value<<" ";
    //         value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //    }
    /*
     *
     **
     ***
     ****
     *****
     */

    //    int i=1;
    //    while(i<=no)
    //    {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //    }

    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */

    // int i = 1;
    // while (i <= no)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    // int i = 1,value=1;
    // while (i <= no)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << value <<" ";
    //         j++;
    //         value++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */

//    int i = 1;
//     while (i <= no)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << i+j -1<<" ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

    /*
    1
    2 1
    3 2 1
    4 3 2 1              
    */

   int i=1;
   while(i<=no)
   {
    int j=1;
    while(j<=i)
    {
        cout<<i-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
   }
    
}
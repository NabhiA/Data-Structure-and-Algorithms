#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;


/*Ques:
D
CD
BCD
ABCD*/
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch='A'+n-i;
    //     for (int j = 1; j <=i ; j++)
    //     {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }


/*Ques:
   *
  **
 ***
**** 
*/
// for (int i = 1; i <=n; i++)
// {
//     int space=n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     for(int j=1; j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }



/*question:
* * * 
* * 
*
*/

// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j < n-i+1; j++)
//     {
//         cout<<"* ";

//     }
//     cout<<endl;
// }

/*Question:
****
***
**
*
 */



for (int i = 1; i <=n; i++)
{
    // int space;
    // while(space<i){
    //     cout<<" ";
    //     space++;

    
    for (int j = 1; j<n-i+1; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}





    
}

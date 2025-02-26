// 21 patterns 

// RULES FOR MAKING PATTERNS ---> NESTED LOOPS ---> MAINLY 2 LOOPS

// ---> 1) for the outer loop count the number of rows 
// ---> 2) for the inner loop focus on the colums & connect them somehow to the rows
// ---> 3) Print then "*" inside the inner for loop
// ---> 4) observe symmetry { OPTIONAL }

/* Pattern 1 --->
****
****
****
****
*/

#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}

/*---------------------------------------------------------------------------------------*/

/* Pattern 2
*
**
***
****
*/


#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}

/*--------------------------------------------------------------------------------------*/

/* Pattern 3
1
12
123
1234
*/


#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}

/*----------------------------------------------------------------------------------*/

/*Pattern 5
****
***
**
*
*/


#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n;i++){  //n=4
        for(int j=n;j>i;j--){ 
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}

/*----------------------------------------------------------------------------------*/

/*Pattern 6
1234
123
12
1
*/

#include <iostream>
using namespace std;

void print1(int n){
    for(int i=1; i<=n;){  //n=4
        for(int j=i;j<=n;j++){ 
            cout<<j;
        }
        n--;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}

/*-------------------------------------------------------------------------------*/

/* Pattern 7
    *
   ***
  *****
 *******   
*/


#include <iostream>
using namespace std;

void print1(int n){
    for ( int i =0;i<n;i++){
        //space
        for(int j=0;j<n-i-1){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1){
            cout<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
}
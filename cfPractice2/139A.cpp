 /*#include<iostream>
using namespace std;
int main()
{

int a[10];
int n;

    cin>>n;
    for(int i= 1; i<= 7; i++)
    cin>>a[i];


    int p= 8;
    while(n> 0){

        p = (p%8)+1;
        if(a[p]==0)
        {
            p = (p%8)+1;
            continue;
        }
        n -= a[p];
    }

    cout<< p <<endl;
    return 0;

}
*/
#include<iostream>
using namespace std;

int main(){
    const int numDays = 7;
    int numPages; scanf("%d\n", &numPages);
    int weekPages[numDays] = {0}; int total = 0;
    for(int k = 0; k < numDays; k++){scanf("%d", weekPages + k); total += weekPages[k];}
    numPages %= total;
    if(numPages == 0){numPages = total;}
    for(int k = 0; k <= numDays; k++){
        if(numPages <= 0){printf("%d\n",k); break;}
        numPages -= weekPages[k];
    }
    return 0;
}

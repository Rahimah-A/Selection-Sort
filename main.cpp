#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//bubble sort program
int main()
{
    int arrSize;
    cout<< "please enter an array size: " << endl;
    cin >> arrSize;

    int sendThis[arrSize];

    srand((unsigned)time(0));

    for(int i=0; i<arrSize; i++)
        {
            sendThis[i] = (rand()%100)+1;
        }
    int swaps =0;
    int comparisons = 0;

    for(int i= 0; i<arrSize; i++)
       {
        for(int j=arrSize-1; j>i; j--)
           {
                comparisons = comparisons+1;
                if (sendThis[j]<sendThis[j-1])
                {
                    int temp = sendThis[j-1];
                    sendThis[j-1] = sendThis[j];
                    sendThis[j]=temp;
                    swaps = swaps+1;
               }
           }
       }

    cout<<"size = "<<arrSize<<"\nswaps: "<<swaps<<"\ncomparisons: "<<comparisons;
    cout<<"\nsorted array: ";
    for(int i = 0; i<arrSize; i++)
        {
            cout<<sendThis[i]<<", ";
        }
    return 0;
}

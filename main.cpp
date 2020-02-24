#include <iostream>

using namespace std;

int search(int arr[], int x, int y)
{int i;
for (i=0; i<x; i++)
    if (arr[i]==y)
    return i;
return -1;


}
int main(void)
{
    int arr[] = {4,7, 12, 17, 21, 25};
    int y=10;
    int x =sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, x, y);
    if(result == -1) cout<<"Element doesn't exist in array";
    else
                    cout<<"Element exists at position" <<result;

                    return 0;
}

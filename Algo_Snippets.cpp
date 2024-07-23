
// #1
// Bubble sort 
/*
#include <iostream>
using namespace std;
int main()
  { int a[5] {5,2,1,0,4}; int n = sizeof(a)/sizeof(a[0]); 

  cout << "-------Before sorting-------" << endl;
    for (int i = 0; i < n; i++){ cout << a[i] << " "; }
      cout << endl;
 
 cout << "-------Bubble After sorting--------" << endl;
    for (int i=0 ; i < n; i++){ for (int j =0; j < n-1; j++)
    { if ( a[j] > a[j+1] ){swap(a[j], a[j+1] );  } } }
      //printing the array   
    for(int i = 0; i < n; i++) {  cout << a[i] << " ";  }

  return 0;
  }
*/

// #2
// Selection Sorting 
/*
#include <iostream>
using namespace std;

int main()
{
     int ss[5] {10,6,5,7,1}; int n = sizeof(ss)/sizeof(ss[0]); 

  cout << "-------Before sorting-------" << endl;
    for (int i = 0; i < n; i++){ cout << ss[i] << " "; }
      cout << endl;
 
 cout << "-------Selection After sorting--------" << endl; 

    for (int i=0 ; i < n-1 ; i++){
    for (int j=i+1; j < n; j++) {
    if(ss[i] < ss[j]) { swap(ss[i], ss[j]); } } }

   //printing the array   
    for(int i = 0; i < n; i++) {  cout << ss[i] << " ";  }

    return 0;
}
*/
/*
// Insertion sorting 
#include <iostream>
using namespace std;

template <class item>
void insertion(item is[], int n) {
    for (int i = 1; i < n; i++) {
        item key = is[i]; // Store the current element
        int j = i - 1; 
        // Move elements greater than key one position ahead
        while (j >= 0 && is[j] > key) {
            is[j + 1] = is[j]; j--; }
        // Insert key at its correct position
             is[j + 1] = key;
    }

}

int main() {
    int is[5] = {9, 5, 1, 4, 3};
    int n = sizeof(is) / sizeof(is[0]);
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {cout << is[i] << " ";}
    cout << endl;
    insertion(is, n); // Call the insertion sort function
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {cout << is[i] << " "; }
    cout << endl;

    return 0;
}
*/

// Couting Sort Code 1
/* 
#include <iostream>
using namespace std;

int main() {
    int cs[7] = {5,3,2,2,6,4,1};
    int n = sizeof(cs)/sizeof(cs[0]);

    cout << "-------Before sorting-------" << endl;
    for (int i = 0; i < n; i++){ cout << cs[i] << " "; }
    cout << endl;
    cout << "-------Counting After sorting--------" << endl;
// #1 find maximum element find
    int max_val = cs[0];
    for (int i = 1; i < n; i++){ if (cs[i] > max_val){ max_val = cs[i];} }
// #2  +1 of maximum element
    int* count = new int[max_val + 1];
// #3 Count the elements of array    
    for(int i = 0; i <= max_val; i++) { count[i] = 0;}
    for(int j = 0; j < n; j++) { count[cs[j]]++;}
// #4 update the array = indix and -1 of element       
    int index = 0;
    for(int i = 0; i <= max_val; i++) 
    {while(count[i]--) { cs[index++] = i;}}
//  -----------Priting Array----------------
    for(int i = 0; i < n; i++) {cout << cs[i] << " "; }
// cout << endl;
// delete[] count;
    return 0;
    }
*/

// Couting sort Code 2
/*
#include <iostream>
using namespace std;
#define M 7 // Maximum value in the array + 1
#define MaxN 7 // Size of the input array

void distcount(int a[], int l, int r)
{int i , j , cnt[M];
static int b[MaxN];
for(int j=0; j<M; j++) {cnt[j] = 0;}
for(int i=l; i<=r; i++) {cnt[a[i]+1]++;} 
for(int j=1; j<M; j++) {cnt[j] += cnt[j-1];}
for(int i=l; i<=r; i++) {b[cnt[a[i]]++] = a[i];}
for(int i=l; i<=r; i++) {a[i] = b[i-l]; }
}
 

int main()
{
      int cs[7] = {5,3,2,2,6,4,1};
    int n = sizeof(cs)/sizeof(cs[0]);

    cout << "-------Before sorting-------" << endl;
    for (int i = 0; i < n; i++){ cout << cs[i] << " "; }
    cout << endl;
    cout << "-------Counting After sorting--------" << endl;
    distcount(cs,0,n-1);
    
    
    
    cout << "-------Before sorting-------" << endl;
    for (int i = 0; i < n; i++){ cout << cs[i] << " "; }
    cout << endl;
        return 0;
} 
*/






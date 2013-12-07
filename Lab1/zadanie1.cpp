#include "zadanie1.h"

void sort_Vector1(int a[], int size)
{
	vector<int> v;
	int i, temp;

	cout << "Array: " << endl;
	for(i=0;i<size;i++)	{cout << a[i] << ", ";}

	cout << "\nVector: " << endl;
	for(i = 0; i < size; i++) { v.push_back(a[i]); }

	for(i=0;i<size;i++)	{cout << v[i] << ", ";}
	
	//sort vector bubble
	bool t = true;
	clock_t time_buildin;
	time_buildin = clock();
    while (t){
        t = false;
       for (i=0; i < v.size()-1; i++){
            if (v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                t = true;
            }
        }
     }
	time_buildin = clock() - time_buildin;

	cout << "\nSorted Vector1: ";
	for(i = 0; i < size; i++) {	cout << v[i] << ", ";}
	cout << "\n";

	clock_t time_std;
	time_std = clock();
	cout << "SortQsort"<<endl;
	sort(v.begin(), v.end());
	time_std = clock() - time_std;

	for(i = 0; i < size; i++) {	cout << v[i] << ", ";}

	cout<<endl<<"time_buildin Sort "<<((float) time_buildin/CLOCKS_PER_SEC)<<endl;
	cout<<endl<<"time_std Sort "<<((float) time_std/CLOCKS_PER_SEC)<<endl;
}
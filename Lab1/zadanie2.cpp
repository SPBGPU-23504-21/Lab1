#include "zadanie1.h"

void sort_Vector2(int a[], int size)
{
    vector<int> v(size);
    int c;

	cout << "Vector: ";
	for(c = 0; c < size; c++){
		v[c] = a[c];
		cout << v[c] << ", ";
	}

    cout << endl << "Sorted Vector2: ";
    // gnome sort Q(n^2)
    int sz = v.size();
    int i = 1;
    int j = 2;
    int temp;
    try {// start try
		clock_t time_buildin;
		time_buildin = clock();
        while (i < sz){
            if ( v.at(i-1) <= v.at(i)){
                i = j;
                j++;
            } 
			else {
                //swap
                temp = v.at(i);
                v.at(i) = v.at(i-1);
                v.at(i-1) = temp;
                //endswap
                i--;
                if (i == 0)	{
                    i = j;
                    j++;
                }
            }
        }
		time_buildin = clock() - time_buildin;
        for (i=0; i < size; ++i){
            cout << v.at(i) << ", ";
        }
		clock_t time_std;
	    time_std = clock();
	    sort(v.begin(), v.end());
	    time_std = clock() - time_std;
		cout << endl;
		cout<<endl<<"time_buildin Sort "<<((float) time_buildin/CLOCKS_PER_SEC)<<endl;
		cout<<endl<<"time_std Sort "<<((float) time_std/CLOCKS_PER_SEC)<<endl;
} // end try
catch(out_of_range){
cout << "error out of range" << endl;
}
}
#include "zadanie6.h"

template<typename T>T RandomElement(T r1, T r2){
	return ((r2-r1)*((T)rand()/RAND_MAX)) +r1;
}

template <class T> vector<T> SortVector(vector<T>a){
	bool t = true;
	int i;
	double temp;

	while (t){
        t = false;
        for (i=0; i < a.size() - 1; i++){
            if (a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                t = true;
            }
        }
    }
	return a;
}

template <typename T> void PrintVector(vector<T> v){
    unsigned int i;
    for (i = 0; i < v.size(); ++i){
        cout << v[i] <<", ";
    }
}

void FullRandom(){
	int size  = 100, i;
	float range1 = -1.0, range2 = 1.0;
	clock_t time_buildin, time_std;
	double *DoubleArray;

	//создание массива
	DoubleArray = (double *) calloc(size, sizeof(double));
	for(int i = 0; i < size; i++) {DoubleArray[i] = RandomElement<double>(range1, range2);}

	//создание вектора
	cout << endl << "Vector:" << endl;
	vector<double>Vector(DoubleArray, DoubleArray+size);
	PrintVector(Vector);

	//сортировка и вывод вектора
	cout << endl << "sorted Vector:" << endl;
	time_buildin = clock();
	PrintVector(SortVector(Vector));
	time_buildin = clock() - time_buildin;

	cout << "StdSort"<<endl;
	time_std = clock();
	sort(Vector.begin(), Vector.end());
	PrintVector(Vector);
	time_std = clock() - time_std;

	cout<<endl<<"time my Sort "<<((float) time_buildin/CLOCKS_PER_SEC)<<endl;
	cout<<endl<<"time std Sort "<<((float) time_std/CLOCKS_PER_SEC)<<endl;
}

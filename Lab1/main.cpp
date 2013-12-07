#include "zadanie1.h"
#include "zadanie4.h"
#include "zadanie6.h"

template<typename T>T RandomElement(T r1, T r2)
{
	return r1 + rand() % (r2-r1+1);
}

void main(){
	int size  = 100000, part, *a;
	int range1 = -100000, range2 = 100000;
	a = (int *) calloc(size, sizeof(int));

	for(int i = 0; i < size; i++) {a[i] = RandomElement<int>(range1, range2);}

	cin >> part;
	cout << "Execute part " << part << endl;
	switch(part){
		case 1:
			clock_t time_ex;
			time_ex = clock();
			cout << "Part1: " << endl;
			sort_Vector1(a, size);
			time_ex = clock() - time_ex;
			cout << "Time ex: " << time_ex;
			break;
		case 2:
			cout << "Part2: " << endl;
			sort_Vector2(a, size);
			break;
		case 3:
			cout << "Part3: " << endl;
			sort_Vector3(a, size);
			break;
		case 4:
			cout << "Part4: " << endl;
			readFromFile();
			break;
		case 5:
			cout << "Part5: " << endl;
			SaveDigits();
			break;
		case 6:
			cout << "Part6: " << endl;
			FullRandom();
			break;
	}
}
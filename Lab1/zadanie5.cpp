#include "zadanie1.h"

void SaveDigits(){
	int i = 0, n;
	vector<int>V;
	vector<int>::iterator Iter;
	bool t = true;

	while(t){
		cin >> n;
		if(n != 0){
			V.push_back(n);
			t = true;
		}
		else{
			t = false;
			cout << "Vector : ";
		}
	}
	if(V[V.size()-1] == 1){
		while (i < V.size()){
			if (fmod(V[i], 2) == 0){
				V.erase(V.begin() + i);
				i--;
			}

			i++;
		}
	}
	else if(V[V.size()-1] == 2)	{

		for(Iter = V.begin(); Iter < V.end(); Iter++){
			if (*Iter %3 == 0){
				for(int j = 0; j < 3; j++){
					Iter = V.insert(Iter+1, 1);
				}
			}
			i++;
		}
	}
	
	for (i=0; i < V.size(); i++) cout << V[i];
}
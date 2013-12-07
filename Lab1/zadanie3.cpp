#include "zadanie1.h"
/* Напишите алгоритм сортировки (любой простейший) содержимого вектора целых чисел, используя для доступа к содержимому вектора
   только итераторы. Для работы с итераторами допустимо использовать только операторы получения текущего элемента и перехода в
   следующему (подсказка, можно сохранять копию итератора указывающего на некоторый элемент).
*/
void sort_Vector3(int a[], int size)
{
   vector<int> VectorOfInt;
   vector<int>::iterator Int;
   int i, temp;
   bool flag = true;

   //create vector from int array
   for(i=0; i < size; i++){
       VectorOfInt.push_back(a[i]);
   }

   Int = VectorOfInt.begin();

   for (i=0; i < VectorOfInt.size(); ++i) {
           cout << VectorOfInt[i] << ", ";
       }

    //sort vector with iterator
   clock_t time_buildin;
   time_buildin = clock();
   while(flag){
           flag = false;
           for (Int = VectorOfInt.begin(); Int < --VectorOfInt.end(); Int++){
               if ( *Int > *(Int+1) ){
                   temp = *Int;
                   *Int = *(Int+1);
                   *(Int+1) = temp;
                   flag = true;
               }
           }
       }
   time_buildin = clock() - time_buildin;


   cout << endl << "Sorterd: " << endl;
   for (i=0; i < VectorOfInt.size(); ++i) {
           cout << VectorOfInt[i] << ", ";
       }

   clock_t time_std;
   time_std = clock();
   sort(VectorOfInt.begin(), VectorOfInt.end());
   time_std = clock() - time_std;

   cout<<endl<<"time_buildin Sort "<<((float) time_buildin/CLOCKS_PER_SEC)<<endl;
   cout<<endl<<"time_std Sort "<<((float) time_std/CLOCKS_PER_SEC)<<endl;
}

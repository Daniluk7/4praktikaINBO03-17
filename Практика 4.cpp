#include <iostream>
using namespace std;
void mademass(int *a,int b){
	a= new int[b];
}
void sort(int *mas)
{
    int b;
    for (int i = 0; i <= 12;i++)
    {
        if ((mas[i] % 2 != 0) && (mas[i + 1] % 2 == 0))
        {
            b = mas[i];
            mas[i] = mas[i + 1];
           mas[i + 1] = b;
            
        
            
        }
    }
}
int main()
{
setlocale(LC_ALL,"Russian" );
int size;
int *arr;

mademass(arr,12);
for (int i=0;i<12;i++)
{
	cout << "������� ������� ������� " << i+1 << " ";
	cin >> arr[i];
}
sort(arr);
for (int i=0;i<12;i++){
	cout << "a["<< i << "]  =  " << arr[i]  << "    ";
}	
	delete [] arr;

return 0;
}	

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size)
{
	int compSelect=0;
  for (int step = 0; step < size - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
    {
      if (array[i] < array[min_idx])
	  {
		  compSelect++;
		min_idx = i;  
	  }
    }
    swap(&array[min_idx], &array[step]);
  }
  cout<<"comparisons selection :"<<compSelect;
  cout<<"\nsorted ";
  for(int i=0;i<size;i++)
	  cout<<"\n"<<array[i];
}

void bubbleSort(int array[], int size)
{
	int compBubble=0;
  for (int step = 0; step < size - 1; ++step)
  {
    for (int i = 0; i < size - step - 1; ++i)
    {
		compBubble++;
      if (array[i] > array[i + 1])
      {
		  
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  cout<<"comparisons bubble:"<<compBubble;
  cout<<"\nsorted ";
  for(int i=0;i<size;i++)
	  cout<<"\n"<<array[i];
}


int main()
{
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  bubbleSort(data, size);
  return 0;
}

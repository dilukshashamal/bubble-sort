#include <stdio.h>
#include<stdbool.h>


void bubbleSort(int array[], int size) {
    bool flag;
    int count=0;

  for (int step = 0; step < size - 1; ++step) {
        flag=false;
    for (int i = 0; i < size - step - 1; ++i) {
      count++;

      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        flag=true;
      }
    }
    if(flag==false)
        break;
  }
  printf("%d\n",count);
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() {
  int data[] = {42,7,14,20,43};
  int size = sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}


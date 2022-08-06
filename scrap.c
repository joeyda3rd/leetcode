#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(int argc, char *argv[]){
  int testArray[4] = {2,7,11,15};
  int testTarget = 9;
  int solution[2];
  int sizeOfSolution = sizeof(solution);
  int *solPtr;
  solPtr = twoSum(&testArray,sizeof(testArray), testTarget, &sizeOfSolution);
  printf("[%d,%d]",solution[0],solution[1]);
  free(solution);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   static int solution[2] = {0,1};
   return solution;
}
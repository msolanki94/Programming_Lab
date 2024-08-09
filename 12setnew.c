#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

void displaySet(int *set, int length);
int findUnion(int arr1[], int len1, int arr2[], int len2, int result[]);
int findIntersection(int arr1[], int len1, int arr2[], int len2, int result[]);
int findDifference(int arr1[], int len1, int arr2[], int len2, int result[]);
int findSymmetricDifference(int arr1[], int len1, int arr2[], int len2, int result[]);

int main() {
    int size1, size2, resultSize;
    int resultSet[MAX_SIZE];
    
    printf("Enter the number of elements in the first set:\n");
    scanf("%d", &size1);
    int setA[size1];
    
    printf("Enter the elements of the first set:\n");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &setA[i]);
    }

    printf("Enter the number of elements in the second set:\n");
    scanf("%d", &size2);
    int setB[size2];
    
    printf("Enter the elements of the second set:\n");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &setB[i]);
    }

    resultSize = findUnion(setA, size1, setB, size2, resultSet);
    printf("Union of sets: ");
    displaySet(resultSet, resultSize);

    resultSize = findIntersection(setA, size1, setB, size2, resultSet);
    printf("Intersection of sets: ");
    displaySet(resultSet, resultSize);

    resultSize = findDifference(setA, size1, setB, size2, resultSet);
    printf("Difference (A - B): ");
    displaySet(resultSet, resultSize);

    resultSize = findDifference(setB, size2, setA, size1, resultSet);
    printf("Difference (B - A): ");
    displaySet(resultSet, resultSize);

    resultSize = findSymmetricDifference(setA, size1, setB, size2, resultSet);
    printf("Symmetric Difference of sets: ");
    displaySet(resultSet, resultSize);

    return 0;
}

int findUnion(int arr1[], int len1, int arr2[], int len2, int result[]) {
    int k = 0;
    for(int i = 0; i < len1; i++) {
        result[k++] = arr1[i];
    }
    for(int i = 0; i < len2; i++) {
        int isUnique = 1;
        for(int j = 0; j < len1; j++) {
            if(arr2[i] == arr1[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            result[k++] = arr2[i];
        }
    }
    return k;
}

int findIntersection(int arr1[], int len1, int arr2[], int len2, int result[]) {
    int k = 0;
    for(int i = 0; i < len2; i++) {
        for(int j = 0; j < len1; j++) {
            if(arr2[i] == arr1[j]) {
                result[k++] = arr2[i];
                break;
            }
        }
    }
    return k;
}

int findDifference(int arr1[], int len1, int arr2[], int len2, int result[]) {
    int k = 0;
    for(int i = 0; i < len1; i++) {
        int isDifferent = 1;
        for(int j = 0; j < len2; j++) {
            if(arr1[i] == arr2[j]) {
                isDifferent = 0;
                break;
            }
        }
        if(isDifferent) {
            result[k++] = arr1[i];
        }
    }
    return k;
}

int findSymmetricDifference(int arr1[], int len1, int arr2[], int len2, int result[]) {
    int temp1[MAX_SIZE], temp2[MAX_SIZE];
    int size1 = findDifference(arr1, len1, arr2, len2, temp1);
    int size2 = findDifference(arr2, len2, arr1, len1, temp2);
    return findUnion(temp1, size1, temp2, size2, result);
}

void displaySet(int *set, int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}


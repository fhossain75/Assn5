#ifndef SORTING_H
#define SORTING_H

class Sorting {
    private:
        int comparisons = 0;

    public:
        // Helper Functions
        int getComparison();
        void PrintArray(int* numbers);
        void Swap(int &a, int &b);
        int MinIndex(int values[ ], int start, int end);
        void ReheapDown(int values[ ], int root, int bottom);
        void Split(int* numbers, int first, int last, int& splitPoint);
        // Sort Functions
        void SelectionSort(int values[ ], int n);
        void MergeSort(int values[ ],int first, int last);
        void Merge(int values[ ], int leftFirst, int leftLast, int rightFirst, int rightLast);
        void HeapSort(int values[ ], int numValues);
        void QuickSort(int values[ ], int first, int last );
};
#endif

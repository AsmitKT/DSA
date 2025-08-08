A repository for DSA from start to finish in both C++ and Python.

---

### 1) Selection Sort

Selection sort is one of the simplest sorting algorithms. In each iteration, it picks the smallest (or largest) element from the unsorted part and places it at the correct position in the sorted part. This is similar to sorting a deck of cards in order: we start with the smallest and proceed to the largest.

**General Selection Sort Logic (Pseudocode):**
```plaintext
// A is the array to be sorted
for j = 2 to A.length
    key = A[j]
    // Insert A[j] into the sorted sequence A[1...j-1]
    i = j-1
    while i > 0 and A[i] > key
        A[i+1] = A[i]
        i = i-1
    A[i+1] = key
```

**Code Links:**
- [SelectionSort.cpp (C++)](C++/Sorting(Comparison)/SelectionSort.cpp)
- [SelectionSort.py (Python)](Python/Sorting(Comparison)/SelectionSort.py)


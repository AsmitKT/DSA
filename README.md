# DSA (C++ and Python)

## Content
- [Array](#array)
  - [Implementation](#array-implementation)
  - [Algorithms](#array-algorithms)
    - [Sorting](#sorting)
      - [Comparison](#comparison)
      - [Non-Comparison](#non-comparison)
    - [Searching](#searching)
      - [Unsorted](#unsorted)
      - [Sorted](#sorted)
    - [Sliding Window](#sliding-window)
      - [Fixed Size](#fixed-size)
      - [Variable Size](#variable-size)
      - [Two Pointer](#two-pointer)
      - [Deque Based](#deque-based)
      - [Frequency Based](#frequency-based)
      - [Circular](#circular)
    - [Prefix Sum](#prefix-sum)
    - [Kadane Algorithm](#kadane-algorithm)
    - [Rotation](#rotation)
    - [Rearrangement](#rearrangement)
    - [Miscellaneous](#miscellaneous)
  - [Derived Structures](#array-derived-structures)
    - [Stack](#stack)
    - [Queue](#queue)
    - [Deque](#deque)
    - [Heap Array](#heap-array)
- [Matrix](#matrix)
  - [Implementation](#matrix-implementation)
  - [Algorithms](#matrix-algorithms)
    - [Traversal](#traversal)
    - [Searching](#matrix-searching)
    - [Transformation](#transformation)
    - [Specialized Algos](#specialized-algos)
  - [Derived Structures](#matrix-derived-structures)
    - [Sparse Matrix](#sparse-matrix)
    - [Adjacency Matrix](#adjacency-matrix)
    - [Incidence Matrix](#incidence-matrix)
    - [Transformation Matrix](#transformation-matrix)
    - [Markov Matrix](#markov-matrix)
    - [Distance Matrix](#distance-matrix)
- [Nodes](#nodes)
  - [Implementation](#nodes-implementation)
  - [Derived Structures](#nodes-derived-structures)
    - [Linked List](#linked-list)
    - [Tree](#tree)
    - [Graph](#graph)
- [Hashes](#hashes)
  - [Implementation](#hashes-implementation)
  - [Hash Functions](#hash-functions)
    - [Division Method](#division-method)
    - [Multiplication Method](#multiplication-method)
    - [Mid Square Method](#mid-square-method)
    - [Folding Method](#folding-method)
    - [Universal Hashing](#universal-hashing)
    - [String Hashing](#string-hashing)
  - [Collision Resolution](#collision-resolution)
    - [Separate Chaining](#separate-chaining)
    - [Linear Probing](#linear-probing)
    - [Quadratic Probing](#quadratic-probing)
    - [Double Hashing](#double-hashing)
    - [Cuckoo Hashing](#cuckoo-hashing)
  - [Derived Structures](#hashes-derived-structures)
    - [Bloom Filter](#bloom-filter)
    - [Perfect Hashing](#perfect-hashing)
    - [Extendible Hashing](#extendible-hashing)
    - [Hopscotch Hashing](#hopscotch-hashing)
- [Bit](#bit)
  - [Implementation](#bit-implementation)
  - [Algorithms](#bit-algorithms)
- [String](#string)
  - [Implementation](#string-implementation)
  - [Algorithms](#string-algorithms)
- [Number_Theory](#number_theory)
  - [Implementation](#number-theory-implementation)
  - [Algorithms](#number-theory-algorithms)
- [Programming_Paradigms](#programming_paradigms)
  - [Greedy](#greedy)
    - [Implementation](#greedy-implementation)
    - [Algorithms](#greedy-algorithms)
  - [Divide and Conquer](#divide-and-conquer)
    - [Implementation](#dac-implementation)
    - [Algorithms](#dac-algorithms)
  - [Backtracking](#backtracking)
    - [Implementation](#backtracking-implementation)
    - [Algorithms](#backtracking-algorithms)
  - [Dynamic Programming](#dynamic-programming)
    - [Implementation](#dp-implementation)
    - [Algorithms](#dp-algorithms)

---

## Array

Arrays are contiguous lists of elements that can be indexed in O(1) time. Access can be direct via index or sequential via pointer/iterator.

### Array: Implementation

- **C++**
  - [`c_styles_array.cpp`](Arrays/Implementation/C%2B%2B/c_styles_array.cpp)
  - [`array_stl.cpp`](Arrays/Implementation/C%2B%2B/array_stl.cpp)
  - [`vector.cpp`](Arrays/Implementation/C%2B%2B/vector.cpp)
- **Python**
  - [`array_list.py`](Arrays/Implementation/Python/array_list.py)
  - [`array_module.py`](Arrays/Implementation/Python/array_module.py)
  - [`array_numpy.py`](Arrays/Implementation/Python/array_numpy.py)

---

### Array: Algorithms

#### Sorting

##### Comparison

###### Bubble Sort

**Explanation**\
Repeatedly swap adjacent out-of-order elements; largest elements “bubble” to the end each pass.

- Time: O(n²) average/worst; O(n) best (already sorted with early exit)
- Space: O(1)

**Pseudo Code**

```text
function bubble_sort(A):
    n ← length(A)
    for i from 0 to n-2:
        swapped ← false
        for j from 0 to n-2-i:
            if A[j] > A[j+1]:
                swap A[j], A[j+1]
                swapped ← true
        if not swapped: break
```

**Code**

- C++: [`bubble_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/bubble_sort.cpp)
- Python: [`bubble_sort.py`](Arrays/Algorithms/Sorting/Comparison/bubble_sort.py)

---

###### Selection Sort

**Explanation**\
Select the minimum in the unsorted suffix and place it at the boundary.

- Time: O(n²)
- Space: O(1)

**Pseudo Code**

```text
function selection_sort(A):
    n ← length(A)
    for i from 0 to n-2:
        m ← i
        for j from i+1 to n-1:
            if A[j] < A[m]: m ← j
        swap A[i], A[m]
```

**Code**

- C++: [`selection_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/selection_sort.cpp)
- Python: [`selection_sort.py`](Arrays/Algorithms/Sorting/Comparison/selection_sort.py)

---

###### Insertion Sort

**Explanation**\
Builds the sorted prefix by inserting the next element into position.

- Time: O(n²) average/worst; O(n) best (nearly sorted)
- Space: O(1)

**Pseudo Code**

```text
function insertion_sort(A):
    for i from 1 to length(A)-1:
        x ← A[i]
        j ← i-1
        while j ≥ 0 and A[j] > x:
            A[j+1] ← A[j]
            j ← j-1
        A[j+1] ← x
```

**Code**

- C++: [`insertion_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/insertion_sort.cpp)
- Python: [`insertion_sort.py`](Arrays/Algorithms/Sorting/Comparison/insertion_sort.py)

---

###### Shell Sort

**Explanation**\
Generalizes insertion sort by comparing elements `gap` apart; gap decreases to 1.

- Time: depends on gap; typical \~O(n^(3/2)) to O(n log² n)
- Space: O(1)

**Pseudo Code**

```text
function shell_sort(A):
    gaps ← sequence(n)  # e.g., n//2, ... , 1
    for gap in gaps:
        for i from gap to n-1:
            x ← A[i]
            j ← i
            while j ≥ gap and A[j-gap] > x:
                A[j] ← A[j-gap]
                j ← j-gap
            A[j] ← x
```

**Code**

- C++: [`shell_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/shell_sort.cpp)
- Python: [`shell_sort.py`](Arrays/Algorithms/Sorting/Comparison/shell_sort.py)

---

###### Merge Sort

**Explanation**\
Divide array into halves, sort each recursively, and merge sorted halves.

- Time: O(n log n)
- Space: O(n) (auxiliary)

**Pseudo Code**

```text
function merge_sort(A, l, r):
    if l ≥ r: return
    m ← (l + r)//2
    merge_sort(A, l, m)
    merge_sort(A, m+1, r)
    merge(A, l, m, r)
```

**Code**

- C++: [`merge_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/merge_sort.cpp)
- Python: [`merge_sort.py`](Arrays/Algorithms/Sorting/Comparison/merge_sort.py)

---

###### Quick Sort

**Explanation**\
Partition around a pivot so smaller elements go left, larger right; recurse.

- Time: O(n log n) average; O(n²) worst (bad pivots)
- Space: O(log n) average recursion

**Pseudo Code**

```text
function quick_sort(A, l, r):
    if l ≥ r: return
    p ← partition(A, l, r)  # lomuto/hoare
    quick_sort(A, l, p-1)
    quick_sort(A, p+1, r)
```

**Code**

- C++: [`quick_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/quick_sort.cpp)
- Python: [`quick_sort.py`](Arrays/Algorithms/Sorting/Comparison/quick_sort.py)

---

###### Heap Sort

**Explanation**\
Build a max-heap, repeatedly extract max to end.

- Time: O(n log n)
- Space: O(1) in-place (array heap)

**Pseudo Code**

```text
function heap_sort(A):
    build_max_heap(A)
    for end from n-1 downto 1:
        swap A[0], A[end]
        sift_down(A, 0, end)
```

**Code**

- C++: [`heap_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/heap_sort.cpp)
- Python: [`heap_sort.py`](Arrays/Algorithms/Sorting/Comparison/heap_sort.py)

---

###### Tim Sort (intro: merge + runs)

**Explanation**\
Python’s/Java’s hybrid: sort small runs with insertion, then merge runs.

- Time: O(n log n) worst; O(n) on runs
- Space: O(n)

**Pseudo Code**

```text
function tim_sort(A):
    runs ← find_runs(A)
    for each run: insertion_sort(run)
    merge_runs_by_size_invariant(runs)
```

**Code**

- C++: [`tim_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/tim_sort.cpp)
- Python: [`tim_sort.py`](Arrays/Algorithms/Sorting/Comparison/tim_sort.py)

---

###### Intro Sort (quicksort + heapsort + insert)

**Explanation**\
Start with quicksort; if depth exceeds limit, switch to heapsort; small partitions via insertion sort.

- Time: O(n log n) worst-bounded
- Space: O(log n)

**Pseudo Code**

```text
function introsort(A):
    maxdepth ← ⌊log₂ n⌋ * 2
    introsort_util(A, 0, n-1, maxdepth)
```

**Code**

- C++: [`intro_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/intro_sort.cpp)
- Python: [`intro_sort.py`](Arrays/Algorithms/Sorting/Comparison/intro_sort.py)

---

##### Non-Comparison

###### Counting Sort

**Explanation**\
Count frequency of keys in a small integer range; prefix-sum counts to positions.

- Time: O(n + k)
- Space: O(n + k)

**Pseudo Code**

```text
function counting_sort(A, k):
    C[0..k] ← 0
    for x in A: C[x] ← C[x] + 1
    for i from 1..k: C[i] ← C[i] + C[i-1]
    for x in A (right-to-left):
        B[C[x]-1] ← x; C[x] ← C[x]-1
    return B
```

**Code**

- C++: [`counting_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/counting_sort.cpp)
- Python: [`counting_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/counting_sort.py)

---

###### Radix Sort (LSD)

**Explanation**\
Stable sort by least-significant digit upward using counting sort per digit.

- Time: O(d·(n + b)) where `d` digits, base `b`
- Space: O(n + b)

**Pseudo Code**

```text
function radix_lsd(A, base):
    exp ← 1
    while max(A)/exp ≥ 1:
        A ← counting_sort_by_digit(A, base, exp)
        exp ← exp * base
```

**Code**

- C++: [`radix_sort_lsd.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_lsd.cpp)
- Python: [`radix_sort_lsd.py`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_lsd.py)

---

###### Radix Sort (MSD)

**Explanation**\
Sort by most-significant digit first, recursively bucket sublists.

- Time: O(n·d) typical
- Space: O(n + buckets)

**Pseudo Code**

```text
function radix_msd(A, base, pos):
    if pos beyond last digit or |A| ≤ 1: return A
    buckets ← distribute_by_digit(A, base, pos)
    for each b in buckets: b ← radix_msd(b, base, pos+1)
    return concat(buckets in order)
```

**Code**

- C++: [`radix_sort_msd.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_msd.cpp)
- Python: [`radix_sort_msd.py`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_msd.py)

---

###### Bucket Sort

**Explanation**\
Map values (usually uniform [0,1)) into buckets, sort each (e.g., insertion), then concatenate.

- Time: O(n) average; O(n²) worst if buckets skew
- Space: O(n)

**Pseudo Code**

```text
function bucket_sort(A, num_buckets):
    buckets ← array of empty lists
    for x in A: buckets[hash(x)] .append(x)
    for b in buckets: insertion_sort(b)
    return concat(buckets)
```

**Code**

- C++: [`bucket_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/bucket_sort.cpp)
- Python: [`bucket_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/bucket_sort.py)

---

###### Pigeonhole Sort

**Explanation**\
Place each key into a “hole” based on value offset; read out holes in order.

- Time: O(n + k)
- Space: O(k)

**Pseudo Code**

```text
function pigeonhole_sort(A):
    mn, mx ← min(A), max(A)
    k ← mx - mn + 1
    holes[0..k-1] lists
    for x in A: holes[x - mn].append(x)
    return concat(holes in index order)
```

**Code**

- C++: [`pigeonhole_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/pigeonhole_sort.cpp)
- Python: [`pigeonhole_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/pigeonhole_sort.py)

---

###### Flash Sort (distribution based)

**Explanation**\
Classify into classes using linear transformation, permute elements to near-final spots, finish with insertion sort.

- Time: \~O(n) average; O(n²) worst
- Space: O(k) classes

**Pseudo Code**

```text
function flash_sort(A):
    compute classes L[0..m-1] by mapping values
    permute elements into approximate positions
    insertion_sort(A)
```

**Code**

- C++: [`flash_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/flash_sort.cpp)
- Python: [`flash_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/flash_sort.py)

---

###### American Flag Sort (in-place MSD radix)

**Explanation**\
In-place MSD radix for integers/strings using counting and region partitioning per digit/byte.

- Time: O(n·d)
- Space: O(1) extra (in-place bookkeeping)

**Pseudo Code**

```text
function american_flag(A, digit):
    if digit beyond end: return
    count buckets, compute offsets
    permute in-place so buckets form contiguous regions
    for each region: american_flag(region, digit+1)
```

**Code**

- C++: [`american_flag_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/american_flag_sort.cpp)
- Python: [`american_flag_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/american_flag_sort.py)

---

###### Postman Sort (postal/radix by characters)

**Explanation**\
Stable LSD-like sorting of strings by character positions.

- Time: O(L·(n + Σ)) for max length L and alphabet Σ
- Space: O(n + Σ)

**Pseudo Code**

```text
function postman_sort(S):
    for pos from last to first:
        S ← counting_sort_by_char(S, pos)
```

**Code**

- C++: [`postman_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/postman_sort.cpp)
- Python: [`postman_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/postman_sort.py)

---

#### Searching

##### Unsorted

###### Linear Search

**Explanation**\
Scan sequentially until found or exhausted.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function linear_search(A, x):
    for i from 0..n-1:
        if A[i] == x: return i
    return -1
```

**Code**

- C++: [`linear_search.cpp`](Arrays/Algorithms/Searching/Unsorted/linear_search.cpp)
- Python: [`linear_search.py`](Arrays/Algorithms/Searching/Unsorted/linear_search.py)

---

###### Sentinel Linear Search

**Explanation**\
Place target as sentinel at end to avoid bounds checks inside loop.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function sentinel_linear_search(A, x):
    n ← length(A)
    last ← A[n-1]; A[n-1] ← x
    i ← 0
    while A[i] ≠ x: i ← i+1
    A[n-1] ← last
    if i < n-1 or last == x: return i
    return -1
```

**Code**

- C++: [`sentinel_linear_search.cpp`](Arrays/Algorithms/Searching/Unsorted/sentinel_linear_search.cpp)
- Python: [`sentinel_linear_search.py`](Arrays/Algorithms/Searching/Unsorted/sentinel_linear_search.py)

---

###### Sublist/Subarray Search

**Explanation**\
Find a smaller array `B` inside `A` by checking each start; often optimized with rolling hash (see KMP/Rabin-Karp in String).

- Time: O((n−m+1)·m) naive
- Space: O(1)

**Pseudo Code**

```text
function subarray_search(A, B):
    for i from 0..n-m:
        ok ← true
        for j from 0..m-1:
            if A[i+j] ≠ B[j]: ok ← false; break
        if ok: return i
    return -1
```

**Code**

- C++: [`sublist_subarray_search.cpp`](Arrays/Algorithms/Searching/Unsorted/sublist_subarray_search.cpp)
- Python: [`sublist_subarray_search.py`](Arrays/Algorithms/Searching/Unsorted/sublist_subarray_search.py)

---

###### Two-Pointer Search (pair sum example)

**Explanation**\
Move two indices based on condition to find a relation (e.g., `A[i]+A[j]==k`). For unsorted arrays, typically combine with hashing; as listed here, it’s a pattern demo.

- Time: O(n) per scan (if applicable)
- Space: O(1)

**Pseudo Code**

```text
function two_pointer_pair_sum(A, k):
    sort A   # if allowed
    i ← 0; j ← n-1
    while i < j:
        s ← A[i] + A[j]
        if s == k: return (i, j)
        if s < k: i ← i+1 else: j ← j-1
    return (-1, -1)
```

**Code**

- C++: [`two_poiner_search.cpp`](Arrays/Algorithms/Searching/Unsorted/two_poiner_search.cpp)
- Python: [`two_poiner_search.py`](Arrays/Algorithms/Searching/Unsorted/two_poiner_search.py)

---

###### Self-Organizing Search (move-to-front)

**Explanation**\
On successful search, move found element toward the front to exploit locality.

- Time: Amortized can improve with non-uniform access
- Space: O(1)

**Pseudo Code**

```text
function self_organizing_search(A, x):
    for i in 0..n-1:
        if A[i] == x:
            while i > 0: swap A[i], A[i-1]; i ← i-1
            return 0  # now at front
    return -1
```

**Code**

- C++: [`self_organizing_search.cpp`](Arrays/Algorithms/Searching/Unsorted/self_organizing_search.cpp)
- Python: [`self_organizing_search.py`](Arrays/Algorithms/Searching/Unsorted/self_organizing_search.py)

---

##### Sorted

###### Binary Iterative

**Explanation**\
Binary search on a **sorted** array repeatedly halves the search interval. Compare the middle element to the target and discard the half that cannot contain it. Iterative form uses a loop and two pointers `lo` and `hi`.

- Time: O(log n) comparisons
- Space: O(1) auxiliary

**Pseudo Code**

```text
function binary_search_iterative(A, target):
    lo ← 0
    hi ← length(A) - 1
    while lo ≤ hi:
        mid ← lo + (hi - lo) // 2   // avoids overflow
        if A[mid] == target:
            return mid
        else if A[mid] < target:
            lo ← mid + 1
        else:
            hi ← mid - 1
    return -1  // not found
```

**Code**

- C++: [`binary_iterative_search.cpp`](Arrays/Algorithms/Searching/Sorted/binary_iterative_search.cpp)
- Python: [`binary_iterative_search.py`](Arrays/Algorithms/Searching/Sorted/binary_iterative_search.py)

---

###### Binary Recursive

**Explanation**\
Same idea as iterative, but implemented via recursion: at each call, recurse into the half that can contain the target until the base case (`lo > hi`) or a match.

- Time: O(log n) comparisons
- Space: O(log n) due to recursion stack

**Pseudo Code**

```text
function binary_search_recursive(A, target, lo, hi):
    if lo > hi:
        return -1
    mid ← lo + (hi - lo) // 2
    if A[mid] == target:
        return mid
    else if A[mid] < target:
        return binary_search_recursive(A, target, mid + 1, hi)
    else:
        return binary_search_recursive(A, target, lo, mid - 1)
```

**Code**

- C++: [`binary_recursive_search.cpp`](Arrays/Algorithms/Searching/Sorted/binary_recursive_search.cpp)
- Python: [`binary_recursive_search.py`](Arrays/Algorithms/Searching/Sorted/binary_recursive_search.py)

---

###### Ternary Search

**Explanation**\
For unimodal functions/arrays (strictly increasing then decreasing), split range into three parts and keep the one that can contain the optimum.

- Time: O(log₃ n) comparisons
- Space: O(1) iterative

**Pseudo Code**

```text
function ternary_search(A, lo, hi):
    while hi - lo > 2:
        m1 ← lo + (hi - lo)/3
        m2 ← hi - (hi - lo)/3
        if A[m1] < A[m2]: lo ← m1 else: hi ← m2
    return argmax in [lo..hi]
```

**Code**

- C++: [`ternary_search.cpp`](Arrays/Algorithms/Searching/Sorted/ternary_search.cpp)
- Python: [`ternary_search.py`](Arrays/Algorithms/Searching/Sorted/ternary_search.py)

---

###### Fibonacci Search

**Explanation**\
Use Fibonacci numbers to probe indices, mimicking binary search splits with F(k-1) and F(k-2).

- Time: O(log n)
- Space: O(1)

**Pseudo Code**

```text
function fibonacci_search(A, x):
    fibM2 ← 0; fibM1 ← 1; fibM ← fibM1 + fibM2
    while fibM < n: (update sequence)
    offset ← -1
    while fibM > 1:
        i ← min(offset + fibM2, n-1)
        if A[i] < x: (shift window right)
        elif A[i] > x: (shift left)
        else: return i
    check last
    return -1
```

**Code**

- C++: [`fibonacci_search.cpp`](Arrays/Algorithms/Searching/Sorted/fibonacci_search.cpp)
- Python: [`fibonacci_search.py`](Arrays/Algorithms/Searching/Sorted/fibonacci_search.py)

---

###### Jump Search

**Explanation**\
Jump ahead in fixed steps √n, then linear scan within the identified block.

- Time: O(√n)
- Space: O(1)

**Pseudo Code**

```text
function jump_search(A, x):
    step ← ⌊√n⌋; prev ← 0
    while A[min(step,n)-1] < x: prev ← step; step ← step + ⌊√n⌋
    for i from prev to min(step,n)-1:
        if A[i] == x: return i
    return -1
```

**Code**

- C++: [`jump_search.cpp`](Arrays/Algorithms/Searching/Sorted/jump_search.cpp)
- Python: [`jump_search.py`](Arrays/Algorithms/Searching/Sorted/jump_search.py)

---

###### Exponential Search

**Explanation**\
Find range by doubling (1,2,4,8,…) then binary search within that range.

- Time: O(log n)
- Space: O(1)

**Pseudo Code**

```text
function exponential_search(A, x):
    if A[0] == x: return 0
    i ← 1
    while i < n and A[i] ≤ x: i ← i*2
    return binary_search(A, x, i/2, min(i, n-1))
```

**Code**

- C++: [`exponential_search.cpp`](Arrays/Algorithms/Searching/Sorted/exponential_search.cpp)
- Python: [`exponential_search.py`](Arrays/Algorithms/Searching/Sorted/exponential_search.py)

---

###### Interpolation Search

**Explanation**\
For uniformly distributed sorted keys, probe with linear interpolation of value.

- Time: O(log log n) average; O(n) worst
- Space: O(1)

**Pseudo Code**

```text
function interpolation_search(A, x):
    lo ← 0; hi ← n-1
    while lo ≤ hi and x ≥ A[lo] and x ≤ A[hi]:
        pos ← lo + (x - A[lo])*(hi - lo)/(A[hi] - A[lo])
        if A[pos] == x: return pos
        if A[pos] < x: lo ← pos + 1 else: hi ← pos - 1
    return -1
```

**Code**

- C++: [`interpolation_search.cpp`](Arrays/Algorithms/Searching/Sorted/interpolation_search.cpp)
- Python: [`interpolation_search.py`](Arrays/Algorithms/Searching/Sorted/interpolation_search.py)

---

###### Block Search (indexed/segmented)

**Explanation**\
Keep an index of blocks (e.g., block max). Search index, then linear scan within block.

- Time: O(b + n/b) with block size b (optimal b≈√n ⇒ O(√n))
- Space: O(n/b) index

**Pseudo Code**

```text
function block_search(A, index):
    block ← find_block(index, target)
    return linear_search_within_block(A, block)
```

**Code**

- C++: [`block_search.cpp`](Arrays/Algorithms/Searching/Sorted/block_search.cpp)
- Python: [`block_search.py`](Arrays/Algorithms/Searching/Sorted/block_search.py)

---

###### Meta Binary Search (bit-by-bit)

**Explanation**\
Decide each bit of the answer by testing midpoints formed by bit masks (useful for monotonic predicates).

- Time: O(log U) for answer range U
- Space: O(1)

**Pseudo Code**

```text
function meta_binary(low, high, ok):
    ans ← high
    while low ≤ high:
        mid ← (low + high)//2
        if ok(mid): ans ← mid; high ← mid-1 else: low ← mid+1
    return ans
```

**Code**

- C++: [`meta_binary_search.cpp`](Arrays/Algorithms/Searching/Sorted/meta_binary_search.cpp)
- Python: [`meta_binary_search.py`](Arrays/Algorithms/Searching/Sorted/meta_binary_search.py)

---

#### Sliding Window

##### Fixed Size

###### Max Sum Subarray of Size K

**Explanation**\
Maintain sum of current window; slide by adding next and removing first.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function max_sum_k(A, k):
    sum ← first k
    best ← sum
    for i from k..n-1:
        sum ← sum + A[i] - A[i-k]
        best ← max(best, sum)
    return best
```

**Code**

- C++: [`max_sum_subarray_of_size_k.cpp`](Arrays/Algorithms/Sliding_Window/Fixed_Size/max_sum_subarray_of_size_k.cpp)
- Python: [`max_sum_subarray_of_size_k.py`](Arrays/Algorithms/Sliding_Window/Fixed_Size/max_sum_subarray_of_size_k.py)

---

###### Average of Subarrays of Size K

**Explanation**\
Same as above, divide each window sum by k.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function averages_k(A, k):
    sum ← first k
    out ← [sum/k]
    for i from k..n-1:
        sum ← sum + A[i] - A[i-k]
        append(out, sum/k)
    return out
```

**Code**

- C++: [`average_of_subarrays_of_size_k.cpp`](Arrays/Algorithms/Sliding_Window/Fixed_Size/average_of_subarrays_of_size_k.cpp)
- Python: [`average_of_subarrays_of_size_k.py`](Arrays/Algorithms/Sliding_Window/Fixed_Size/average_of_subarrays_of_size_k.py)

---

##### Variable Size

###### Longest Subarray Sum ≤ K

**Explanation**\
Expand right; while sum > K, shrink left; track max length.

- Time: O(n) for non-negative arrays
- Space: O(1)

**Pseudo Code**

```text
function longest_at_most_k(A, K):
    l ← 0; sum ← 0; best ← 0
    for r in 0..n-1:
        sum += A[r]
        while sum > K: sum -= A[l]; l += 1
        best ← max(best, r-l+1)
    return best
```

**Code**

- C++: [`longest_subarray_sum_at_most_k.cpp`](Arrays/Algorithms/Sliding_Window/Variable_Size/longest_subarray_sum_at_most_k.cpp)
- Python: [`longest_subarray_sum_at_most_k.py`](Arrays/Algorithms/Sliding_Window/Variable_Size/longest_subarray_sum_at_most_k.py)

---

###### Smallest Subarray with Sum > K

**Explanation**\
Expand right; shrink left while sum > K; track min length.

- Time: O(n) (positive numbers)
- Space: O(1)

**Pseudo Code**

```text
function smallest_gt_k(A, K):
    l ← 0; sum ← 0; best ← ∞
    for r in 0..n-1:
        sum += A[r]
        while sum > K:
            best ← min(best, r-l+1)
            sum -= A[l]; l += 1
    return best if best ≠ ∞ else 0
```

**Code**

- C++: [`smallest_subarray_with_sum_greater_than_k.cpp`](Arrays/Algorithms/Sliding_Window/Variable_Size/smallest_subarray_with_sum_greater_than_k.cpp)
- Python: [`smallest_subarray_with_sum_greater_than_k.py`](Arrays/Algorithms/Sliding_Window/Variable_Size/smallest_subarray_with_sum_greater_than_k.py)

---

##### Two Pointer

###### Longest Substring with K Distinct

**Explanation**\
Expand right, count chars; if distinct > K, move left while decreasing counts.

- Time: O(n)
- Space: O(Σ)

**Pseudo Code**

```text
function longest_k_distinct(s, K):
    l ← 0; best ← 0; cnt ← map()
    for r in 0..n-1:
        cnt[s[r]]++
        while |cnt| > K: cnt[s[l]]--; if cnt[s[l]]==0: erase; l++
        best ← max(best, r-l+1)
    return best
```

**Code**

- C++: [`longest_substring_k_distinct.cpp`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_k_distinct.cpp)
- Python: [`longest_substring_k_distinct.py`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_k_distinct.py)

---

###### Longest Substring Without Repeating Characters

**Explanation**\
Track last index of each char; move `l` past duplicates.

- Time: O(n)
- Space: O(Σ)

**Pseudo Code**

```text
function longest_unique(s):
    last ← map(); l ← 0; best ← 0
    for r in 0..n-1:
        if s[r] in last and last[s[r]] ≥ l: l ← last[s[r]] + 1
        last[s[r]] ← r
        best ← max(best, r-l+1)
    return best
```

**Code**

- C++: [`longest_substring_without_repeating_chars.cpp`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_without_repeating_chars.cpp)
- Python: [`longest_substring_without_repeating_chars.py`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_without_repeating_chars.py)

---

##### Deque Based

###### Sliding Window Maximum

**Explanation**\
Maintain deque of indices with decreasing values; front is max.

- Time: O(n)
- Space: O(k)

**Pseudo Code**

```text
function max_sliding_window(A, k):
    dq ← empty
    for i in 0..n-1:
        while dq not empty and dq.front() ≤ i-k: pop_front
        while dq not empty and A[dq.back()] ≤ A[i]: pop_back
        push_back(i)
        if i ≥ k-1: output A[dq.front()]
```

**Code**

- C++: [`sliding_window_maximum.cpp`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_maximum.cpp)
- Python: [`sliding_window_maximum.py`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_maximum.py)

---

###### Sliding Window Minimum

**Explanation**\
Same as maximum, but maintain increasing deque.

- Time: O(n)
- Space: O(k)

**Pseudo Code**

```text
function min_sliding_window(A, k):
    dq ← empty
    for i in 0..n-1:
        while dq not empty and dq.front() ≤ i-k: pop_front
        while dq not empty and A[dq.back()] ≥ A[i]: pop_back
        push_back(i)
        if i ≥ k-1: output A[dq.front()]
```

**Code**

- C++: [`sliding_window_minimum.cpp`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_minimum.cpp)
- Python: [`sliding_window_minimum.py`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_minimum.py)

---

##### Frequency Based

###### Find All Anagrams in String

**Explanation**\
Count chars in window and compare to target counts.

- Time: O(n)
- Space: O(Σ)

**Pseudo Code**

```text
function find_anagrams(s, p):
    need ← count(p); have ← zeros
    l ← 0; out ← []
    for r in 0..n-1:
        have[s[r]]++
        while r-l+1 > |p|: have[s[l]]--; l++
        if have == need: out.append(l)
    return out
```

**Code**

- C++: [`find_all_anagrams_in_string.cpp`](Arrays/Algorithms/Sliding_Window/Frequency_Based/find_all_anagrams_in_string.cpp)
- Python: [`find_all_anagrams_in_string.py`](Arrays/Algorithms/Sliding_Window/Frequency_Based/find_all_anagrams_in_string.py)

---

###### Count Substrings with Constraints

**Explanation**\
Generic pattern: maintain frequency/state invariant, slide pointers accordingly, count windows.

- Time: O(n) typical
- Space: O(Σ)

**Pseudo Code**

```text
function count_with_constraint(s, ok):
    l ← 0; ans ← 0; state ← new
    for r in 0..n-1:
        state.add(s[r])
        while not ok(state):
            state.remove(s[l]); l++
        ans += r - l + 1
    return ans
```

**Code**

- C++: [`count_substrings_with_constraints.cpp`](Arrays/Algorithms/Sliding_Window/Frequency_Based/count_substrings_with_constraints.cpp)
- Python: [`count_substrings_with_constraints.py`](Arrays/Algorithms/Sliding_Window/Frequency_Based/count_substrings_with_constraints.py)

---

##### Circular

###### Max Sum Circular Subarray

**Explanation**\
Use Kadane for non-wrapped max and for wrapped max = totalSum − minSubarray.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function max_circular(A):
    best_normal ← kadane(A)
    best_wrap ← sum(A) - kadane_min(A)
    if best_wrap == 0: return best_normal  # all negative
    return max(best_normal, best_wrap)
```

**Code**

- C++: [`max_sum_circular_subarray.cpp`](Arrays/Algorithms/Sliding_Window/Circular/max_sum_circular_subarray.cpp)
- Python: [`max_sum_circular_subarray.py`](Arrays/Algorithms/Sliding_Window/Circular/max_sum_circular_subarray.py)

---

###### Circular Window Rotation

**Explanation**\
Treat array indices modulo n; sliding techniques with wrap-around.

- Time: O(n) typical
- Space: O(1)

**Pseudo Code**

```text
function circular_windows(A, k):
    for start in 0..n-1:
        window ← [A[(start+i) mod n] for i in 0..k-1]
        process(window)
```

**Code**

- C++: [`circular_window_rotation.cpp`](Arrays/Algorithms/Sliding_Window/Circular/circular_window_rotation.cpp)
- Python: [`circular_window_rotation.py`](Arrays/Algorithms/Sliding_Window/Circular/circular_window_rotation.py)

---

#### Prefix Sum

###### Prefix Sum Array

**Explanation**\
Prefix[i] = sum of first i elements; range sum in O(1).

- Time: O(n) build, O(1) query
- Space: O(n)

**Pseudo Code**

```text
function build_prefix(A):
    P[0] ← 0
    for i in 1..n: P[i] ← P[i-1] + A[i-1]
    return P
```

**Code**

- C++: [`prefix_sum_array.cpp`](Arrays/Algorithms/Prefix_Sum/prefix_sum_array.cpp)
- Python: [`prefix_sum_array.py`](Arrays/Algorithms/Prefix_Sum/prefix_sum_array.py)

---

###### Difference Array

**Explanation**\
Update range [l,r] by `+v` via D[l]+=v, D[r+1]-=v; reconstruct by prefixing D.

- Time: O(1) per range update, O(n) rebuild
- Space: O(n)

**Pseudo Code**

```text
function range_add(D, l, r, v):
    D[l] += v
    if r+1 < length(D): D[r+1] -= v
```

**Code**

- C++: [`difference_array.cpp`](Arrays/Algorithms/Prefix_Sum/difference_array.cpp)
- Python: [`difference_array.py`](Arrays/Algorithms/Prefix_Sum/difference_array.py)

---

#### Kadane Algorithm

###### Maximum Subarray Sum

**Explanation**\
Best ending at i is max(A[i], bestEnding+i-1 + A[i]). Track global best.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function kadane(A):
    best ← -∞; cur ← 0
    for x in A:
        cur ← max(x, cur + x)
        best ← max(best, cur)
    return best
```

**Code**

- C++: [`max_sum_subarray.cpp`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray.cpp)
- Python: [`max_sum_subarray.py`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray.py)

---

###### Maximum Subarray Sum (Circular)

**Explanation**\
See Circular section above; compute both non-wrap and wrap cases.

- Time: O(n)
- Space: O(1)

**Code**

- C++: [`max_sum_subarray_circular.cpp`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray_circular.cpp)
- Python: [`max_sum_subarray_circular.py`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray_circular.py)

---

#### Rotation

###### Array Rotation Left/Right

**Explanation**\
Use reversal algorithm: reverse parts then whole; or juggling with gcd.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function rotate_left(A, k):
    k ← k mod n
    reverse(A, 0, k-1); reverse(A, k, n-1); reverse(A, 0, n-1)
```

**Code**

- C++: [`array_rotation_left.cpp`](Arrays/Algorithms/Rotation/array_rotation_left.cpp) · [`array_rotation_right.cpp`](Arrays/Algorithms/Rotation/array_rotation_right.cpp)
- Python: [`array_rotation_left.py`](Arrays/Algorithms/Rotation/array_rotation_left.py) · [`array_rotation_right.py`](Arrays/Algorithms/Rotation/array_rotation_right.py)

---

#### Rearrangement

###### Rearrange Positives & Negatives (alternating)

**Explanation**\
Partition by sign then interleave; or in-place using two-pointer swapping.

- Time: O(n)
- Space: O(1) in-place

**Code**

- C++: [`rearrange_pos_neg.cpp`](Arrays/Algorithms/Rearrangement/rearrange_pos_neg.cpp)
- Python: [`rearrange_pos_neg.py`](Arrays/Algorithms/Rearrangement/rearrange_pos_neg.py)

---

###### Partition Array (Dutch pivoting)

**Explanation**\
Partition relative to pivot (Lomuto/Hoare) or three-way partition for duplicates.

- Time: O(n)
- Space: O(1)

**Code**

- C++: [`partition_array.cpp`](Arrays/Algorithms/Rearrangement/partition_array.cpp)
- Python: [`partition_array.py`](Arrays/Algorithms/Rearrangement/partition_array.py)

---

#### Miscellaneous

###### Dutch National Flag

**Explanation**\
Three-way partition into {0,1,2} using `low, mid, high` pointers.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function dnf(A):
    low ← 0; mid ← 0; high ← n-1
    while mid ≤ high:
        match A[mid] with 0→swap(A[low++],A[mid++]); 1→mid++; 2→swap(A[mid],A[high--])
```

**Code**

- C++: [`dutch_national_flag.cpp`](Arrays/Algorithms/Miscellaneous/dutch_national_flag.cpp)
- Python: [`dutch_national_flag.py`](Arrays/Algorithms/Miscellaneous/dutch_national_flag.py)

---

###### Majority Element (Boyer–Moore)

**Explanation**\
Maintain candidate and count; cancel pairs of different elements.

- Time: O(n)
- Space: O(1)

**Pseudo Code**

```text
function majority(A):
    cand ← ⊥; cnt ← 0
    for x in A:
        if cnt == 0: cand ← x
        cnt ← cnt + (1 if x == cand else -1)
    return cand  # verify if needed
```

**Code**

- C++: [`majority_element.cpp`](Arrays/Algorithms/Miscellaneous/majority_element.cpp)
- Python: [`majority_element.py`](Arrays/Algorithms/Miscellaneous/majority_element.py)

---
---

## Matrix

Matrices are 2D collections of values (rows × columns). They support structured traversal, transformations, searching patterns on sorted matrices, and specialized multiplication algorithms.

### Implementation

- **C++**: [`2D_array.cpp`](Matrix/Implementation/C%2B%2B/2D_array.cpp) · [`nested_vector.cpp`](Matrix/Implementation/C%2B%2B/nested_vector.cpp)  
- **Python**: [`nested_list.py`](Matrix/Implementation/Python/nested_list.py) · [`list_comprehensions.py`](Matrix/Implementation/Python/list_comprehensions.py) · [`numpy_arrays.py`](Matrix/Implementation/Python/numpy_arrays.py)

---

### Algorithms

#### Traversal

##### Row-wise
**Explanation**  
Visit each row left → right.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code**
```text
for i in 0..rows-1:
    for j in 0..cols-1:
        visit(A[i][j])
```

**Code**  
C++: [`row_wise.cpp`](Matrix/Algorithms/Traversal/row_wise.cpp) · Python: [`row_wise.py`](Matrix/Algorithms/Traversal/row_wise.py)

---

##### Column-wise
**Explanation**  
Visit each column top → bottom.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code**
```text
for j in 0..cols-1:
    for i in 0..rows-1:
        visit(A[i][j])
```

**Code**  
C++: [`column_wise.cpp`](Matrix/Algorithms/Traversal/column_wise.cpp) · Python: [`column_wise.py`](Matrix/Algorithms/Traversal/column_wise.py)

---

##### Diagonal (primary & secondary)
**Explanation**  
Walk along diagonals. Primary (i==j), secondary (i+j==n-1) for square matrices; for all diagonals, iterate by (r+c) keys.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code (all diagonals, TL → BR)**
```text
for s in 0..(rows+cols-2):
    i ← max(0, s-(cols-1))
    j ← s - i
    while i < rows and j ≥ 0:
        visit(A[i][j])
        i ← i + 1
        j ← j - 1
```

**Code**  
C++: [`diagonal.cpp`](Matrix/Algorithms/Traversal/diagonal.cpp) · Python: [`diagonal.py`](Matrix/Algorithms/Traversal/diagonal.py)

---

##### Spiral
**Explanation**  
Peel layers: top row, right column, bottom row, left column; shrink bounds.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code**
```text
top ← 0; left ← 0; bottom ← rows-1; right ← cols-1
while top ≤ bottom and left ≤ right:
    for j in left..right: visit(A[top][j])
    top ← top + 1
    for i in top..bottom: visit(A[i][right])
    right ← right - 1
    if top ≤ bottom:
        for j in right..left step -1: visit(A[bottom][j])
        bottom ← bottom - 1
    if left ≤ right:
        for i in bottom..top step -1: visit(A[i][left])
        left ← left + 1
```

**Code**  
C++: [`spiral.cpp`](Matrix/Algorithms/Traversal/spiral.cpp) · Python: [`spiral.py`](Matrix/Algorithms/Traversal/spiral.py)

---

#### Searching

##### Linear Search (unsorted matrix)
**Explanation**  
Scan every cell until found.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code**
```text
for i in 0..rows-1:
    for j in 0..cols-1:
        if A[i][j] == x: return (i, j)
return (-1, -1)
```

**Code**  
C++: [`linear_search_matrix.cpp`](Matrix/Algorithms/Searching/linear_search_matrix.cpp) · Python: [`linear_search_matrix.py`](Matrix/Algorithms/Searching/linear_search_matrix.py)

---

##### Staircase Search (rows & columns sorted)
**Explanation**  
Start at top-right. If current < x, go down; if current > x, go left.

- Time: O(r + c)  
- Space: O(1)

**Pseudo Code**
```text
i ← 0; j ← cols-1
while i < rows and j ≥ 0:
    if A[i][j] == x: return (i, j)
    if A[i][j] < x: i ← i + 1 else: j ← j - 1
return (-1, -1)
```

**Code**  
C++: [`staircase_search.cpp`](Matrix/Algorithms/Searching/staircase_search.cpp) · Python: [`staircase_search.py`](Matrix/Algorithms/Searching/staircase_search.py)

---

#### Transformation

##### Transpose
**Explanation**  
Swap rows and columns: `B[j][i] = A[i][j]`. In-place for square matrices by swapping above the diagonal.

- Time: O(r·c)  
- Space: O(1) in-place (square), O(r·c) otherwise

**Pseudo Code**
```text
for i in 0..n-1:
    for j in i+1..n-1:
        swap(A[i][j], A[j][i])
```

**Code**  
C++: [`transpose.cpp`](Matrix/Algorithms/Transformation/transpose.cpp) · Python: [`transpose.py`](Matrix/Algorithms/Transformation/transpose.py)

---

##### Rotate (90°)
**Explanation**  
Rotate 90° clockwise: transpose then reverse each row (or reverse columns then transpose).

- Time: O(n²)  
- Space: O(1) in-place for square

**Pseudo Code**
```text
transpose(A)
for each row i:
    reverse(A[i])
```

**Code**  
C++: [`rotate.cpp`](Matrix/Algorithms/Transformation/rotate.cpp) · Python: [`rotate.py`](Matrix/Algorithms/Transformation/rotate.py)

---

##### Flip (horizontal/vertical)
**Explanation**  
Horizontal: reverse each row. Vertical: reverse row order.

- Time: O(r·c)  
- Space: O(1)

**Pseudo Code**
```text
# horizontal
for i in 0..rows-1: reverse(A[i])

# vertical
for i in 0..rows/2-1: swap(A[i], A[rows-1-i])
```

**Code**  
C++: [`flip.cpp`](Matrix/Algorithms/Transformation/flip.cpp) · Python: [`flip.py`](Matrix/Algorithms/Transformation/flip.py)

---

##### Shear (geometric transform)
**Explanation**  
Apply shear transform `(x', y') = (x + kx·y, y + ky·x)`. For discrete grids, map each source cell to a new integer location with chosen rounding/interpolation.

- Time: O(r·c)  
- Space: O(r·c) (target buffer)

**Pseudo Code**
```text
B ← empty with computed new bounds
for y in 0..rows-1:
    for x in 0..cols-1:
        x2 ← round(x + kx * y)
        y2 ← round(y + ky * x)
        B[y2][x2] ← A[y][x]
return B
```

**Code**  
C++: [`shear.cpp`](Matrix/Algorithms/Transformation/shear.cpp) · Python: [`shear.py`](Matrix/Algorithms/Transformation/shear.py)

---

##### Scale (nearest-neighbor)
**Explanation**  
Resize matrix by factors `sx, sy`. Nearest-neighbor maps each target cell back to a source cell.

- Time: O(r'·c')  
- Space: O(r'·c)

**Pseudo Code**
```text
rows2 ← floor(rows * sy); cols2 ← floor(cols * sx)
B ← zeros(rows2, cols2)
for y2 in 0..rows2-1:
    for x2 in 0..cols2-1:
        y ← floor(y2 / sy); x ← floor(x2 / sx)
        B[y2][x2] ← A[y][x]
return B
```

**Code**  
C++: [`scale.cpp`](Matrix/Algorithms/Transformation/scale.cpp) · Python: [`scale.py`](Matrix/Algorithms/Transformation/scale.py)

---

#### Specialized Algos

##### Matrix Multiplication (Naive)
**Explanation**  
Triple loop: `C[i][j] += A[i][k] * B[k][j]`.

- Time: O(n³)  
- Space: O(n²)

**Pseudo Code**
```text
for i in 0..n-1:
    for j in 0..n-1:
        sum ← 0
        for k in 0..n-1:
            sum ← sum + A[i][k]*B[k][j]
        C[i][j] ← sum
```

**Code**  
C++: [`matrix_multiplication_naive.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_naive.cpp) · Python: [`matrix_multiplication_naive.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_naive.py)

---

##### Strassen’s Multiplication
**Explanation**  
Divide matrices into 4 blocks, compute 7 products (M₁..M₇), combine to reduce multiplications.

- Time: O(n^log₂7) ≈ O(n^2.807)  
- Space: O(n²) extra

**Pseudo Code (outline)**
```text
if n == 1: return A*B
partition A,B into a11,a12,a21,a22 and b11,b12,b21,b22
compute M1..M7 from block sums/differences
reconstruct C blocks from M1..M7
```

**Code**  
C++: [`matrix_multiplication_strassen.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_strassen.cpp) · Python: [`matrix_multiplication_strassen.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_strassen.py)

---

##### Winograd (optimized arithmetic)
**Explanation**  
Precompute row/column factors to reduce multiplications versus naive; helpful for certain sizes.

- Time: ~O(n³) but fewer mults than naive  
- Space: O(n²)

**Pseudo Code (high-level)**
```text
rowFactor[i] ← sum over k of A[i][2k]*A[i][2k+1]
colFactor[j] ← sum over k of B[2k][j]*B[2k+1][j]
for i,j:
    C[i][j] ← -rowFactor[i] - colFactor[j]
    for k step 2:
        C[i][j] += (A[i][k]+B[k+1][j])*(A[i][k+1]+B[k][j])
handle odd dimension tail
```

**Code**  
C++: [`matrix_multiplication_winograd.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_winograd.cpp) · Python: [`matrix_multiplication_winograd.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_winograd.py)

---

##### Sparse Matrix Operations
**Explanation**  
Store only nonzeros (e.g., COO/CSR). Addition merges by (row,col); multiplication iterates over matching indices.

- Time: Addition O(nnzA + nnzB); Multiplication O(∑ row nnz × matching col nnz)  
- Space: O(nnz)

**Pseudo Code (COO addition)**
```text
i ← j ← 0; out ← []
while i < nnzA or j < nnzB:
    pick smaller (r,c) key; sum values if equal; append nonzero to out
return out
```

**Code**  
C++: [`sparse_matrix_operations.cpp`](Matrix/Algorithms/Specialized_Algos/sparse_matrix_operations.cpp) · Python: [`sparse_matrix_operations.py`](Matrix/Algorithms/Specialized_Algos/sparse_matrix_operations.py)

---

### Derived Structures

#### Sparse Matrix (COO/CSR)
**Explanation**  
Represent only non-zero entries for memory efficiency.  
- **COO**: list of `(row, col, val)` triples.  
- **CSR**: three arrays `(row_ptr, col_idx, values)` enabling fast row slicing and `A·x`.

- Build: O(nnz)  
- Common ops: get/set O(log nnz) with ordered COO or O(row nnz) CSR; `A·x` in O(nnz).

**Pseudo Code (COO → CSR and SpMV)**
```text
# build CSR from COO
row_ptr ← zeros(rows+1)
for (r,c,v) in coo: row_ptr[r+1] += 1
for i in 1..rows: row_ptr[i] += row_ptr[i-1]
col_idx, val ← arrays of length nnz
# place elements (stable) by tracking next[row]
next ← copy(row_ptr)
for (r,c,v) in coo:
    k ← next[r]; col_idx[k] ← c; val[k] ← v; next[r] += 1

# y = A * x  (CSR)
for r in 0..rows-1:
    sum ← 0
    for k in row_ptr[r] .. row_ptr[r+1]-1:
        sum += val[k] * x[col_idx[k]]
    y[r] ← sum
```

**Code**  
C++: [`sparse_matrix.cpp`](Matrix/Derived_Structures/Sparse_Matrix/Implementation/sparse_matrix.cpp) · Python: [`sparse_matrix.py`](Matrix/Derived_Structures/Sparse_Matrix/Implementation/sparse_matrix.py)

---

#### Adjacency Matrix (Graph)
**Explanation**  
Graph with `n` vertices as an `n×n` matrix `G` where `G[u][v]` is 1/weight if edge `(u,v)` exists, else 0.  
- Undirected: `G` is symmetric.  
- Degree(u) (unweighted): out-degree = sum of row `u`.  
- Space: O(n²). Good for dense graphs.

**Pseudo Code (core ops)**
```text
# create
G ← zeros(n, n)

# add/remove edge (directed)
add_edge(u, v, w=1): G[u][v] ← w
remove_edge(u, v):   G[u][v] ← 0

# is edge?
has_edge(u, v): return G[u][v] ≠ 0

# neighbors of u (out-neighbors)
neighbors(u):
    L ← []
    for v in 0..n-1:
        if G[u][v] ≠ 0: append v to L
    return L
```

**Code**  
C++: [`adjacency_matrix.cpp`](Matrix/Derived_Structures/Adjacency_Matrix/Implementation/adjacency_matrix.cpp) · Python: [`adjacency_matrix.py`](Matrix/Derived_Structures/Adjacency_Matrix/Implementation/adjacency_matrix.py)

---

#### Incidence Matrix (Graph)
**Explanation**  
For a graph with `n` vertices and `m` edges, the **incidence matrix** `B` is `n×m`.  
- Undirected edge `e=(u,v)`: set `B[u][e]=1`, `B[v][e]=1`.  
- Directed edge `e=(u→v)`: set `B[u][e]=+1`, `B[v][e]=-1`.  
- Space: O(n·m). Useful for linear-algebraic graph formulations (cuts/flows).

**Pseudo Code (build from edge list)**
```text
B ← zeros(n, m)
for e, (u, v, directed) in enumerate(edges):
    if directed:
        B[u][e] ← +1
        B[v][e] ← -1
    else:
        B[u][e] ← 1
        B[v][e] ← 1
```

**Code**  
C++: [`incidence_matrix.cpp`](Matrix/Derived_Structures/Incidence_Matrix/Implementation/incidence_matrix.cpp) · Python: [`incidence_matrix.py`](Matrix/Derived_Structures/Incidence_Matrix/Implementation/incidence_matrix.py)

---

#### Transformation Matrix (2D/3D, homogeneous coords)
**Explanation**  
Use homogeneous coordinates to express 2D (3×3) / 3D (4×4) transforms: translation, rotation, scaling, shear.  
- Apply to a point `p`: `p' = T · p`.  
- Compose transforms by matrix multiplication: `T = Tn · … · T2 · T1`.

**Pseudo Code (apply to list of points, 2D)**
```text
# points as column vectors [x, y, 1]^T
apply_transform(T, points):
    out ← []
    for p in points:
        x,y ← p
        ph ← [x, y, 1]
        p2 ← T * ph
        out.append([p2[0]/p2[2], p2[1]/p2[2]])
    return out
```

**Code**  
C++: [`transformation_matrix.cpp`](Matrix/Derived_Structures/Transformation_Matrix/Implementation/transformation_matrix.cpp) · Python: [`transformation_matrix.py`](Matrix/Derived_Structures/Transformation_Matrix/Implementation/transformation_matrix.py)

---

#### Markov Matrix (Transition / Stochastic)
**Explanation**  
A row-stochastic matrix `P` (each row sums to 1) encodes Markov chain transitions.  
- One step: `π₁ = π₀ · P` (π is a row vector of state probabilities).  
- `k` steps: `π_k = π₀ · P^k`.  
- Stationary distribution (when it exists): `π* = π* · P`.

**Pseudo Code (power iteration for steady state)**
```text
π ← uniform_row_vector(n)
repeat:
    π_new ← π * P
    if ||π_new - π||_1 < ε: break
    π ← π_new
return π
```

**Code**  
C++: [`markov_matrix.cpp`](Matrix/Derived_Structures/Markov_Matrix/Implementation/markov_matrix.cpp) · Python: [`markov_matrix.py`](Matrix/Derived_Structures/Markov_Matrix/Implementation/markov_matrix.py)

---

#### Distance Matrix
**Explanation**  
For points `x₁..x_n`, the distance matrix `D` is `n×n` with `D[i][j]=dist(x_i, x_j)`.  
- Symmetric with zeros on diagonal (for standard metrics).  
- Useful for clustering, nearest neighbors, TSP heuristics.

**Pseudo Code (Euclidean)**
```text
D ← zeros(n, n)
for i in 0..n-1:
    for j in i..n-1:
        d ← sqrt( sum_k (X[i][k]-X[j][k])^2 )
        D[i][j] ← d
        D[j][i] ← d
```

**Code**  
C++: [`distance_matrix.cpp`](Matrix/Derived_Structures/Distance_Matrix/Implementation/distance_matrix.cpp) · Python: [`distance_matrix.py`](Matrix/Derived_Structures/Distance_Matrix/Implementation/distance_matrix.py)

---

## Nodes

Nodes are the atomic building blocks of linked structures (lists, trees, graphs).

### Nodes: Implementation
- **C++**: [`node_class.cpp`](Nodes/Implementation/C%2B%2B/node_class.cpp) · [`node_struct.cpp`](Nodes/Implementation/C%2B%2B/node_struct.cpp)  
- **Python**: [`node_class.py`](Nodes/Implementation/Python/node_class.py)

### Nodes: Derived Structures

#### Linked List

###### Singly Linked List (SLL)

**Explanation**\
Each node has `value` and `next`. Typical ops: push/pop at head, search, delete by key, traverse.

- Time: O(1) push/pop at head, O(n) search/delete
- Space: O(n)

**Pseudo Code**
```text
class Node:
    val, next

function push_front(head, x):
    node ← Node(x)
    node.next ← head
    return node  # new head

function traverse(head):
    cur ← head
    while cur ≠ null:
        visit(cur.val)
        cur ← cur.next
```

**Code**  
- C++: [`singly_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/singly_linked_list.cpp)  
- Python: [`singly_linked_list.py`](Nodes/Derived_Structures/Linked_List/singly_linked_list.py)

---

###### Doubly Linked List (DLL)

**Explanation**\
Nodes carry `prev` and `next`. Enables O(1) delete given a node, and bidirectional traversal.

- Time: O(1) insert/delete at ends (with head/tail), O(n) search
- Space: O(n)

**Pseudo Code**
```text
class DNode:
    val, prev, next

function insert_after(node, x):
    n ← DNode(x)
    n.prev ← node
    n.next ← node.next
    if node.next ≠ null: node.next.prev ← n
    node.next ← n
```

**Code**  
- C++: [`doubly_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/doubly_linked_list.cpp)  
- Python: [`doubly_linked_list.py`](Nodes/Derived_Structures/Linked_List/doubly_linked_list.py)

---

###### Circular Linked List (CLL)

**Explanation**\
Tail’s `next` points back to head (and `prev` to tail in CDLL). Useful for round-robin.

- Time: O(1) insert at head/tail if tail/head kept
- Space: O(n)

**Pseudo Code**
```text
function insert_tail_circular(head, x):
    n ← Node(x)
    if head == null:
        n.next ← n
        return n
    tail ← head
    while tail.next ≠ head: tail ← tail.next
    tail.next ← n
    n.next ← head
    return head
```

**Code**  
- C++: [`circular_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/circular_linked_list.cpp)  
- Python: [`circular_linked_list.py`](Nodes/Derived_Structures/Linked_List/circular_linked_list.py)

---

###### Reverse Linked List

**Explanation**\
Iteratively flip `next` pointers.

- Time: O(n)
- Space: O(1)

**Pseudo Code**
```text
function reverse(head):
    prev ← null; cur ← head
    while cur ≠ null:
        nxt ← cur.next
        cur.next ← prev
        prev ← cur; cur ← nxt
    return prev
```

**Code**  
- C++: [`reverse_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/reverse_linked_list.cpp)  
- Python: [`reverse_linked_list.py`](Nodes/Derived_Structures/Linked_List/reverse_linked_list.py)

---

###### Merge Two Sorted Lists

**Explanation**\
Classic two-pointer merge producing a single sorted list.

- Time: O(n+m)
- Space: O(1) extra (iterative)

**Pseudo Code**
```text
function merge_sorted(a, b):
    dummy ← Node(⊥); tail ← dummy
    while a and b:
        if a.val ≤ b.val: tail.next ← a; a ← a.next
        else: tail.next ← b; b ← b.next
        tail ← tail.next
    tail.next ← a if a else b
    return dummy.next
```

**Code**  
- C++: [`merge_linked_lists.cpp`](Nodes/Derived_Structures/Linked_List/merge_linked_lists.cpp)  
- Python: [`merge_linked_lists.py`](Nodes/Derived_Structures/Linked_List/merge_linked_lists.py)

---

###### Cycle Detection (Floyd’s)

**Explanation**\
Tortoise–hare pointers; if they meet, a cycle exists. Entry found by resetting one pointer to head and moving both one step.

- Time: O(n)
- Space: O(1)

**Pseudo Code**
```text
function has_cycle(head):
    slow ← head; fast ← head
    while fast and fast.next:
        slow ← slow.next
        fast ← fast.next.next
        if slow == fast: return true
    return false
```

**Code**  
- C++: [`cycle_detection.cpp`](Nodes/Derived_Structures/Linked_List/cycle_detection.cpp)  
- Python: [`cycle_detection.py`](Nodes/Derived_Structures/Linked_List/cycle_detection.py)

---

###### Remove N-th Node from End

**Explanation**\
Advance `fast` by `n`, then move `slow` and `fast` together; delete `slow.next`.

- Time: O(n)
- Space: O(1)

**Pseudo Code**
```text
function remove_nth_from_end(head, n):
    dummy ← Node(0); dummy.next ← head
    slow ← dummy; fast ← dummy
    for i in 1..n: fast ← fast.next
    while fast.next:
        slow ← slow.next; fast ← fast.next
    slow.next ← slow.next.next
    return dummy.next
```

**Code**  
- C++: [`remove_nth_node.cpp`](Nodes/Derived_Structures/Linked_List/remove_nth_node.cpp)  
- Python: [`remove_nth_node.py`](Nodes/Derived_Structures/Linked_List/remove_nth_node.py)

---

###### Split & Merge Lists (utilities)

**Explanation**\
Split by position (front/back halves) or parity, then merge by interleaving or order.

- Time: O(n)
- Space: O(1) extra

**Pseudo Code**
```text
function split_half(head):
    slow ← head; fast ← head; prev ← null
    while fast and fast.next:
        prev ← slow; slow ← slow.next; fast ← fast.next.next
    prev.next ← null
    return (head, slow)
```

**Code**  
- C++: [`split_merge_lists.cpp`](Nodes/Derived_Structures/Linked_List/split_merge_lists.cpp)  
- Python: [`split_merge_lists.py`](Nodes/Derived_Structures/Linked_List/split_merge_lists.py)

---

#### Tree

###### Binary Tree (traversals)

**Explanation**\
Generic node with left/right. DFS traversals (pre/in/post) and BFS (level order).

- Time: O(n)
- Space: O(h) recursion or O(n) queue

**Pseudo Code**
```text
class TNode:
    val, left, right

function inorder(u):
    if u == null: return
    inorder(u.left); visit(u.val); inorder(u.right)
```

**Code**  
- C++: [`binary_tree.cpp`](Nodes/Derived_Structures/Tree/binary_tree.cpp)  
- Python: [`binary_tree.py`](Nodes/Derived_Structures/Tree/binary_tree.py)

---

###### Binary Search Tree (BST)

**Explanation**\
Left subtree < node < right subtree. Supports ordered operations.

- Time: O(h) per op (O(log n) avg; O(n) worst)
- Space: O(h)

**Pseudo Code**
```text
function bst_insert(root, x):
    if root == null: return new Node(x)
    if x < root.val: root.left ← bst_insert(root.left, x)
    elif x > root.val: root.right ← bst_insert(root.right, x)
    return root
```

**Code**  
- C++: [`binary_search_tree.cpp`](Nodes/Derived_Structures/Tree/binary_search_tree.cpp)  
- Python: [`binary_search_tree.py`](Nodes/Derived_Structures/Tree/binary_search_tree.py)

---

###### AVL Tree (self-balancing BST)

**Explanation**\
Maintain height balance |bf|≤1 with rotations after insert/delete.

- Time: O(log n) per op
- Space: O(log n)

**Pseudo Code**
```text
function rebalance(u):
    update_height(u)
    if balance(u) == 2:
        if balance(u.right) < 0: u.right ← rotate_right(u.right)
        return rotate_left(u)
    if balance(u) == -2:
        if balance(u.left) > 0: u.left ← rotate_left(u.left)
        return rotate_right(u)
    return u
```

**Code**  
- C++: [`avl_tree.cpp`](Nodes/Derived_Structures/Tree/avl_tree.cpp)  
- Python: [`avl_tree.py`](Nodes/Derived_Structures/Tree/avl_tree.py)

---

###### Red–Black Tree

**Explanation**\
Balanced BST with node colors and invariants to guarantee O(log n). Fix-ups via recolor/rotate.

- Time: O(log n) per op
- Space: O(log n)

**Pseudo Code**
```text
# Sketch of insert fix-up (cases omitted for brevity)
function rb_insert_fixup(T, z):
    while color(parent(z)) == RED:
        if parent(z) is left child:
            # mirror-symmetric cases with uncle
            ...
        else:
            ...
    color(root(T)) ← BLACK
```

**Code**  
- C++: [`red_black_tree.cpp`](Nodes/Derived_Structures/Tree/red_black_tree.cpp)  
- Python: [`red_black_tree.py`](Nodes/Derived_Structures/Tree/red_black_tree.py)

---

###### Segment Tree (range queries)

**Explanation**\
Tree over array intervals enabling range queries/updates.

- Time: O(n) build; O(log n) query/update
- Space: O(n)

**Pseudo Code**
```text
function build(idx, l, r):
    if l == r: seg[idx] ← A[l]; return
    m ← (l+r)//2
    build(2idx,l,m); build(2idx+1,m+1,r)
    seg[idx] ← seg[2idx] ⊕ seg[2idx+1]

function query(idx,l,r,ql,qr):
    if qr<l or r<ql: return NEUTRAL
    if ql≤l and r≤qr: return seg[idx]
    m ← (l+r)//2
    return query(2idx,l,m,ql,qr) ⊕ query(2idx+1,m+1,r,ql,qr)
```

**Code**  
- C++: [`segment_tree.cpp`](Nodes/Derived_Structures/Tree/segment_tree.cpp)  
- Python: [`segment_tree.py`](Nodes/Derived_Structures/Tree/segment_tree.py)

---

###### Fenwick Tree (Binary Indexed Tree)

**Explanation**\
Stores partial sums using lowbit; supports prefix sums and point updates.

- Time: O(log n) per op
- Space: O(n)

**Pseudo Code**
```text
function add(i, delta):
    while i ≤ n:
        bit[i] += delta
        i += i & -i

function sum(i):
    s ← 0
    while i > 0:
        s += bit[i]
        i -= i & -i
    return s
```

**Code**  
- C++: [`fenwick_tree.cpp`](Nodes/Derived_Structures/Tree/fenwick_tree.cpp)  
- Python: [`fenwick_tree.py`](Nodes/Derived_Structures/Tree/fenwick_tree.py)

---

###### Trie (prefix tree)

**Explanation**\
Edges labeled by characters; supports prefix queries and dictionary ops.

- Time: O(L) per op where L=word length
- Space: O(Σ·nodes)

**Pseudo Code**
```text
function insert(root, word):
    u ← root
    for ch in word:
        if ch not in u.next: u.next[ch] ← new Node()
        u ← u.next[ch]
    u.end ← true
```

**Code**  
- C++: [`trie.cpp`](Nodes/Derived_Structures/Tree/trie.cpp)  
- Python: [`trie.py`](Nodes/Derived_Structures/Tree/trie.py)

---

###### Suffix Tree (compressed trie of all suffixes)

**Explanation**\
Indexes all suffixes for fast substring queries. Practical builds use Ukkonen’s algorithm (linear time).

- Time: O(n) build (Ukkonen), O(m) query
- Space: O(n)

**Pseudo Code**
```text
# High-level sketch: compress edges with (start,end) indices into original string
function build_suffix_tree(s):
    root ← new Node()
    for i in 0..|s|-1:
        extend_with_suffix(s[i..], root)  # uses active point & implicit suffixes in Ukkonen
    return root
```

**Code**  
- C++: [`suffix_tree.cpp`](Nodes/Derived_Structures/Tree/suffix_tree.cpp)  
- Python: [`suffix_tree.py`](Nodes/Derived_Structures/Tree/suffix_tree.py)

---

###### Heap Tree (binary heap as tree/array)

**Explanation**\
Complete binary tree with heap-order; supports `push`/`pop`. Typically stored in array.

- Time: O(log n) push/pop; O(n) build (heapify)
- Space: O(n)

**Pseudo Code**
```text
function sift_up(i):
    while i>0 and A[parent(i)]<A[i]:
        swap A[parent(i)], A[i]
        i ← parent(i)

function sift_down(i, n):
    while left(i) < n:
        j ← left(i)
        if right(i)<n and A[right(i)]>A[j]: j ← right(i)
        if A[i] ≥ A[j]: break
        swap A[i], A[j]; i ← j
```

**Code**  
- C++: [`heap_tree.cpp`](Nodes/Derived_Structures/Tree/heap_tree.cpp)  
- Python: [`heap_tree.py`](Nodes/Derived_Structures/Tree/heap_tree.py)

---

#### Graph

###### Adjacency List (representation)

**Explanation**\
For each vertex, store list of neighbors (with weights if weighted).

- Time: O(1) average to add edge; total storage O(V+E)
- Space: O(V+E)

**Pseudo Code**
```text
function add_edge(adj, u, v, w=1, undirected=true):
    adj[u].append((v,w))
    if undirected: adj[v].append((u,w))
```

**Code**  
- C++: [`adjacency_list.cpp`](Nodes/Derived_Structures/Graph/adjacency_list.cpp)  
- Python: [`adjacency_list.py`](Nodes/Derived_Structures/Graph/adjacency_list.py)

---

###### Breadth-First Search (BFS)

**Explanation**\
Level-order traversal; shortest path in unweighted graphs.

- Time: O(V+E)
- Space: O(V)

**Pseudo Code**
```text
function bfs(adj, s):
    dist[all] ← ∞; dist[s] ← 0
    q ← [s]
    while q not empty:
        u ← pop_front(q)
        for (v,_) in adj[u]:
            if dist[v] == ∞:
                dist[v] ← dist[u] + 1
                parent[v] ← u
                push_back(q, v)
```

**Code**  
- C++: [`bfs.cpp`](Nodes/Derived_Structures/Graph/bfs.cpp)  
- Python: [`bfs.py`](Nodes/Derived_Structures/Graph/bfs.py)

---

###### Depth-First Search (DFS)

**Explanation**\
Explore as far as possible along each branch before backtracking.

- Time: O(V+E)
- Space: O(V) recursion/stack

**Pseudo Code**
```text
function dfs(u):
    seen[u] ← true
    for (v,_) in adj[u]:
        if not seen[v]: dfs(v)
```

**Code**  
- C++: [`dfs.cpp`](Nodes/Derived_Structures/Graph/dfs.cpp)  
- Python: [`dfs.py`](Nodes/Derived_Structures/Graph/dfs.py)

---

###### Dijkstra’s Shortest Path (non-negative weights)

**Explanation**\
Greedy expansion by distance using a min-heap.

- Time: O(E log V) with binary heap
- Space: O(V)

**Pseudo Code**
```text
function dijkstra(adj, s):
    dist[all] ← ∞; dist[s] ← 0
    pq ← {(0,s)}
    while pq not empty:
        (d,u) ← pop_min(pq)
        if d ≠ dist[u]: continue
        for (v,w) in adj[u]:
            if dist[v] > d + w:
                dist[v] ← d + w
                parent[v] ← u
                push(pq, (dist[v], v))
```

**Code**  
- C++: [`dijkstra.cpp`](Nodes/Derived_Structures/Graph/dijkstra.cpp)  
- Python: [`dijkstra.py`](Nodes/Derived_Structures/Graph/dijkstra.py)

---

###### Bellman–Ford (handles negative edges)

**Explanation**\
Relax all edges |V|−1 times; detects negative cycles.

- Time: O(VE)
- Space: O(V)

**Pseudo Code**
```text
function bellman_ford(edges, V, s):
    dist[all] ← ∞; dist[s] ← 0
    for i in 1..V-1:
        for (u,v,w) in edges:
            dist[v] ← min(dist[v], dist[u]+w)
    # optional: check for negative cycles
```

**Code**  
- C++: [`bellman_ford.cpp`](Nodes/Derived_Structures/Graph/bellman_ford.cpp)  
- Python: [`bellman_ford.py`](Nodes/Derived_Structures/Graph/bellman_ford.py)

---

###### Floyd–Warshall (all-pairs shortest paths)

**Explanation**\
DP over intermediate vertices to update distance matrix.

- Time: O(V³)
- Space: O(V²)

**Pseudo Code**
```text
for k in 1..V:
    for i in 1..V:
        for j in 1..V:
            dist[i][j] ← min(dist[i][j], dist[i][k]+dist[k][j])
```

**Code**  
- C++: [`floyd_warshall.cpp`](Nodes/Derived_Structures/Graph/floyd_warshall.cpp)  
- Python: [`floyd_warshall.py`](Nodes/Derived_Structures/Graph/floyd_warshall.py)

---

###### Kruskal’s MST

**Explanation**\
Sort edges by weight and union components; use DSU/Union-Find.

- Time: O(E log E)
- Space: O(V)

**Pseudo Code**
```text
function kruskal(edges, V):
    sort edges by w
    dsu ← new DSU(V)
    mst ← []
    for (u,v,w) in edges:
        if dsu.find(u) ≠ dsu.find(v):
            dsu.union(u,v); mst.append((u,v,w))
    return mst
```

**Code**  
- C++: [`kruskal.cpp`](Nodes/Derived_Structures/Graph/kruskal.cpp)  
- Python: [`kruskal.py`](Nodes/Derived_Structures/Graph/kruskal.py)

---

###### Prim’s MST

**Explanation**\
Grow tree from a start vertex, adding cheapest crossing edge using a min-heap.

- Time: O(E log V)
- Space: O(V)

**Pseudo Code**
```text
function prim(adj, s):
    inMST[all] ← false
    pq ← {(0,s,-1)}  # (w, v, parent)
    mst ← []
    while pq not empty:
        (w,v,p) ← pop_min(pq)
        if inMST[v]: continue
        inMST[v] ← true
        if p ≠ -1: mst.append((p,v,w))
        for (to,c) in adj[v]:
            if not inMST[to]: push(pq,(c,to,v))
    return mst
```

**Code**  
- C++: [`prim.cpp`](Nodes/Derived_Structures/Graph/prim.cpp)  
- Python: [`prim.py`](Nodes/Derived_Structures/Graph/prim.py)

---

###### Topological Sort (DAG)

**Explanation**\
Order vertices so all edges go forward; Kahn’s algorithm (BFS on zero indegrees).

- Time: O(V+E)
- Space: O(V)

**Pseudo Code**
```text
function topo_sort(adj):
    indeg ← count_incoming(adj)
    q ← [v | indeg[v]==0]
    order ← []
    while q not empty:
        u ← pop_front(q); order.append(u)
        for v in adj[u]:
            indeg[v] -= 1
            if indeg[v]==0: push_back(q, v)
    return order
```

**Code**  
- C++: [`topological_sort.cpp`](Nodes/Derived_Structures/Graph/topological_sort.cpp)  
- Python: [`topological_sort.py`](Nodes/Derived_Structures/Graph/topological_sort.py)

---

###### Strongly Connected Components — Tarjan

**Explanation**\
Single DFS computing discovery times and low-links; stack tracks current component.

- Time: O(V+E)
- Space: O(V)

**Pseudo Code**
```text
function tarjan(u):
    disc[u] ← low[u] ← ++time
    push(stack, u); inStack[u] ← true
    for v in adj[u]:
        if disc[v]==0: tarjan(v); low[u] ← min(low[u], low[v])
        elif inStack[v]: low[u] ← min(low[u], disc[v])
    if low[u] == disc[u]:
        comp ← []
        repeat:
            w ← pop(stack); inStack[w] ← false; comp.append(w)
        until w == u
```

**Code**  
- C++: [`tarjan_scc.cpp`](Nodes/Derived_Structures/Graph/tarjan_scc.cpp)  
- Python: [`tarjan_scc.py`](Nodes/Derived_Structures/Graph/tarjan_scc.py)

---

###### Strongly Connected Components — Kosaraju

**Explanation**\
DFS to get finish order, reverse graph, DFS in that order to collect components.

- Time: O(V+E)
- Space: O(V)

**Pseudo Code**
```text
function kosaraju(adj):
    order ← []
    seen ← set()
    for v in V: if v not in seen: dfs1(v)
    gr ← reverse_graph(adj)
    seen ← ∅
    for v in reversed(order):
        if v not in seen: comp ← []; dfs2(v); output comp

function dfs1(u):
    seen.add(u)
    for v in adj[u]: if v not in seen: dfs1(v)
    order.append(u)
```

**Code**  
- C++: [`kosaraju_scc.cpp`](Nodes/Derived_Structures/Graph/kosaraju_scc.cpp)  
- Python: [`kosaraju_scc.py`](Nodes/Derived_Structures/Graph/kosaraju_scc.py)
---

## Hashes

Hash-based structures provide expected O(1) insert/lookup using hash functions and collision strategies.

### Hashes: Implementation
- **C++**: [`map.cpp`](Hashes/Implementation/C%2B%2B/map.cpp) · [`multi_map.cpp`](Hashes/Implementation/C%2B%2B/multi_map.cpp) · [`unordered_map.cpp`](Hashes/Implementation/C%2B%2B/unordered_map.cpp) · [`unordered_multi_map.cpp`](Hashes/Implementation/C%2B%2B/unordered_multi_map.cpp) · [`set.cpp`](Hashes/Implementation/C%2B%2B/set.cpp) · [`multi_set.cpp`](Hashes/Implementation/C%2B%2B/multi_set.cpp) · [`unordered_set.cpp`](Hashes/Implementation/C%2B%2B/unordered_set.cpp) · [`unordered_multi_set.cpp`](Hashes/Implementation/C%2B%2B/unordered_multi_set.cpp) · [`hash_table_custom.cpp`](Hashes/Implementation/C%2B%2B/hash_table_custom.cpp)  
- **Python**: [`dict_implementation.py`](Hashes/Implementation/Python/dict_implementation.py) · [`default_dict.py`](Hashes/Implementation/Python/default_dict.py) · [`ordered_dict.py`](Hashes/Implementation/Python/ordered_dict.py) · [`set_implementation.py`](Hashes/Implementation/Python/set_implementation.py) · [`frozen_set.py`](Hashes/Implementation/Python/frozen_set.py) · [`hash_table_custom.py`](Hashes/Implementation/Python/hash_table_custom.py)

### Hash Functions

###### Division Method

**Explanation**Map key `k` to `k mod m`. Choose `m` prime and not close to powers of 2/10 to reduce clustering.

- Time: O(1) per hash
- Space: O(1)

**Pseudo Code**
```text
function h_division(k, m):
    return k mod m
```

**Code**  
- C++: [`division_method.cpp`](Hashes/Hash_Functions/Division_Method/Implementation/division_method.cpp)  
- Python: [`division_method.py`](Hashes/Hash_Functions/Division_Method/Implementation/division_method.py)

---

###### Multiplication Method

**Explanation**Use fractional part of `k*A`, `0 < A < 1`, typically `A = (√5 - 1)/2`. Index `⌊ m * frac(k*A) ⌋`.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function h_multiplication(k, m, A):
    frac ← (k * A) - floor(k * A)
    return floor(m * frac)
```

**Code**  
- C++: [`multiplication_method.cpp`](Hashes/Hash_Functions/Multiplication_Method/Implementation/multiplication_method.cpp)  
- Python: [`multiplication_method.py`](Hashes/Hash_Functions/Multiplication_Method/Implementation/multiplication_method.py)

---

###### Mid Square Method

**Explanation**Square the key and extract the middle `r` bits/digits.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function h_mid_square(k, r, m):
    s ← k * k
    mid ← extract_middle_bits(s, r)   # implementation-specific
    return mid mod m
```

**Code**  
- C++: [`mid_square_method.cpp`](Hashes/Hash_Functions/Mid_Square_Method/Implementation/mid_square_method.cpp)  
- Python: [`mid_square_method.py`](Hashes/Hash_Functions/Mid_Square_Method/Implementation/mid_square_method.py)

---

###### Folding Method

**Explanation**Split the key’s digits/bytes into equal-size parts, sum (optionally end-around carry), then mod table size.

- Time: O(#parts)
- Space: O(1)

**Pseudo Code**
```text
function h_folding(k as bytes[], part_size, m):
    sum ← 0
    for i from 0 step part_size:
        part ← bytes_to_int(k[i .. i+part_size-1], little_endian=true)
        sum ← sum + part
    return sum mod m
```

**Code**  
- C++: [`folding_method.cpp`](Hashes/Hash_Functions/Folding_Method/Implementation/folding_method.cpp)  
- Python: [`folding_method.py`](Hashes/Hash_Functions/Folding_Method/Implementation/folding_method.py)

---

###### Universal Hashing

**Explanation**Pick a random function from a family to minimize worst-case collisions. Classic: `h_{a,b}(x) = ((a·x + b) mod p) mod m` with prime `p > max(x)` and `a∈[1,p-1]`, `b∈[0,p-1]` chosen once.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
# setup
choose prime p > U        # U is max key value
choose a in [1, p-1], b in [0, p-1]

function h_universal(x, m):
    return ((a*x + b) mod p) mod m
```

**Code**  
- C++: [`universal_hashing.cpp`](Hashes/Hash_Functions/Universal_Hashing/Implementation/universal_hashing.cpp)  
- Python: [`universal_hashing.py`](Hashes/Hash_Functions/Universal_Hashing/Implementation/universal_hashing.py)

---

###### String Hashing (Polynomial / Rolling)

**Explanation**Treat string as base-`B` number modulo `M`: `h(s) = Σ s[i]·B^i (mod M)`. Supports rolling updates for substrings; use double hashing to reduce collisions.

- Time: O(|s|) to build; O(1) per roll
- Space: O(|s|) for precomputed powers (optional)

**Pseudo Code**
```text
function poly_hash(s, B, M):
    h ← 0; p ← 1
    for ch in s:              # iterate left→right
        h ← (h + value(ch) * p) mod M
        p ← (p * B) mod M
    return h
```

**Code**  
- C++: [`string_hashing.cpp`](Hashes/Hash_Functions/String_Hashing/Implementation/string_hashing.cpp)  
- Python: [`string_hashing.py`](Hashes/Hash_Functions/String_Hashing/Implementation/string_hashing.py)

---

### Collision Resolution

###### Separate Chaining

**Explanation**Array of buckets (lists/vectors). Insert/search within bucket indexed by hash. Load factor `α = n/m` can exceed 1; expected O(1) operations when using good hashing.

- Time: Expected O(1) insert/search/delete; worst O(n)
- Space: O(n + m)

**Pseudo Code**
```text
table: array of lists size m

function insert(k, v):
    i ← h(k)
    for (key, _) in table[i]:
        if key == k: update value; return
    push_front(table[i], (k, v))

function find(k):
    i ← h(k)
    for (key, value) in table[i]:
        if key == k: return value
    return ⊥

function erase(k):
    i ← h(k)
    remove first pair with key == k from table[i]
```

**Code**  
- C++: [`separate_chaining.cpp`](Hashes/Collision_Resolution/Separate_Chaining/Implementation/separate_chaining.cpp)  
- Python: [`separate_chaining.py`](Hashes/Collision_Resolution/Separate_Chaining/Implementation/separate_chaining.py)

---

###### Linear Probing (Open Addressing)

**Explanation**Probe sequence: `i, i+1, i+2, … (mod m)`. Maintain tombstones for deletions. Keep load factor `α < 0.7` for performance.

- Time: Expected O(1) (when α small); worst O(m)
- Space: O(m)

**Pseudo Code**
```text
table: array of (key, value, state) where state ∈ {EMPTY, FILLED, DELETED}

function insert(k, v):
    i ← h(k)
    for t in 0..m-1:
        j ← (i + t) mod m
        if table[j].state in {EMPTY, DELETED}:
            table[j] ← (k, v, FILLED); return
        if table[j].state == FILLED and table[j].key == k:
            table[j].value ← v; return
    rehash()

function find(k):
    i ← h(k)
    for t in 0..m-1:
        j ← (i + t) mod m
        if table[j].state == EMPTY: return ⊥    # stop early
        if table[j].state == FILLED and table[j].key == k: return table[j].value
    return ⊥

function erase(k):
    i ← h(k)
    for t in 0..m-1:
        j ← (i + t) mod m
        if table[j].state == EMPTY: return
        if table[j].state == FILLED and table[j].key == k:
            table[j].state ← DELETED; return
```

**Code**  
- C++: [`linear_probing.cpp`](Hashes/Collision_Resolution/Linear_Probing/Implementation/linear_probing.cpp)  
- Python: [`linear_probing.py`](Hashes/Collision_Resolution/Linear_Probing/Implementation/linear_probing.py)

---

###### Quadratic Probing

**Explanation**Probe offsets grow quadratically: `i + c1·t + c2·t² (mod m)`. Avoids primary clustering; may suffer secondary clustering. Parameters and prime `m` help guarantee coverage until load threshold.

- Time: Expected O(1); worst O(m)
- Space: O(m)

**Pseudo Code**
```text
function probe_quadratic(i, t, m, c1, c2):
    return (i + c1*t + c2*t*t) mod m
```

**Code**  
- C++: [`quadratic_probing.cpp`](Hashes/Collision_Resolution/Quadratic_Probing/Implementation/quadratic_probing.cpp)  
- Python: [`quadratic_probing.py`](Hashes/Collision_Resolution/Quadratic_Probing/Implementation/quadratic_probing.py)

---

###### Double Hashing

**Explanation**Use two hashes: `h1(k)` for start, step `h2(k)` with `h2(k)` coprime with `m`. Probe: `i_t = (h1(k) + t·h2(k)) mod m`.

- Time: Expected O(1); worst O(m)
- Space: O(m)

**Pseudo Code**
```text
function insert(k, v):
    i ← h1(k); step ← h2(k)
    for t in 0..m-1:
        j ← (i + t*step) mod m
        if table[j] is EMPTY/DELETED: place (k,v); return
        if table[j].key == k: update; return
    rehash()
```

**Code**  
- C++: [`double_hashing.cpp`](Hashes/Collision_Resolution/Double_Hashing/Implementation/double_hashing.cpp)  
- Python: [`double_hashing.py`](Hashes/Collision_Resolution/Double_Hashing/Implementation/double_hashing.py)

---

###### Cuckoo Hashing

**Explanation**Two (or more) hash functions; each key resides in one of two positions. On collision, evict the resident and place the new key; may trigger a sequence of displacements. If a loop forms, rehash or grow table.

- Time: Amortized O(1) find/insert; worst-case rehash
- Space: ~2m slots for 2-way

**Pseudo Code**
```text
tables: T1[0..m-1], T2[0..m-1]

function insert(k, v):
    for iter in 1..MAX_ITERS:
        swap k with T1[h1(k)].key if occupied else place and return
        if empty spot found: place and return
        swap k with T2[h2(k)].key if occupied else place and return
    rehash_and_retry()

function find(k):
    if T1[h1(k)].key == k: return T1[h1(k)].value
    if T2[h2(k)].key == k: return T2[h2(k)].value
    return ⊥
```

**Code**  
- C++: [`cuckoo_hashing.cpp`](Hashes/Collision_Resolution/Cuckoo_Hashing/Implementation/cuckoo_hashing.cpp)  
- Python: [`cuckoo_hashing.py`](Hashes/Collision_Resolution/Cuckoo_Hashing/Implementation/cuckoo_hashing.py)

---

### Hashes: Derived Structures

###### Bloom Filter

**Explanation**Probabilistic set with `m`-bit array and `k` hash functions. Supports add and possibly contains; zero false negatives, tunable false positive rate ≈ `(1 - e^{-kn/m})^k`.

- Time: O(k) add/query
- Space: O(m) bits

**Pseudo Code**
```text
B ← bitarray(m) all 0

function add(x):
    for i in 1..k: B[ h_i(x) mod m ] ← 1

function might_contain(x):
    for i in 1..k:
        if B[ h_i(x) mod m ] == 0: return false
    return true
```

**Code**  
- C++: [`bloom_filter.cpp`](Hashes/Derived_Structures/Bloom_Filter/Implementation/bloom_filter.cpp)  
- Python: [`bloom_filter.py`](Hashes/Derived_Structures/Bloom_Filter/Implementation/bloom_filter.py)

---

###### Perfect Hashing (FKS two-level)

**Explanation**For a static set, make outer table with universal hashing; for each bucket of size `s`, allocate secondary table of size `s²` and find a hash with no collisions. Guarantees O(1) worst-case lookup.

- Build Time: Expected linear
- Query Time: O(1) worst-case
- Space: O(n)

**Pseudo Code (outline)**
```text
build(S):
    choose outer h
    for each bucket B:
        s ← |B|
        choose h_B until perfect on B into table size s*s
```

**Code**  
- C++: [`perfect_hashing.cpp`](Hashes/Derived_Structures/Perfect_Hashing/Implementation/perfect_hashing.cpp)  
- Python: [`perfect_hashing.py`](Hashes/Derived_Structures/Perfect_Hashing/Implementation/perfect_hashing.py)

---

###### Extendible Hashing (disk-friendly)

**Explanation**Directory indexed by `d` leading bits points to buckets with local depth. On overflow, split a bucket (increase its local depth, possibly double directory). Supports dynamic growth with minimal reorganization.

- Time: O(1) expected I/O ops
- Space: Directory O(2^d), buckets O(n)

**Pseudo Code (outline)**
```text
insert(k, v):
    b ← directory[ prefix_bits(h(k), d) ]
    if b full:
        if b.local_depth == d: double directory; d ← d+1
        split b; redistribute keys by next bit; retry insert
    else:
        place (k,v) in b
```

**Code**  
- C++: [`extendible_hashing.cpp`](Hashes/Derived_Structures/Extendible_Hashing/Implementation/extendible_hashing.cpp)  
- Python: [`extendible_hashing.py`](Hashes/Derived_Structures/Extendible_Hashing/Implementation/extendible_hashing.py)

---

###### Hopscotch Hashing

**Explanation**Open addressing with a small neighborhood of size `H` around the home bucket. If the free slot is far, move (“hop”) elements closer to maintain that each key is within `H` of its home. Excellent cache behavior and fast lookups.

- Time: O(1) average; limited relocations on insert
- Space: O(m)

**Pseudo Code (high-level)**
```text
insert(k, v):
    home ← h(k)
    j ← first free slot scanning from home
    while distance(j, home) ≥ H:
        j' ← find_neighbor_to_hop_towards_home(j, home)
        if not found: rehash()
        swap entries at j and j'
        j ← j'
    place (k,v) at j and update neighborhood bitmap at home
```

**Code**  
- C++: [`hopscotch_hashing.cpp`](Hashes/Derived_Structures/Hopscotch_Hashing/Implementation/hopscotch_hashing.cpp)  
- Python: [`hopscotch_hashing.py`](Hashes/Derived_Structures/Hopscotch_Hashing/Implementation/hopscotch_hashing.py)


---

## Bit

Bit manipulation lets you encode sets, speed up arithmetic, and implement DP over subsets using integer bit patterns.

### Bit: Implementation
- **C++**: [`bit_utils.cpp`](Bit/Implementation/C%2B%2B/bit_utils.cpp) · [`bitset_demo.cpp`](Bit/Implementation/C%2B%2B/bitset_demo.cpp) · [`binary_exponentiation.cpp`](Bit/Implementation/C%2B%2B/binary_exponentiation.cpp) · [`reverse_bits.cpp`](Bit/Implementation/C%2B%2B/reverse_bits.cpp)  
- **Python**: [`bit_utils.py`](Bit/Implementation/Python/bit_utils.py) · [`binary_exponentiation.py`](Bit/Implementation/Python/binary_exponentiation.py) · [`reverse_bits.py`](Bit/Implementation/Python/reverse_bits.py)

### Bit: Algorithms

###### Basic Bit Operations (get, set, clear, toggle)

**Explanation**\
Work with the i-th bit using masks of the form `(1 << i)`.

- Time: O(1) per op
- Space: O(1)

**Pseudo Code**
```text
function get_bit(x, i):
    return (x >> i) & 1

function set_bit(x, i):
    return x | (1 << i)

function clear_bit(x, i):
    return x & ~(1 << i)

function toggle_bit(x, i):
    return x ^ (1 << i)
```

**Code**  
- C++: [`basic_ops.cpp`](Bit/Algorithms/Basic/basic_ops.cpp)  
- Python: [`basic_ops.py`](Bit/Algorithms/Basic/basic_ops.py)

---

###### Check Power of Two

**Explanation**\
A power of two has exactly one set bit. Use `x & (x - 1) == 0` and `x > 0`.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function is_power_of_two(x):
    return x > 0 and (x & (x - 1)) == 0
```

**Code**  
- C++: [`power_of_two.cpp`](Bit/Algorithms/Checks/power_of_two.cpp)  
- Python: [`power_of_two.py`](Bit/Algorithms/Checks/power_of_two.py)

---

###### Count Set Bits (Kernighan)

**Explanation**\
Repeatedly remove the lowest set bit: `x = x & (x - 1)`.

- Time: O(popcount(x))
- Space: O(1)

**Pseudo Code**
```text
function popcount_kernighan(x):
    c ← 0
    while x ≠ 0:
        x ← x & (x - 1)
        c ← c + 1
    return c
```

**Code**  
- C++: [`count_set_bits.cpp`](Bit/Algorithms/Counting/count_set_bits.cpp)  
- Python: [`count_set_bits.py`](Bit/Algorithms/Counting/count_set_bits.py)

---

###### Lowest Set Bit (lowbit) and Trailing Zeros

**Explanation**\
`lowbit(x) = x & -x` isolates the rightmost set bit. Count trailing zeros by shifting or using loops.

- Time: O(1) for lowbit; O(trailing zeros) if looping
- Space: O(1)

**Pseudo Code**
```text
function lowbit(x):
    return x & (-x)

function ctz_loop(x):
    if x == 0: return word_size
    c ← 0
    while (x & 1) == 0:
        c ← c + 1
        x ← x >> 1
    return c
```

**Code**  
- C++: [`lowbit_ctz.cpp`](Bit/Algorithms/Utilities/lowbit_ctz.cpp)  
- Python: [`lowbit_ctz.py`](Bit/Algorithms/Utilities/lowbit_ctz.py)

---

###### Isolate or Remove Rightmost Set Bit

**Explanation**\
Common masks: isolate `x & -x`; remove with `x & (x - 1)`.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function isolate_rightmost(x):
    return x & (-x)

function remove_rightmost(x):
    return x & (x - 1)
```

**Code**  
- C++: [`rightmost_bit.cpp`](Bit/Algorithms/Utilities/rightmost_bit.cpp)  
- Python: [`rightmost_bit.py`](Bit/Algorithms/Utilities/rightmost_bit.py)

---

###### Reverse Bits (fixed width)

**Explanation**\
Swap bit fields (1,2,4,8,...) using masks and shifts to reverse within 32 or 64 bits.

- Time: O(log word_size)
- Space: O(1)

**Pseudo Code**
```text
# 32-bit example
function reverse32(x):
    x ← ((x & 0x55555555) << 1) | ((x >> 1) & 0x55555555)
    x ← ((x & 0x33333333) << 2) | ((x >> 2) & 0x33333333)
    x ← ((x & 0x0f0f0f0f) << 4) | ((x >> 4) & 0x0f0f0f0f)
    x ← ((x & 0x00ff00ff) << 8) | ((x >> 8) & 0x00ff00ff)
    x ← (x << 16) | (x >> 16)
    return x
```

**Code**  
- C++: [`reverse_bits.cpp`](Bit/Algorithms/Transform/reverse_bits.cpp)  
- Python: [`reverse_bits.py`](Bit/Algorithms/Transform/reverse_bits.py)

---

###### Rotate Left / Right (circular)

**Explanation**\
Rotate bits by k within a fixed width `W` using masks.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function rol(x, k, W):
    k ← k mod W
    return ((x << k) | (x >> (W - k))) & ((1 << W) - 1)

function ror(x, k, W):
    k ← k mod W
    return ((x >> k) | (x << (W - k))) & ((1 << W) - 1)
```

**Code**  
- C++: [`rotate_bits.cpp`](Bit/Algorithms/Transform/rotate_bits.cpp)  
- Python: [`rotate_bits.py`](Bit/Algorithms/Transform/rotate_bits.py)

---

###### Swap Two Numbers (XOR swap)

**Explanation**\
Swap without temporary storage using XOR.

- Time: O(1)
- Space: O(1)

**Pseudo Code**
```text
function xor_swap(a, b):
    if a == b: return (a, b)  # safe guard
    a ← a ^ b
    b ← a ^ b
    a ← a ^ b
    return (a, b)
```

**Code**  
- C++: [`xor_swap.cpp`](Bit/Algorithms/Utilities/xor_swap.cpp)  
- Python: [`xor_swap.py`](Bit/Algorithms/Utilities/xor_swap.py)

---

###### Subset Enumeration (bitmask)

**Explanation**\
Iterate all subsets of a set of size `n` using masks from `0..(1<<n)-1`.

- Time: O(2^n * n) if visiting elements
- Space: O(1)

**Pseudo Code**
```text
function enumerate_subsets(n):
    for mask in 0..(1<<n)-1:
        # process subset represented by mask
        visit(mask)
```

**Code**  
- C++: [`enumerate_subsets.cpp`](Bit/Algorithms/Masks/enumerate_subsets.cpp)  
- Python: [`enumerate_subsets.py`](Bit/Algorithms/Masks/enumerate_subsets.py)

---

###### Submask Enumeration (DP over subsets)

**Explanation**\
Iterate all submasks of a given mask efficiently.

- Time: O(3^(n/3)) overall across all masks; O(#submasks) for one mask
- Space: O(1)

**Pseudo Code**
```text
function enumerate_submasks(mask):
    sub ← mask
    while sub ≠ 0:
        visit(sub)
        sub ← (sub - 1) & mask
    visit(0)
```

**Code**  
- C++: [`enumerate_submasks.cpp`](Bit/Algorithms/Masks/enumerate_submasks.cpp)  
- Python: [`enumerate_submasks.py`](Bit/Algorithms/Masks/enumerate_submasks.py)

---

###### Binary Exponentiation (fast power, optional mod)

**Explanation**\
Exponentiate by squaring using bits of the exponent.

- Time: O(log e)
- Space: O(1)

**Pseudo Code**
```text
function binpow(a, e, mod=None):
    res ← 1
    while e > 0:
        if e & 1: res ← (res * a) if mod is None else (res * a) mod mod
        a ← (a * a) if mod is None else (a * a) mod mod
        e ← e >> 1
    return res
```

**Code**  
- C++: [`binary_exponentiation.cpp`](Bit/Algorithms/Math/binary_exponentiation.cpp)  
- Python: [`binary_exponentiation.py`](Bit/Algorithms/Math/binary_exponentiation.py)

---

###### Single Non-Duplicate via XOR

**Explanation**\
If all numbers appear twice except one, XOR of all gives the unique one.

- Time: O(n)
- Space: O(1)

**Pseudo Code**
```text
function single_non_duplicate(A):
    x ← 0
    for v in A: x ← x ^ v
    return x
```

**Code**  
- C++: [`single_non_duplicate.cpp`](Bit/Algorithms/Array/single_non_duplicate.cpp)  
- Python: [`single_non_duplicate.py`](Bit/Algorithms/Array/single_non_duplicate.py)

---

###### Prefix XOR for Range Queries

**Explanation**\
Like prefix sums but with XOR: `px[i] = a[0] ^ ... ^ a[i]`. Range XOR `[l..r] = px[r] ^ px[l-1]`.

- Time: O(n) build; O(1) query
- Space: O(n)

**Pseudo Code**
```text
function build_prefix_xor(A):
    px[0] ← A[0]
    for i in 1..n-1: px[i] ← px[i-1] ^ A[i]
    return px

function range_xor(px, l, r):
    return px[r] if l == 0 else px[r] ^ px[l-1]
```

**Code**  
- C++: [`prefix_xor.cpp`](Bit/Algorithms/Array/prefix_xor.cpp)  
- Python: [`prefix_xor.py`](Bit/Algorithms/Array/prefix_xor.py)

---

###### Gray Code (n-bit sequence)

**Explanation**\
Each successive code differs by one bit: `g = i ^ (i >> 1)`.

- Time: O(2^n)
- Space: O(1) extra

**Pseudo Code**
```text
function gray_codes(n):
    for i in 0..(1<<n)-1:
        yield i ^ (i >> 1)
```

**Code**  
- C++: [`gray_code.cpp`](Bit/Algorithms/Sequences/gray_code.cpp)  
- Python: [`gray_code.py`](Bit/Algorithms/Sequences/gray_code.py)

---

## String

String storage models and classic pattern-matching algorithms.

### String: Implementation
- **C++**: [`c_style_char_array.cpp`](String/Implementation/C%2B%2B/c_style_char_array.cpp) · [`c_style_dynamic_cstr.cpp`](String/Implementation/C%2B%2B/c_style_dynamic_cstr.cpp) · [`string_stl.cpp`](String/Implementation/C%2B%2B/string_stl.cpp) · [`string_view_readonly.cpp`](String/Implementation/C%2B%2B/string_view_readonly.cpp) · [`vector_char_buffer.cpp`](String/Implementation/C%2B%2B/vector_char_buffer.cpp) · [`fixed_string_template.cpp`](String/Implementation/C%2B%2B/fixed_string_template.cpp) · [`gap_buffer_text.cpp`](String/Implementation/C%2B%2B/gap_buffer_text.cpp) · [`rope_text_buffer.cpp`](String/Implementation/C%2B%2B/rope_text_buffer.cpp)
- **Python**: [`builtin_str_immutable.py`](String/Implementation/Python/builtin_str_immutable.py) · [`bytes_sequence.py`](String/Implementation/Python/bytes_sequence.py) · [`bytearray_mutable.py`](String/Implementation/Python/bytearray_mutable.py) · [`list_of_chars_buffer.py`](String/Implementation/Python/list_of_chars_buffer.py) · [`io_stringio_builder.py`](String/Implementation/Python/io_stringio_builder.py) · [`memoryview_bytes_view.py`](String/Implementation/Python/memoryview_bytes_view.py)

### String: Algorithms
- [`kmp_search.cpp`](String/Algorithms/kmp_search.cpp) · [`kmp_search.py`](String/Algorithms/kmp_search.py)
- [`rabin_karp.cpp`](String/Algorithms/rabin_karp.cpp) · [`rabin_karp.py`](String/Algorithms/rabin_karp.py)
- [`z_algorithm.cpp`](String/Algorithms/z_algorithm.cpp) · [`z_algorithm.py`](String/Algorithms/z_algorithm.py)
- [`manacher_algorithm.cpp`](String/Algorithms/manacher_algorithm.cpp) · [`manacher_algorithm.py`](String/Algorithms/manacher_algorithm.py)

---

## Number_Theory

Basic arithmetic utilities and classic prime/CRT/primality algorithms.

### Number Theory: Implementation
- **C++**: [`gcd.cpp`](Number_Theory/Implementation/C%2B%2B/gcd.cpp) · [`lcm.cpp`](Number_Theory/Implementation/C%2B%2B/lcm.cpp) · [`modular_exponentiation.cpp`](Number_Theory/Implementation/C%2B%2B/modular_exponentiation.cpp) · [`modular_inverse.cpp`](Number_Theory/Implementation/C%2B%2B/modular_inverse.cpp)
- **Python**: [`gcd.py`](Number_Theory/Implementation/Python/gcd.py) · [`lcm.py`](Number_Theory/Implementation/Python/lcm.py) · [`modular_exponentiation.py`](Number_Theory/Implementation/Python/modular_exponentiation.py) · [`modular_inverse.py`](Number_Theory/Implementation/Python/modular_inverse.py)

### Number Theory: Algorithms
- [`sieve_of_eratosthenes.cpp`](Number_Theory/Algorithms/sieve_of_eratosthenes.cpp) · [`sieve_of_eratosthenes.py`](Number_Theory/Algorithms/sieve_of_eratosthenes.py)
- [`segmented_sieve.cpp`](Number_Theory/Algorithms/segmented_sieve.cpp) · [`segmented_sieve.py`](Number_Theory/Algorithms/segmented_sieve.py)
- [`chinese_remainder_theorem.cpp`](Number_Theory/Algorithms/chinese_remainder_theorem.cpp) · [`chinese_remainder_theorem.py`](Number_Theory/Algorithms/chinese_remainder_theorem.py)
- [`miller_rabin_primality_test.cpp`](Number_Theory/Algorithms/miller_rabin_primality_test.cpp) · [`miller_rabin_primality_test.py`](Number_Theory/Algorithms/miller_rabin_primality_test.py)

---

## Programming_Paradigms

Problem-solving strategies with representative implementations and canonical problems.

### Greedy

#### Greedy: Implementation
- **C++**: [`interval_struct.cpp`](Programming_Paradigms/Greedy/Implementation/C%2B%2B/interval_struct.cpp) · [`comparator_by_finish_time.cpp`](Programming_Paradigms/Greedy/Implementation/C%2B%2B/comparator_by_finish_time.cpp) · [`comparator_by_profit_deadline.cpp`](Programming_Paradigms/Greedy/Implementation/C%2B%2B/comparator_by_profit_deadline.cpp) · [`comparator_by_value_weight_ratio.cpp`](Programming_Paradigms/Greedy/Implementation/C%2B%2B/comparator_by_value_weight_ratio.cpp) · [`min_heap_wrapper.cpp`](Programming_Paradigms/Greedy/Implementation/C%2B%2B/min_heap_wrapper.cpp)
- **Python**: [`interval_struct.py`](Programming_Paradigms/Greedy/Implementation/Python/interval_struct.py) · [`comparator_by_finish_time.py`](Programming_Paradigms/Greedy/Implementation/Python/comparator_by_finish_time.py) · [`comparator_by_profit_deadline.py`](Programming_Paradigms/Greedy/Implementation/Python/comparator_by_profit_deadline.py) · [`comparator_by_value_weight_ratio.py`](Programming_Paradigms/Greedy/Implementation/Python/comparator_by_value_weight_ratio.py) · [`min_heap_wrapper.py`](Programming_Paradigms/Greedy/Implementation/Python/min_heap_wrapper.py)

#### Greedy: Algorithms
- [`activity_selection.cpp`](Programming_Paradigms/Greedy/Algorithms/activity_selection.cpp) · [`activity_selection.py`](Programming_Paradigms/Greedy/Algorithms/activity_selection.py)
- [`fractional_knapsack.cpp`](Programming_Paradigms/Greedy/Algorithms/fractional_knapsack.cpp) · [`fractional_knapsack.py`](Programming_Paradigms/Greedy/Algorithms/fractional_knapsack.py)
- [`job_sequencing_with_deadlines.cpp`](Programming_Paradigms/Greedy/Algorithms/job_sequencing_with_deadlines.cpp) · [`job_sequencing_with_deadlines.py`](Programming_Paradigms/Greedy/Algorithms/job_sequencing_with_deadlines.py)
- [`huffman_coding.cpp`](Programming_Paradigms/Greedy/Algorithms/huffman_coding.cpp) · [`huffman_coding.py`](Programming_Paradigms/Greedy/Algorithms/huffman_coding.py)
- [`optimal_merge_pattern.cpp`](Programming_Paradigms/Greedy/Algorithms/optimal_merge_pattern.cpp) · [`optimal_merge_pattern.py`](Programming_Paradigms/Greedy/Algorithms/optimal_merge_pattern.py)
- [`interval_partitioning_min_rooms.cpp`](Programming_Paradigms/Greedy/Algorithms/interval_partitioning_min_rooms.cpp) · [`interval_partitioning_min_rooms.py`](Programming_Paradigms/Greedy/Algorithms/interval_partitioning_min_rooms.py)
- [`min_number_of_platforms.cpp`](Programming_Paradigms/Greedy/Algorithms/min_number_of_platforms.cpp) · [`min_number_of_platforms.py`](Programming_Paradigms/Greedy/Algorithms/min_number_of_platforms.py)
- [`greedy_coin_change.cpp`](Programming_Paradigms/Greedy/Algorithms/greedy_coin_change.cpp) · [`greedy_coin_change.py`](Programming_Paradigms/Greedy/Algorithms/greedy_coin_change.py)
- [`gas_station_circuit.cpp`](Programming_Paradigms/Greedy/Algorithms/gas_station_circuit.cpp) · [`gas_station_circuit.py`](Programming_Paradigms/Greedy/Algorithms/gas_station_circuit.py)
- [`assign_cookies.cpp`](Programming_Paradigms/Greedy/Algorithms/assign_cookies.cpp) · [`assign_cookies.py`](Programming_Paradigms/Greedy/Algorithms/assign_cookies.py)
- [`candy_distribution.cpp`](Programming_Paradigms/Greedy/Algorithms/candy_distribution.cpp) · [`candy_distribution.py`](Programming_Paradigms/Greedy/Algorithms/candy_distribution.py)

### Divide and Conquer

#### DAC: Implementation
- **C++**: [`dac_template.cpp`](Programming_Paradigms/Divide_and_Conquer/Implementation/C%2B%2B/dac_template.cpp) · [`merge_combine.cpp`](Programming_Paradigms/Divide_and_Conquer/Implementation/C%2B%2B/merge_combine.cpp) · [`partition_scheme_lomuto.cpp`](Programming_Paradigms/Divide_and_Conquer/Implementation/C%2B%2B/partition_scheme_lomuto.cpp) · [`partition_scheme_hoare.cpp`](Programming_Paradigms/Divide_and_Conquer/Implementation/C%2B%2B/partition_scheme_hoare.cpp) · [`conquer_inversions_combine.cpp`](Programming_Paradigms/Divide_and_Conquer/Implementation/C%2B%2B/conquer_inversions_combine.cpp)
- **Python**: [`dac_template.py`](Programming_Paradigms/Divide_and_Conquer/Implementation/Python/dac_template.py) · [`merge_combine.py`](Programming_Paradigms/Divide_and_Conquer/Implementation/Python/merge_combine.py) · [`partition_scheme_lomuto.py`](Programming_Paradigms/Divide_and_Conquer/Implementation/Python/partition_scheme_lomuto.py) · [`partition_scheme_hoare.py`](Programming_Paradigms/Divide_and_Conquer/Implementation/Python/partition_scheme_hoare.py) · [`conquer_inversions_combine.py`](Programming_Paradigms/Divide_and_Conquer/Implementation/Python/conquer_inversions_combine.py)

#### DAC: Algorithms
- [`maximum_subarray_divide_conquer.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/maximum_subarray_divide_conquer.cpp) · [`maximum_subarray_divide_conquer.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/maximum_subarray_divide_conquer.py)
- [`count_inversions_merge.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/count_inversions_merge.cpp) · [`count_inversions_merge.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/count_inversions_merge.py)
- [`closest_pair_of_points_divide_conquer.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/closest_pair_of_points_divide_conquer.cpp) · [`closest_pair_of_points_divide_conquer.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/closest_pair_of_points_divide_conquer.py)
- [`kth_element_quickselect.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/kth_element_quickselect.cpp) · [`kth_element_quickselect.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/kth_element_quickselect.py)
- [`fast_power_binary_exponentiation.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/fast_power_binary_exponentiation.cpp) · [`fast_power_binary_exponentiation.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/fast_power_binary_exponentiation.py)
- [`matrix_exponentiation_fast_doubling.cpp`](Programming_Paradigms/Divide_and_Conquer/Algorithms/matrix_exponentiation_fast_doubling.cpp) · [`matrix_exponentiation_fast_doubling.py`](Programming_Paradigms/Divide_and_Conquer/Algorithms/matrix_exponentiation_fast_doubling.py)

### Backtracking

#### Backtracking: Implementation
- **C++**: [`backtracking_framework.cpp`](Programming_Paradigms/Backtracking/Implementation/C%2B%2B/backtracking_framework.cpp) · [`choice_generator.cpp`](Programming_Paradigms/Backtracking/Implementation/C%2B%2B/choice_generator.cpp) · [`constraint_checker.cpp`](Programming_Paradigms/Backtracking/Implementation/C%2B%2B/constraint_checker.cpp) · [`state_representation_minimal.cpp`](Programming_Paradigms/Backtracking/Implementation/C%2B%2B/state_representation_minimal.cpp)
- **Python**: [`backtracking_framework.py`](Programming_Paradigms/Backtracking/Implementation/Python/backtracking_framework.py) · [`choice_generator.py`](Programming_Paradigms/Backtracking/Implementation/Python/choice_generator.py) · [`constraint_checker.py`](Programming_Paradigms/Backtracking/Implementation/Python/constraint_checker.py) · [`state_representation_minimal.py`](Programming_Paradigms/Backtracking/Implementation/Python/state_representation_minimal.py)

#### Backtracking: Algorithms
- [`n_queens.cpp`](Programming_Paradigms/Backtracking/Algorithms/n_queens.cpp) · [`n_queens.py`](Programming_Paradigms/Backtracking/Algorithms/n_queens.py)
- [`sudoku_solver.cpp`](Programming_Paradigms/Backtracking/Algorithms/sudoku_solver.cpp) · [`sudoku_solver.py`](Programming_Paradigms/Backtracking/Algorithms/sudoku_solver.py)
- [`hamiltonian_cycle.cpp`](Programming_Paradigms/Backtracking/Algorithms/hamiltonian_cycle.cpp) · [`hamiltonian_cycle.py`](Programming_Paradigms/Backtracking/Algorithms/hamiltonian_cycle.py)
- [`word_search_grid.cpp`](Programming_Paradigms/Backtracking/Algorithms/word_search_grid.cpp) · [`word_search_grid.py`](Programming_Paradigms/Backtracking/Algorithms/word_search_grid.py)
- [`permutations.cpp`](Programming_Paradigms/Backtracking/Algorithms/permutations.cpp) · [`permutations.py`](Programming_Paradigms/Backtracking/Algorithms/permutations.py)
- [`combinations.cpp`](Programming_Paradigms/Backtracking/Algorithms/combinations.cpp) · [`combinations.py`](Programming_Paradigms/Backtracking/Algorithms/combinations.py)
- [`subsets.cpp`](Programming_Paradigms/Backtracking/Algorithms/subsets.cpp) · [`subsets.py`](Programming_Paradigms/Backtracking/Algorithms/subsets.py)
- [`combination_sum.cpp`](Programming_Paradigms/Backtracking/Algorithms/combination_sum.cpp) · [`combination_sum.py`](Programming_Paradigms/Backtracking/Algorithms/combination_sum.py)

### Dynamic Programming

#### DP: Implementation
- **C++**: [`memoization_table_array.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/memoization_table_array.cpp) · [`memoization_table_map.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/memoization_table_map.cpp) · [`tabulation_1d.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/tabulation_1d.cpp) · [`tabulation_2d.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/tabulation_2d.cpp) · [`space_optimization_rolling_array.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/space_optimization_rolling_array.cpp) · [`state_compression_bitmask.cpp`](Programming_Paradigms/Dynamic_Programming/Implementation/C%2B%2B/state_compression_bitmask.cpp)
- **Python**: [`memoization_table_array.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/memoization_table_array.py) · [`memoization_table_map.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/memoization_table_map.py) · [`tabulation_1d.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/tabulation_1d.py) · [`tabulation_2d.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/tabulation_2d.py) · [`space_optimization_rolling_array.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/space_optimization_rolling_array.py) · [`state_compression_bitmask.py`](Programming_Paradigms/Dynamic_Programming/Implementation/Python/state_compression_bitmask.py)

#### DP: Algorithms
- [`knapsack_01.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/knapsack_01.cpp) · [`knapsack_01.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/knapsack_01.py)
- [`unbounded_knapsack.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/unbounded_knapsack.cpp) · [`unbounded_knapsack.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/unbounded_knapsack.py)
- [`coin_change_min_coins.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/coin_change_min_coins.cpp) · [`coin_change_min_coins.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/coin_change_min_coins.py)
- [`coin_change_number_of_ways.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/coin_change_number_of_ways.cpp) · [`coin_change_number_of_ways.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/coin_change_number_of_ways.py)
- [`longest_common_subsequence.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_common_subsequence.cpp) · [`longest_common_subsequence.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_common_subsequence.py)
- [`edit_distance.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/edit_distance.cpp) · [`edit_distance.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/edit_distance.py)
- [`matrix_chain_multiplication.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/matrix_chain_multiplication.cpp) · [`matrix_chain_multiplication.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/matrix_chain_multiplication.py)
- [`longest_increasing_subsequence_n2.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_increasing_subsequence_n2.cpp) · [`longest_increasing_subsequence_n2.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_increasing_subsequence_n2.py)
- [`rod_cutting.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/rod_cutting.cpp) · [`rod_cutting.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/rod_cutting.py)
- [`subset_sum.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/subset_sum.cpp) · [`subset_sum.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/subset_sum.py)
- [`partition_equal_subset_sum.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/partition_equal_subset_sum.cpp) · [`partition_equal_subset_sum.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/partition_equal_subset_sum.py)
- [`longest_palindromic_subsequence.cpp`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_palindromic_subsequence.cpp) · [`longest_palindromic_subsequence.py`](Programming_Paradigms/Dynamic_Programming/Algorithms/longest_palindromic_subsequence.py)

---

**Notes**
- C++ path components are URL-encoded as `C%2B%2B` in links.
- Internal anchors follow GitHub-style heading IDs.

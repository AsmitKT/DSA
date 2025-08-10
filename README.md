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

### Array: Algorithms

#### Sorting

##### Comparison
- [`bubble_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/bubble_sort.cpp) · [`bubble_sort.py`](Arrays/Algorithms/Sorting/Comparison/bubble_sort.py)
- [`selection_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/selection_sort.cpp) · [`selection_sort.py`](Arrays/Algorithms/Sorting/Comparison/selection_sort.py)
- [`insertion_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/insertion_sort.cpp) · [`insertion_sort.py`](Arrays/Algorithms/Sorting/Comparison/insertion_sort.py)
- [`shell_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/shell_sort.cpp) · [`shell_sort.py`](Arrays/Algorithms/Sorting/Comparison/shell_sort.py)
- [`merge_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/merge_sort.cpp) · [`merge_sort.py`](Arrays/Algorithms/Sorting/Comparison/merge_sort.py)
- [`quick_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/quick_sort.cpp) · [`quick_sort.py`](Arrays/Algorithms/Sorting/Comparison/quick_sort.py)
- [`heap_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/heap_sort.cpp) · [`heap_sort.py`](Arrays/Algorithms/Sorting/Comparison/heap_sort.py)
- [`tim_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/tim_sort.cpp) · [`tim_sort.py`](Arrays/Algorithms/Sorting/Comparison/tim_sort.py)
- [`intro_sort.cpp`](Arrays/Algorithms/Sorting/Comparison/intro_sort.cpp) · [`intro_sort.py`](Arrays/Algorithms/Sorting/Comparison/intro_sort.py)

##### Non-Comparison
- [`counting_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/counting_sort.cpp) · [`counting_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/counting_sort.py)
- [`radix_sort_lsd.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_lsd.cpp) · [`radix_sort_lsd.py`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_lsd.py)
- [`radix_sort_msd.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_msd.cpp) · [`radix_sort_msd.py`](Arrays/Algorithms/Sorting/Non-Comparison/radix_sort_msd.py)
- [`bucket_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/bucket_sort.cpp) · [`bucket_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/bucket_sort.py)
- [`pigeonhole_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/pigeonhole_sort.cpp) · [`pigeonhole_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/pigeonhole_sort.py)
- [`flash_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/flash_sort.cpp) · [`flash_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/flash_sort.py)
- [`american_flag_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/american_flag_sort.cpp) · [`american_flag_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/american_flag_sort.py)
- [`postman_sort.cpp`](Arrays/Algorithms/Sorting/Non-Comparison/postman_sort.cpp) · [`postman_sort.py`](Arrays/Algorithms/Sorting/Non-Comparison/postman_sort.py)

#### Searching

##### Unsorted
- [`linear_search.cpp`](Arrays/Algorithms/Searching/Unsorted/linear_search.cpp) · [`linear_search.py`](Arrays/Algorithms/Searching/Unsorted/linear_search.py)
- [`sentinel_linear_search.cpp`](Arrays/Algorithms/Searching/Unsorted/sentinel_linear_search.cpp) · [`sentinel_linear_search.py`](Arrays/Algorithms/Searching/Unsorted/sentinel_linear_search.py)
- [`sublist_subarray_search.cpp`](Arrays/Algorithms/Searching/Unsorted/sublist_subarray_search.cpp) · [`sublist_subarray_search.py`](Arrays/Algorithms/Searching/Unsorted/sublist_subarray_search.py)
- [`two_poiner_search.cpp`](Arrays/Algorithms/Searching/Unsorted/two_poiner_search.cpp) · [`two_poiner_search.py`](Arrays/Algorithms/Searching/Unsorted/two_poiner_search.py)
- [`self_organizing_search.cpp`](Arrays/Algorithms/Searching/Unsorted/self_organizing_search.cpp) · [`self_organizing_search.py`](Arrays/Algorithms/Searching/Unsorted/self_organizing_search.py)

##### Sorted

###### Binary Iterative
**Explanation**  
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

###### Binary Recursive
**Explanation**  
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

###### More Sorted Searches
- [`ternary_search.cpp`](Arrays/Algorithms/Searching/Sorted/ternary_search.cpp) · [`ternary_search.py`](Arrays/Algorithms/Searching/Sorted/ternary_search.py)
- [`fibonacci_search.cpp`](Arrays/Algorithms/Searching/Sorted/fibonacci_search.cpp) · [`fibonacci_search.py`](Arrays/Algorithms/Searching/Sorted/fibonacci_search.py)
- [`jump_search.cpp`](Arrays/Algorithms/Searching/Sorted/jump_search.cpp) · [`jump_search.py`](Arrays/Algorithms/Searching/Sorted/jump_search.py)
- [`exponential_search.cpp`](Arrays/Algorithms/Searching/Sorted/exponential_search.cpp) · [`exponential_search.py`](Arrays/Algorithms/Searching/Sorted/exponential_search.py)
- [`interpolation_search.cpp`](Arrays/Algorithms/Searching/Sorted/interpolation_search.cpp) · [`interpolation_search.py`](Arrays/Algorithms/Searching/Sorted/interpolation_search.py)
- [`block_search.cpp`](Arrays/Algorithms/Searching/Sorted/block_search.cpp) · [`block_search.py`](Arrays/Algorithms/Searching/Sorted/block_search.py)
- [`meta_binary_search.cpp`](Arrays/Algorithms/Searching/Sorted/meta_binary_search.cpp) · [`meta_binary_search.py`](Arrays/Algorithms/Searching/Sorted/meta_binary_search.py)

#### Sliding Window

##### Fixed Size
- [`max_sum_subarray_of_size_k.cpp`](Arrays/Algorithms/Sliding_Window/Fixed_Size/max_sum_subarray_of_size_k.cpp) · [`max_sum_subarray_of_size_k.py`](Arrays/Algorithms/Sliding_Window/Fixed_Size/max_sum_subarray_of_size_k.py)
- [`average_of_subarrays_of_size_k.cpp`](Arrays/Algorithms/Sliding_Window/Fixed_Size/average_of_subarrays_of_size_k.cpp) · [`average_of_subarrays_of_size_k.py`](Arrays/Algorithms/Sliding_Window/Fixed_Size/average_of_subarrays_of_size_k.py)

##### Variable Size
- [`longest_subarray_sum_at_most_k.cpp`](Arrays/Algorithms/Sliding_Window/Variable_Size/longest_subarray_sum_at_most_k.cpp) · [`longest_subarray_sum_at_most_k.py`](Arrays/Algorithms/Sliding_Window/Variable_Size/longest_subarray_sum_at_most_k.py)
- [`smallest_subarray_with_sum_greater_than_k.cpp`](Arrays/Algorithms/Sliding_Window/Variable_Size/smallest_subarray_with_sum_greater_than_k.cpp) · [`smallest_subarray_with_sum_greater_than_k.py`](Arrays/Algorithms/Sliding_Window/Variable_Size/smallest_subarray_with_sum_greater_than_k.py)

##### Two Pointer
- [`longest_substring_k_distinct.cpp`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_k_distinct.cpp) · [`longest_substring_k_distinct.py`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_k_distinct.py)
- [`longest_substring_without_repeating_chars.cpp`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_without_repeating_chars.cpp) · [`longest_substring_without_repeating_chars.py`](Arrays/Algorithms/Sliding_Window/Two_Pointer/longest_substring_without_repeating_chars.py)

##### Deque Based
- [`sliding_window_maximum.cpp`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_maximum.cpp) · [`sliding_window_maximum.py`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_maximum.py)
- [`sliding_window_minimum.cpp`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_minimum.cpp) · [`sliding_window_minimum.py`](Arrays/Algorithms/Sliding_Window/Deque_Based/sliding_window_minimum.py)

##### Frequency Based
- [`find_all_anagrams_in_string.cpp`](Arrays/Algorithms/Sliding_Window/Frequency_Based/find_all_anagrams_in_string.cpp) · [`find_all_anagrams_in_string.py`](Arrays/Algorithms/Sliding_Window/Frequency_Based/find_all_anagrams_in_string.py)
- [`count_substrings_with_constraints.cpp`](Arrays/Algorithms/Sliding_Window/Frequency_Based/count_substrings_with_constraints.cpp) · [`count_substrings_with_constraints.py`](Arrays/Algorithms/Sliding_Window/Frequency_Based/count_substrings_with_constraints.py)

##### Circular
- [`max_sum_circular_subarray.cpp`](Arrays/Algorithms/Sliding_Window/Circular/max_sum_circular_subarray.cpp) · [`max_sum_circular_subarray.py`](Arrays/Algorithms/Sliding_Window/Circular/max_sum_circular_subarray.py)
- [`circular_window_rotation.cpp`](Arrays/Algorithms/Sliding_Window/Circular/circular_window_rotation.cpp) · [`circular_window_rotation.py`](Arrays/Algorithms/Sliding_Window/Circular/circular_window_rotation.py)

#### Prefix Sum
- [`prefix_sum_array.cpp`](Arrays/Algorithms/Prefix_Sum/prefix_sum_array.cpp) · [`prefix_sum_array.py`](Arrays/Algorithms/Prefix_Sum/prefix_sum_array.py)
- [`difference_array.cpp`](Arrays/Algorithms/Prefix_Sum/difference_array.cpp) · [`difference_array.py`](Arrays/Algorithms/Prefix_Sum/difference_array.py)

#### Kadane Algorithm
- [`max_sum_subarray.cpp`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray.cpp) · [`max_sum_subarray.py`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray.py)
- [`max_sum_subarray_circular.cpp`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray_circular.cpp) · [`max_sum_subarray_circular.py`](Arrays/Algorithms/Kadane_Algorithm/max_sum_subarray_circular.py)

#### Rotation
- [`array_rotation_left.cpp`](Arrays/Algorithms/Rotation/array_rotation_left.cpp) · [`array_rotation_left.py`](Arrays/Algorithms/Rotation/array_rotation_left.py)
- [`array_rotation_right.cpp`](Arrays/Algorithms/Rotation/array_rotation_right.cpp) · [`array_rotation_right.py`](Arrays/Algorithms/Rotation/array_rotation_right.py)

#### Rearrangement
- [`rearrange_pos_neg.cpp`](Arrays/Algorithms/Rearrangement/rearrange_pos_neg.cpp) · [`rearrange_pos_neg.py`](Arrays/Algorithms/Rearrangement/rearrange_pos_neg.py)
- [`partition_array.cpp`](Arrays/Algorithms/Rearrangement/partition_array.cpp) · [`partition_array.py`](Arrays/Algorithms/Rearrangement/partition_array.py)

#### Miscellaneous
- [`dutch_national_flag.cpp`](Arrays/Algorithms/Miscellaneous/dutch_national_flag.cpp) · [`dutch_national_flag.py`](Arrays/Algorithms/Miscellaneous/dutch_national_flag.py)
- [`majority_element.cpp`](Arrays/Algorithms/Miscellaneous/majority_element.cpp) · [`majority_element.py`](Arrays/Algorithms/Miscellaneous/majority_element.py)

### Array: Derived Structures

#### Stack
- **C++**: [`stack_c_styled_array.cpp`](Arrays/Derived_Structures/Stack/Implementation/C%2B%2B/stack_c_styled_array.cpp) · [`stack.cpp`](Arrays/Derived_Structures/Stack/Implementation/C%2B%2B/stack.cpp) · [`peek.cpp`](Arrays/Derived_Structures/Stack/Implementation/C%2B%2B/peek.cpp)
- **Python**: [`stack_array_list.py`](Arrays/Derived_Structures/Stack/Implementation/Python/stack_array_list.py) · [`stack_array_module.py`](Arrays/Derived_Structures/Stack/Implementation/Python/stack_array_module.py) · [`stack_array_numpy.py`](Arrays/Derived_Structures/Stack/Implementation/Python/stack_array_numpy.py)

#### Queue
- **C++**: [`queue_array.cpp`](Arrays/Derived_Structures/Queue/Implementation/C%2B%2B/queue_array.cpp) · [`circular_queue_array.cpp`](Arrays/Derived_Structures/Queue/Implementation/C%2B%2B/circular_queue_array.cpp) · [`priority_queue_array.cpp`](Arrays/Derived_Structures/Queue/Implementation/C%2B%2B/priority_queue_array.cpp)
- **Python**: [`queue_array_list.py`](Arrays/Derived_Structures/Queue/Implementation/Python/queue_array_list.py) · [`circular_queue_array.py`](Arrays/Derived_Structures/Queue/Implementation/Python/circular_queue_array.py) · [`priority_queue_array.py`](Arrays/Derived_Structures/Queue/Implementation/Python/priority_queue_array.py)

#### Deque
- **C++**: [`deque_array.cpp`](Arrays/Derived_Structures/Deque/Implementation/C%2B%2B/deque_array.cpp) · [`circular_deque_array.cpp`](Arrays/Derived_Structures/Deque/Implementation/C%2B%2B/circular_deque_array.cpp)  
- **Python**: [`deque_array_list.py`](Arrays/Derived_Structures/Deque/Implementation/Python/deque_array_list.py) · [`circular_deque_array.py`](Arrays/Derived_Structures/Deque/Implementation/Python/circular_deque_array.py)

#### Heap Array
- **C++**: [`binary_heap_array.cpp`](Arrays/Derived_Structures/Heap_Array/Implementation/C%2B%2B/binary_heap_array.cpp) · [`min_heap_array.cpp`](Arrays/Derived_Structures/Heap_Array/Implementation/C%2B%2B/min_heap_array.cpp) · [`max_heap_array.cpp`](Arrays/Derived_Structures/Heap_Array/Implementation/C%2B%2B/max_heap_array.cpp)
- **Python**: [`binary_heap_array.py`](Arrays/Derived_Structures/Heap_Array/Implementation/Python/binary_heap_array.py) · [`min_heap_array.py`](Arrays/Derived_Structures/Heap_Array/Implementation/Python/min_heap_array.py) · [`max_heap_array.py`](Arrays/Derived_Structures/Heap_Array/Implementation/Python/max_heap_array.py)

---

## Matrix

Matrices represent 2D collections of values. They support structured traversal, transformations, and specialized multiplication algorithms.

### Matrix: Implementation

- **C++**: [`2D_array.cpp`](Matrix/Implementation/C%2B%2B/2D_array.cpp) · [`nested_vector.cpp`](Matrix/Implementation/C%2B%2B/nested_vector.cpp)  
- **Python**: [`nested_list.py`](Matrix/Implementation/Python/nested_list.py) · [`list_comprehensions.py`](Matrix/Implementation/Python/list_comprehensions.py) · [`numpy_arrays.py`](Matrix/Implementation/Python/numpy_arrays.py)

### Matrix: Algorithms

#### Traversal
- [`row_wise.cpp`](Matrix/Algorithms/Traversal/row_wise.cpp) · [`row_wise.py`](Matrix/Algorithms/Traversal/row_wise.py)
- [`column_wise.cpp`](Matrix/Algorithms/Traversal/column_wise.cpp) · [`column_wise.py`](Matrix/Algorithms/Traversal/column_wise.py)
- [`diagonal.cpp`](Matrix/Algorithms/Traversal/diagonal.cpp) · [`diagonal.py`](Matrix/Algorithms/Traversal/diagonal.py)
- [`spiral.cpp`](Matrix/Algorithms/Traversal/spiral.cpp) · [`spiral.py`](Matrix/Algorithms/Traversal/spiral.py)

#### Matrix Searching {#matrix-searching}
- [`linear_search_matrix.cpp`](Matrix/Algorithms/Searching/linear_search_matrix.cpp) · [`linear_search_matrix.py`](Matrix/Algorithms/Searching/linear_search_matrix.py)
- [`staircase_search.cpp`](Matrix/Algorithms/Searching/staircase_search.cpp) · [`staircase_search.py`](Matrix/Algorithms/Searching/staircase_search.py)

#### Transformation
- [`transpose.cpp`](Matrix/Algorithms/Transformation/transpose.cpp) · [`transpose.py`](Matrix/Algorithms/Transformation/transpose.py)
- [`rotate.cpp`](Matrix/Algorithms/Transformation/rotate.cpp) · [`rotate.py`](Matrix/Algorithms/Transformation/rotate.py)
- [`flip.cpp`](Matrix/Algorithms/Transformation/flip.cpp) · [`flip.py`](Matrix/Algorithms/Transformation/flip.py)
- [`shear.cpp`](Matrix/Algorithms/Transformation/shear.cpp) · [`shear.py`](Matrix/Algorithms/Transformation/shear.py)
- [`scale.cpp`](Matrix/Algorithms/Transformation/scale.cpp) · [`scale.py`](Matrix/Algorithms/Transformation/scale.py)

#### Specialized Algos
- [`matrix_multiplication_naive.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_naive.cpp) · [`matrix_multiplication_naive.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_naive.py)
- [`matrix_multiplication_strassen.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_strassen.cpp) · [`matrix_multiplication_strassen.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_strassen.py)
- [`matrix_multiplication_winograd.cpp`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_winograd.cpp) · [`matrix_multiplication_winograd.py`](Matrix/Algorithms/Specialized_Algos/matrix_multiplication_winograd.py)
- [`sparse_matrix_operations.cpp`](Matrix/Algorithms/Specialized_Algos/sparse_matrix_operations.cpp) · [`sparse_matrix_operations.py`](Matrix/Algorithms/Specialized_Algos/sparse_matrix_operations.py)

### Matrix: Derived Structures

#### Sparse Matrix
- **C++**: [`sparse_matrix.cpp`](Matrix/Derived_Structures/Sparse_Matrix/Implementation/sparse_matrix.cpp)  
- **Python**: [`sparse_matrix.py`](Matrix/Derived_Structures/Sparse_Matrix/Implementation/sparse_matrix.py)

#### Adjacency Matrix
- **C++**: [`adjacency_matrix.cpp`](Matrix/Derived_Structures/Adjacency_Matrix/Implementation/adjacency_matrix.cpp)  
- **Python**: [`adjacency_matrix.py`](Matrix/Derived_Structures/Adjacency_Matrix/Implementation/adjacency_matrix.py)

#### Incidence Matrix
- **C++**: [`incidence_matrix.cpp`](Matrix/Derived_Structures/Incidence_Matrix/Implementation/incidence_matrix.cpp)  
- **Python**: [`incidence_matrix.py`](Matrix/Derived_Structures/Incidence_Matrix/Implementation/incidence_matrix.py)

#### Transformation Matrix
- **C++**: [`transformation_matrix.cpp`](Matrix/Derived_Structures/Transformation_Matrix/Implementation/transformation_matrix.cpp)  
- **Python**: [`transformation_matrix.py`](Matrix/Derived_Structures/Transformation_Matrix/Implementation/transformation_matrix.py)

#### Markov Matrix
- **C++**: [`markov_matrix.cpp`](Matrix/Derived_Structures/Markov_Matrix/Implementation/markov_matrix.cpp)  
- **Python**: [`markov_matrix.py`](Matrix/Derived_Structures/Markov_Matrix/Implementation/markov_matrix.py)

#### Distance Matrix
- **C++**: [`distance_matrix.cpp`](Matrix/Derived_Structures/Distance_Matrix/Implementation/distance_matrix.cpp)  
- **Python**: [`distance_matrix.py`](Matrix/Derived_Structures/Distance_Matrix/Implementation/distance_matrix.py)

---

## Nodes

Nodes are the atomic building blocks of linked structures (lists, trees, graphs).

### Nodes: Implementation
- **C++**: [`node_class.cpp`](Nodes/Implementation/C%2B%2B/node_class.cpp) · [`node_struct.cpp`](Nodes/Implementation/C%2B%2B/node_struct.cpp)  
- **Python**: [`node_class.py`](Nodes/Implementation/Python/node_class.py)

### Nodes: Derived Structures

#### Linked List
- [`singly_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/singly_linked_list.cpp) · [`singly_linked_list.py`](Nodes/Derived_Structures/Linked_List/singly_linked_list.py)
- [`doubly_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/doubly_linked_list.cpp) · [`doubly_linked_list.py`](Nodes/Derived_Structures/Linked_List/doubly_linked_list.py)
- [`circular_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/circular_linked_list.cpp) · [`circular_linked_list.py`](Nodes/Derived_Structures/Linked_List/circular_linked_list.py)
- [`reverse_linked_list.cpp`](Nodes/Derived_Structures/Linked_List/reverse_linked_list.cpp) · [`reverse_linked_list.py`](Nodes/Derived_Structures/Linked_List/reverse_linked_list.py)
- [`merge_linked_lists.cpp`](Nodes/Derived_Structures/Linked_List/merge_linked_lists.cpp) · [`merge_linked_lists.py`](Nodes/Derived_Structures/Linked_List/merge_linked_lists.py)
- [`cycle_detection.cpp`](Nodes/Derived_Structures/Linked_List/cycle_detection.cpp) · [`cycle_detection.py`](Nodes/Derived_Structures/Linked_List/cycle_detection.py)
- [`remove_nth_node.cpp`](Nodes/Derived_Structures/Linked_List/remove_nth_node.cpp) · [`remove_nth_node.py`](Nodes/Derived_Structures/Linked_List/remove_nth_node.py)
- [`split_merge_lists.cpp`](Nodes/Derived_Structures/Linked_List/split_merge_lists.cpp) · [`split_merge_lists.py`](Nodes/Derived_Structures/Linked_List/split_merge_lists.py)

#### Tree
- [`binary_tree.cpp`](Nodes/Derived_Structures/Tree/binary_tree.cpp) · [`binary_tree.py`](Nodes/Derived_Structures/Tree/binary_tree.py)
- [`binary_search_tree.cpp`](Nodes/Derived_Structures/Tree/binary_search_tree.cpp) · [`binary_search_tree.py`](Nodes/Derived_Structures/Tree/binary_search_tree.py)
- [`avl_tree.cpp`](Nodes/Derived_Structures/Tree/avl_tree.cpp) · [`avl_tree.py`](Nodes/Derived_Structures/Tree/avl_tree.py)
- [`red_black_tree.cpp`](Nodes/Derived_Structures/Tree/red_black_tree.cpp) · [`red_black_tree.py`](Nodes/Derived_Structures/Tree/red_black_tree.py)
- [`segment_tree.cpp`](Nodes/Derived_Structures/Tree/segment_tree.cpp) · [`segment_tree.py`](Nodes/Derived_Structures/Tree/segment_tree.py)
- [`fenwick_tree.cpp`](Nodes/Derived_Structures/Tree/fenwick_tree.cpp) · [`fenwick_tree.py`](Nodes/Derived_Structures/Tree/fenwick_tree.py)
- [`trie.cpp`](Nodes/Derived_Structures/Tree/trie.cpp) · [`trie.py`](Nodes/Derived_Structures/Tree/trie.py)
- [`suffix_tree.cpp`](Nodes/Derived_Structures/Tree/suffix_tree.cpp) · [`suffix_tree.py`](Nodes/Derived_Structures/Tree/suffix_tree.py)
- [`heap_tree.cpp`](Nodes/Derived_Structures/Tree/heap_tree.cpp) · [`heap_tree.py`](Nodes/Derived_Structures/Tree/heap_tree.py)

#### Graph
- [`adjacency_list.cpp`](Nodes/Derived_Structures/Graph/adjacency_list.cpp) · [`adjacency_list.py`](Nodes/Derived_Structures/Graph/adjacency_list.py)
- [`bfs.cpp`](Nodes/Derived_Structures/Graph/bfs.cpp) · [`bfs.py`](Nodes/Derived_Structures/Graph/bfs.py)
- [`dfs.cpp`](Nodes/Derived_Structures/Graph/dfs.cpp) · [`dfs.py`](Nodes/Derived_Structures/Graph/dfs.py)
- [`dijkstra.cpp`](Nodes/Derived_Structures/Graph/dijkstra.cpp) · [`dijkstra.py`](Nodes/Derived_Structures/Graph/dijkstra.py)
- [`bellman_ford.cpp`](Nodes/Derived_Structures/Graph/bellman_ford.cpp) · [`bellman_ford.py`](Nodes/Derived_Structures/Graph/bellman_ford.py)
- [`floyd_warshall.cpp`](Nodes/Derived_Structures/Graph/floyd_warshall.cpp) · [`floyd_warshall.py`](Nodes/Derived_Structures/Graph/floyd_warshall.py)
- [`kruskal.cpp`](Nodes/Derived_Structures/Graph/kruskal.cpp) · [`kruskal.py`](Nodes/Derived_Structures/Graph/kruskal.py)
- [`prim.cpp`](Nodes/Derived_Structures/Graph/prim.cpp) · [`prim.py`](Nodes/Derived_Structures/Graph/prim.py)
- [`topological_sort.cpp`](Nodes/Derived_Structures/Graph/topological_sort.cpp) · [`topological_sort.py`](Nodes/Derived_Structures/Graph/topological_sort.py)
- [`tarjan_scc.cpp`](Nodes/Derived_Structures/Graph/tarjan_scc.cpp) · [`tarjan_scc.py`](Nodes/Derived_Structures/Graph/tarjan_scc.py)
- [`kosaraju_scc.cpp`](Nodes/Derived_Structures/Graph/kosaraju_scc.cpp) · [`kosaraju_scc.py`](Nodes/Derived_Structures/Graph/kosaraju_scc.py)

---

## Hashes

Hash-based structures provide expected O(1) insert/lookup using hash functions and collision strategies.

### Hashes: Implementation
- **C++**: [`map.cpp`](Hashes/Implementation/C%2B%2B/map.cpp) · [`multi_map.cpp`](Hashes/Implementation/C%2B%2B/multi_map.cpp) · [`unordered_map.cpp`](Hashes/Implementation/C%2B%2B/unordered_map.cpp) · [`unordered_multi_map.cpp`](Hashes/Implementation/C%2B%2B/unordered_multi_map.cpp) · [`set.cpp`](Hashes/Implementation/C%2B%2B/set.cpp) · [`multi_set.cpp`](Hashes/Implementation/C%2B%2B/multi_set.cpp) · [`unordered_set.cpp`](Hashes/Implementation/C%2B%2B/unordered_set.cpp) · [`unordered_multi_set.cpp`](Hashes/Implementation/C%2B%2B/unordered_multi_set.cpp) · [`hash_table_custom.cpp`](Hashes/Implementation/C%2B%2B/hash_table_custom.cpp)
- **Python**: [`dict_implementation.py`](Hashes/Implementation/Python/dict_implementation.py) · [`default_dict.py`](Hashes/Implementation/Python/default_dict.py) · [`ordered_dict.py`](Hashes/Implementation/Python/ordered_dict.py) · [`set_implementation.py`](Hashes/Implementation/Python/set_implementation.py) · [`frozen_set.py`](Hashes/Implementation/Python/frozen_set.py) · [`hash_table_custom.py`](Hashes/Implementation/Python/hash_table_custom.py)

### Hash Functions

#### Division Method
- [`division_method.cpp`](Hashes/Hash_Functions/Division_Method/Implementation/division_method.cpp) · [`division_method.py`](Hashes/Hash_Functions/Division_Method/Implementation/division_method.py)

#### Multiplication Method
- [`multiplication_method.cpp`](Hashes/Hash_Functions/Multiplication_Method/Implementation/multiplication_method.cpp) · [`multiplication_method.py`](Hashes/Hash_Functions/Multiplication_Method/Implementation/multiplication_method.py)

#### Mid Square Method
- [`mid_square_method.cpp`](Hashes/Hash_Functions/Mid_Square_Method/Implementation/mid_square_method.cpp) · [`mid_square_method.py`](Hashes/Hash_Functions/Mid_Square_Method/Implementation/mid_square_method.py)

#### Folding Method
- [`folding_method.cpp`](Hashes/Hash_Functions/Folding_Method/Implementation/folding_method.cpp) · [`folding_method.py`](Hashes/Hash_Functions/Folding_Method/Implementation/folding_method.py)

#### Universal Hashing
- [`universal_hashing.cpp`](Hashes/Hash_Functions/Universal_Hashing/Implementation/universal_hashing.cpp) · [`universal_hashing.py`](Hashes/Hash_Functions/Universal_Hashing/Implementation/universal_hashing.py)

#### String Hashing
- [`string_hashing.cpp`](Hashes/Hash_Functions/String_Hashing/Implementation/string_hashing.cpp) · [`string_hashing.py`](Hashes/Hash_Functions/String_Hashing/Implementation/string_hashing.py)

### Collision Resolution

#### Separate Chaining
- [`separate_chaining.cpp`](Hashes/Collision_Resolution/Separate_Chaining/Implementation/separate_chaining.cpp) · [`separate_chaining.py`](Hashes/Collision_Resolution/Separate_Chaining/Implementation/separate_chaining.py)

#### Linear Probing
- [`linear_probing.cpp`](Hashes/Collision_Resolution/Linear_Probing/Implementation/linear_probing.cpp) · [`linear_probing.py`](Hashes/Collision_Resolution/Linear_Probing/Implementation/linear_probing.py)

#### Quadratic Probing
- [`quadratic_probing.cpp`](Hashes/Collision_Resolution/Quadratic_Probing/Implementation/quadratic_probing.cpp) · [`quadratic_probing.py`](Hashes/Collision_Resolution/Quadratic_Probing/Implementation/quadratic_probing.py)

#### Double Hashing
- [`double_hashing.cpp`](Hashes/Collision_Resolution/Double_Hashing/Implementation/double_hashing.cpp) · [`double_hashing.py`](Hashes/Collision_Resolution/Double_Hashing/Implementation/double_hashing.py)

#### Cuckoo Hashing
- [`cuckoo_hashing.cpp`](Hashes/Collision_Resolution/Cuckoo_Hashing/Implementation/cuckoo_hashing.cpp) · [`cuckoo_hashing.py`](Hashes/Collision_Resolution/Cuckoo_Hashing/Implementation/cuckoo_hashing.py)

### Hashes: Derived Structures

#### Bloom Filter
- [`bloom_filter.cpp`](Hashes/Derived_Structures/Bloom_Filter/Implementation/bloom_filter.cpp) · [`bloom_filter.py`](Hashes/Derived_Structures/Bloom_Filter/Implementation/bloom_filter.py)

#### Perfect Hashing
- [`perfect_hashing.cpp`](Hashes/Derived_Structures/Perfect_Hashing/Implementation/perfect_hashing.cpp) · [`perfect_hashing.py`](Hashes/Derived_Structures/Perfect_Hashing/Implementation/perfect_hashing.py)

#### Extendible Hashing
- [`extendible_hashing.cpp`](Hashes/Derived_Structures/Extendible_Hashing/Implementation/extendible_hashing.cpp) · [`extendible_hashing.py`](Hashes/Derived_Structures/Extendible_Hashing/Implementation/extendible_hashing.py)

#### Hopscotch Hashing
- [`hopscotch_hashing.cpp`](Hashes/Derived_Structures/Hopscotch_Hashing/Implementation/hopscotch_hashing.cpp) · [`hopscotch_hashing.py`](Hashes/Derived_Structures/Hopscotch_Hashing/Implementation/hopscotch_hashing.py)

---

## Bit

Bit-level representations and algorithms for efficient storage and combinatorial operations.

### Bit: Implementation
- **C++**: [`bitmask_uint64.cpp`](Bit/Implementation/C%2B%2B/bitmask_uint64.cpp) · [`bitset_stl_fixed.cpp`](Bit/Implementation/C%2B%2B/bitset_stl_fixed.cpp) · [`vector_bool_specialization.cpp`](Bit/Implementation/C%2B%2B/vector_bool_specialization.cpp) · [`dynamic_bitset_custom.cpp`](Bit/Implementation/C%2B%2B/dynamic_bitset_custom.cpp) · [`struct_bitfields.cpp`](Bit/Implementation/C%2B%2B/struct_bitfields.cpp)
- **Python**: [`int_as_bitset.py`](Bit/Implementation/Python/int_as_bitset.py) · [`bytearray_bitmap.py`](Bit/Implementation/Python/bytearray_bitmap.py) · [`array_module_bitmap.py`](Bit/Implementation/Python/array_module_bitmap.py) · [`numpy_packbits_bitmap.py`](Bit/Implementation/Python/numpy_packbits_bitmap.py) · [`set_of_indices_sparse.py`](Bit/Implementation/Python/set_of_indices_sparse.py)

### Bit: Algorithms
- [`count_set_bits.cpp`](Bit/Algorithms/count_set_bits.cpp) · [`count_set_bits.py`](Bit/Algorithms/count_set_bits.py)
- [`hamming_distance.cpp`](Bit/Algorithms/hamming_distance.cpp) · [`hamming_distance.py`](Bit/Algorithms/hamming_distance.py)
- [`bitwise_subset_generation.cpp`](Bit/Algorithms/bitwise_subset_generation.cpp) · [`bitwise_subset_generation.py`](Bit/Algorithms/bitwise_subset_generation.py)
- [`bitmask_dp_basics.cpp`](Bit/Algorithms/bitmask_dp_basics.cpp) · [`bitmask_dp_basics.py`](Bit/Algorithms/bitmask_dp_basics.py)

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

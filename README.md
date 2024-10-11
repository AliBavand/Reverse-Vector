## Reverse Vector Functions

This repository contains two implementations related to reversing a vector in C++. The two versions demonstrate different approaches to solving the problem of reversing the order of elements in a vector.

### 1. `reverse_vector_new.cpp` - Return a New Reversed Vector
This function takes a vector of integers as input and returns a **new** vector where the order of the elements is reversed. The original vector remains unchanged.

- **Input**: A vector of integers.
- **Output**: A new vector containing the integers in reverse order.

#### Example:
```cpp
Input: [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
```

### 2. `reverse_vector_inplace.cpp` - Reverse the Vector In-Place
This version modifies the original vector by reversing its elements **in-place**. It uses two indices (one starting from the beginning and the other from the end) to swap elements until the entire vector is reversed. No new vector is created, and the reversal happens within the original vector.

- **Input**: A vector of integers.
- **Output**: The same vector with elements reversed in place.

#### Example:
```cpp
Input: [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]
```

### Key Differences:
- **`reverse_vector_new.cpp`** creates a new vector with reversed elements, leaving the original vector unchanged.
- **`reverse_vector_inplace.cpp`** reverses the original vector without creating a new one, thus saving memory and operating in-place.


# Dangling Pointer Bug in C
This repository demonstrates a common yet subtle bug in C programming: dangling pointers.  A dangling pointer points to memory that has been freed or reallocated. Accessing a dangling pointer can lead to unpredictable behavior, crashes, or security vulnerabilities.

The `bug.c` file contains the buggy code. The `bugSolution.c` file provides a corrected version.

## Bug Description
The bug lies in how the pointer `ptr` is handled. After `ptr` is assigned the address of `b`, the original memory location pointed to by `ptr` (where `a` was stored) may be reused or deallocated. If we attempt to dereference `ptr` after this reassignment, we are accessing memory that might no longer be valid.  This leads to undefined behavior.

## Solution
The solution involves careful pointer management. We must ensure that we don't access memory after it has been freed or reallocated. This often requires more careful attention to memory allocation and deallocation patterns.
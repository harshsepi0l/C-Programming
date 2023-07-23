# Stack vs Heap Memory

### 1) About main memory

- Memory allocates bytes using a right to left on a grid (1, 2, 3, 4).
- In all of the notes in the lectures the memory size is 64KB or 0 to 65535 (65536) Bytes.

### 2) How a program uses memory

    void main()
    {
        int a; // 2 Bytes
        float b; // 4 Bytes
    }

- Both inits are stored in a stack with the acquired sizes.
- The main code is stored in the code section of the stack.
- The program also runs in the stack section. (main class)

### 3) Static Allocation - Stack

#### Organized memory

### 4) Dynamic Allocation - Heap

#### Unorganized Memory


#include <iostream>
#include <vector>

int main(int argc, const char * argv[])
{
    /* REACH BASED LOOP */
    std::vector<int> myOwnVector = {0, 1, 2, 3, 4, 5};
    
    for (const int& index : myOwnVector)
    {
        std::cout << index << " ";
    }
    
    /* SMART POINTERS */
    
    // shared_ptr
    // make_shared function
    // unique_ptr
    // weak_ptr
    
    /* LAMBDA */
    /* THREADS */
    /* STL */
    /* ASSERT/EXCEPTIONS */
    /* MAP */
    
    return 0;
}

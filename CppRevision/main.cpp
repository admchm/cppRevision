#include <iostream>
#include <vector>
#include <memory>

int main(int argc, const char * argv[])
{
    /* REACH BASED LOOP */
    /*
    std::vector<int> myOwnVector = {0, 1, 2, 3, 4, 5};
    
    for (const int& index : myOwnVector)
    {
        std::cout << index << " ";
    }
    */
    
    /* SMART POINTERS */
    // they're acting like regular pointers with the important exception - it automatically deletes
    // the object to which it points
    
    // shared_ptr - allows multiple pointers to refer to the same object
    std::shared_ptr<std::string> p1;
    
        // if p1 is not null, check whether it's the empty string
    if (p1 && p1->empty())
    {
        // if so, dereference p1 to assign a new value to that string
        *p1 = "hi";
    }
    
    // make_shared function - allocates and initializes an object in dynamic memory and returns a shared_ptr
    std::shared_ptr<int> p2 = std::make_shared<int>(42);
    std::shared_ptr<std::string> p3 = std::make_shared<std::string>("test string");
    std::shared_ptr<float> p4 = std::make_shared<float>();    // initialized to zero
    
    auto p5 = std::make_shared<std::vector<std::string>>();    // p5 points to a dynamically allocated, empty vector<string>
    
    // copying and assigning shared_ptrs
    auto p = std::make_shared<int>(42);    // count == 1
    std::cout << p.unique() << std::endl;  // returns true or false
    auto q{p};                             // count == 2
    std::cout << p.use_count() << std::endl;

    
    // unique_ptr - "owns" the object to which it points
    // weak_ptr - weak reference to an object managed by a shared_ptr
    
    // lock - function that checks whether the object to which the weak_ptr still exists.
    // if so, lock returns a shared_ptr to the shared object
    auto valueForWP = std::make_shared<int>(42);
    std::weak_ptr<int> wp(valueForWP);
    
    if (std::shared_ptr<int> np = wp.lock())    // true if np is not null
    {
        // inside the if, np shares its object with p
    }
    
    
    /* LAMBDA */
    /* THREADS */
    /* STL */
    /* ASSERT/EXCEPTIONS */
    /* MAP */
    
    return 0;
}

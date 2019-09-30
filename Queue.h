#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "Array.h" //inheritance
#include <exception>
#include <cstring>          // for size_t definition
#include <stdexcept>


/**
 * @class Queue
 *
 * Basic implementation of a standard Queue class for types.
 */
template <typename T>
class Queue : protected Array <T>
{
public:
    /// Type definition of the type.
    typedef T type;

    /// Default constructor.
    Queue(void);

    /// Copy constructor.
    Queue(const Queue & queue);

    /// Destructor.
    ~Queue (void);
     /**
    * enqueue a new \a element onto the queue. The element is inserted
    * before all the other elements in the list.
    *
    * @param[in]      element       Element to add to the list
    */
    void enqueue (T element);
    /**
    * Get the character at the specified index. If the \a index is not within
    * the range of the array, then std::out_of_range exception is thrown.
    *
    * 
    * @return          recent element type T 
    * @exception       empty_exception    The queue is empty.
    */  
    T dequeue (void);
    /**
    * Test if the queue is empty
    *
    * @retval         true          The queue is empty
    * @retval         false         The queue is not empty
    */
    bool is_empty (void) const;

    /**
    * Number of element on the queue.
    *
    * @return         Size of the queue.
     */
    size_t size (void) const;

    /// Remove all elements from the queue.
    void clear (void);
    //report class
    class empty_exception : public std::exception
    {
        public:
        /// Default constructor.
        empty_exception (void)
            : std::exception () { }

        /**
        * Initializing constructor.
        *
        * @param[in]      msg         Error message.
        */
         empty_exception (const char * msg)
            : std::exception (msg) { }
    };

private:
    size_t size_;
};


#include "Queue.inl"
#include "Queue.cpp"

#endif  // !defined _QUEUE_H_
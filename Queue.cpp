// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Queue.h"

//
// Queue
//
template <typename T>
Queue <T>::Queue (void): Array<T>()
{

}
//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & queue) : Array<T>()
{
    T * copy_data = new T[queue.size()];
    for(size_t i = 0; i < queue.size(); i++)
    {
        copy_data[i]=queue.dequeue(); 
    }
    size_t r = queue.size()-1;
    for(size_t p = 0; p < queue.size(); p++)
    {
        this->enqueue(copy_data[r]);
        r--;
    }
    delete [] copy_data;
    this->size_=queue.size();
}
//
// ~Queue
//
template <typename T>
Queue <T>::~Queue (void)
{
    delete [] this->data_;
}
//
// enqueue
//
template <typename T>
void Queue <T>::enqueue (T element)
{
    this->resize(this->size() + 1);
    this->size_++;
    this->set((this->size() - 1), element);
    

}

//
// dequeue
//
template <typename T>
T Queue <T>::dequeue (void)
{
    if(!(this->is_empty()))
    {
        T front = this->get(this->size() - 1);
        this->resize(this->size() - 1);
        this->size_ --;
        return front;
    }
    else
    {
        throw empty_exception("");
    }
    
}
//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
    if(!(this->is_empty()))
    {
        delete [] this->data_;
        this->data_ = nullptr;
        this->size_ = 0;
        this->cur_size_=0;
        this->max_size_=0;
    }
    else
    {
        throw empty_exception("");
    }
    
    
}
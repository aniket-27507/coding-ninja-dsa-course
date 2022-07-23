//dynamic queue means there is no limitation of elements to be added.so there will be no meassage of queue is full!! 
//we can add as many element as needed by using dynamic array approach.
template <typename T>
class queueusingarray
{
   private:
   T *data;
   int firstindex;
   int nextindex;
   int size ;
   int capacity;
   public:
   queueusingarray(int s)
   {
    data = new T[s];
    firstindex=-1;
    nextindex = 0;
    size = 0;
    capacity = s;
   }
   bool isempty()
   {
    return size==0; 
   }
   int getsize()
   {
    return size;
   }
   //insert  element
   void enqueue(T element)
   {
    if(size==capacity)
    {
        /*cout<<"queue is full!!"<< endl;
        return;*/
        T*newdata = new T[2*capacity];
        //copying old queue element to new queue.
        int j=0;
        for(int i=0;i<capacity;i++)
        {
            newdata[j]=data[i];
            j++;
        }
        for(int i=0;i<firstindex;i++)
        {
            newdata[j]=data[i];
            j++
        }
        delete[]data;
        data=newdata;
        firstindex=0;
        nextindex=capacity;
        capacity*= 2;
    }
    data[nextindex]=element;
    nextindex=(nextindex+1) % capacity;
    if(firstindex==-1)
    {
        firstindex=0;
    }
    size++;
   }
   T front()
   {
    if(isempty())
    {
        cout<<"queue is empty!!"<<endl;
        return 0;
    }
    return data[firstindex];
   }
   T dequeue()
   {
    if(isempty())
    {
        cout<<"queue is empty"<<endl;
        return 0;
    }
    T ans = data[firstindex];
    firstindex= (firstindex+1)%capacity;
    size--;
    //not mandatory but it is a good practice.
    if(size==0)
    {
        firstindex=-1;
        nextindex=0;
    }
    return ans;
   }
};
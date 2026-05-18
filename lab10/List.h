#ifndef LIST_H
#define LIST_H

// elementiin butets
template <typename T>
struct Elm {
    T data;
    Elm* next;
    Elm (T val) : data(val), next(nullptr) {}
};

template <typename T>
class Linkedlist{
    public:
        Elm<T>* head;
        int lenght;
    private:
        void add(T t);                  // element nemeh
        void insert(T t, int index);    // zaasan index ruu nemeh
        T get(int index);               // index deerh utgiiig avah
        void del(int index);            // index deerh elementiig ustgah
        int length();                   // listnii urtiig butsaah

        //baiguulagch
        Linkedlist() : head(nullptr), length(0){};
        ~Linkedlist();

};
#endif
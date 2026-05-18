#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

// elementiin butets
template <typename T>
struct Elm {
    T data;
    Elm* next;
    Elm (T val) : data(val), next(nullptr) {}
};

template <typename T>
class Linkedlist{
    private:
        Elm<T>* head;
        int lenght;

    public:
        // element nemeh
        void add(T t){
            Elm<T>* newElm = new Elm<T>(t);
            if (head == nullptr){
                head = newElm;
            } else {
                Elm<T>* temp = head;
                while (temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = newElm;
            }

            lenght++;
        }                  
        // zaasan index ruu nemeh
        void insert(T t, int index){

            if (index > lenght) return;

            Elm<T>* newElm = new Elm<T>(t);
            if (head == nullptr){
                head = newElm;
            } else {
                Elm<T>* temp = head;
                for(int i = 0; i < index-1; i++){
                    temp = temp->next;
                }
                newElm->next = temp->next;
                temp->next = newElm;
            }
            lenght++;
        } 

        // index deerh utgiiig avah
        T get(int index){
            if (index > lenght) return nullptr;
            
            Elm<T>* temp = head;
            for (int i = 0; i < index; i++){
                temp = temp->next;
            }

            return temp->data;
        }     

        // index deerh elementiig ustgah
        void del(int index){
            if (index > lenght) return;

            Elm<T>* ustgah;
            if (index == 0){
                ustgah = head;
                head = head->next;
            } else {
                Elm<T>* temp = head;
                for (int i = 0; i < index-1; i++){
                    temp = temp->next;
                }

                ustgah = temp->next;
                temp->next = temp->next->next;
            }
            delete ustgah;
            lenght--;
        }

        // listnii urtiig butsaah
        int getLenght(){
            return this->lenght;
        }       

        // baiguulagch
        Linkedlist() : head(nullptr), lenght(0){};
        // ustgagch
        ~Linkedlist(){
            Elm<T>* temp = head;
            while (temp != NULL){
                Elm<T>* next = temp->next;
                delete temp;
                temp = next;
            }
        }
};

// insertion sort ashiglaj listiig eremblene
template <typename T>
void SortByArea(Linkedlist<T> &list){
    int n = list.getLenght();
    
    for (int i = 1; i < n; i++){
        T temp = list.get(i);
        int j = i - 1;

        while (j >= 0 && list.get(j)->findArea() > temp->findArea()){
            j--;
        }

        if (j + 1 != i){
            list.del(i);
            list.insert(temp, j + 1);
        }
    }
}

int main() {
    // Random тоо үүсгүүрийг хугацаагаар тохируулах
    srand(static_cast<unsigned int>(time(0)));

    // Дүрсүүдийг төрөл харгалзахгүй хадгалах жагсаалт (TwoDShape заагч ашиглана)
    Linkedlist<TwoDShape*> shapeList;

    // 20-оос 30-ын хооронд санамсаргүй тооны дүрс үүсгэх тоог гаргах
    int randomCount = 20 + rand() % 11; 

    for (int i = 0; i < randomCount; i++) {
        int choice = rand() % 3; // 0: Тойрог, 1: Дөрвөлжин, 2: Гурвалжин
        float randomSide = 1.0f + (rand() % 15); // 1-15 хооронд санамсаргүй хэмжээ
        float randX = static_cast<float>(rand() % 10);
        float randY = static_cast<float>(rand() % 10);

        if (choice == 0) {
            shapeList.add(new Circle("CircleObj", randomSide, randX, randY)); //
        } else if (choice == 1) {
            shapeList.add(new Square("SquareObj", randomSide, randX, randY)); //
        } else {
            shapeList.add(new Triangle("TriangleObj", randomSide, randX, randY)); //
        }
    }

    cout << "Generated " << shapeList.getLenght() << " shapes randomly.\n";
    cout << "Sorting elements by area using Insertion Sort...\n";
    cout << "=======================================================\n";

    // Дүрсүүдийг талбайгаар нь эрэмбэлэх
    SortByArea(shapeList);

    // Эрэмбэлэгдсэн үр дүнг хэвлэх
    for (int i = 0; i < shapeList.getLenght(); i++) {
        TwoDShape* currentShape = shapeList.get(i);
        currentShape->print(); // Дүрс тус бүрийн өөрийн мэдээлэл хэвлэгдэнэ
        cout << "Calculated Area: " << currentShape->findArea() << "\n"; //
        cout << "-------------------------------------------------------\n";
    }

    // Динамик ой санамжийг устгаж цэвэрлэх (Memory leak-ээс сэргийлнэ)
    for (int i = 0; i < shapeList.getLenght(); i++) {
        delete shapeList.get(i); 
    }

    return 0;
}
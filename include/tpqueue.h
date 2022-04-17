// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

- template<typename T, int size>
- class TPQueue {
-  // реализация шаблона очереди с приоритетом на кольцевом буфере
- };

struct SYM {
  char ch;
  int prior;
};

template<typename T, int size>
class TPQueue {

 private:
    struct SYM arr[size];
    int count;
    count = 0;
    
 public:
    void push(SYM x) {
        if (count < size) {
            for (int i = count++; i >= 0; i--) {
                if (x.prior <= arr[i - 1].prior && i > 0) {
                    arr[i] = arr[i - 1];
                } else {
                    arr[i] = c;
                    break;
                }
            }
        }
    }
    SYM pop() {
        if (count > 0) {
            return arr[--count];
        } else {
            throw "Error";
        }
    }
};


#endif  // INCLUDE_TPQUEUE_H_

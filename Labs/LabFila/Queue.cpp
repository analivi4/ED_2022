#include "Queue.h"

using namespace std;

Queue::Queue(int capacity) {
    array = new Item[capacity];
    m_size = 0;
    this->capacity = capacity;
    first = 0;
}

Queue::~Queue() {
    delete[] array;
}

bool Queue::empty() {
    return m_size == 0;
}

bool Queue::full() {
    return m_size == capacity;
}

int Queue::size() {
    return m_size;
}

void Queue::push_back(const Item& data) {
    if (full()) {
        cout << "Fila cheia!" << endl;
        return;
    }
    array[(first + m_size) % capacity] = data;
    m_size++;
}

void Queue::pop_front() {
    if (empty()) {
        cout << "Fila vazia!" << endl;
        return;
    }
    first = (first + 1) % capacity;
    m_size--;
}

int& Queue::front() {
    if (empty()) {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
    return array[first];
}

int& Queue::back() {
    if (empty()) {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
    return array[(first + m_size - 1) % capacity];
}
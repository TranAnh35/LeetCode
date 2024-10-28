class MyCircularQueue:
    def __init__(self, k: int):
        self.size = k
        self.queue = [None] * k
        self.front = -1
        self.rear = -1

    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        if self.front == -1:
            self.front = 0
        self.rear = (self.rear + 1) % self.size
        self.queue[self.rear] = value
        return True

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        item = self.queue[self.front]
        if self.front == self.rear:
            self.front = -1
            self.rear = -1
        else:
            self.front = (self.front + 1) % self.size
        return True

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        return self.queue[self.front]

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        return self.queue[self.rear]

    def isEmpty(self) -> bool:
        return self.front == -1

    def isFull(self) -> bool:
        if self.front == 0 and self.rear == self.size - 1:
            return True
        elif self.front == self.rear + 1:
            return True
        else:
            return False
        
if __name__ == '__main__':
    circularQueue = MyCircularQueue(3)
    print(circularQueue.enQueue(1))
    print(circularQueue.enQueue(2))
    print(circularQueue.enQueue(3))
    print(circularQueue.enQueue(4))
    print(circularQueue.Rear())
    print(circularQueue.isFull())
    print(circularQueue.deQueue())
    print(circularQueue.enQueue(4))
    print(circularQueue.Rear())
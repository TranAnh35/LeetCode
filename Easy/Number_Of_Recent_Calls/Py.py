from collections import deque


class RecentCounter:

    def __init__(self):
        self.array = deque()

    def ping(self, t: int) -> int:
        self.array.append(t)
        while self.array[0] < (t - 3000):
            self.array.popleft()
        return len(self.array)
    
if __name__ == '__main__':
    counter = RecentCounter()
    print(counter.ping(1))
    print(counter.ping(100))
    print(counter.ping(3001))
    print(counter.ping(3002))
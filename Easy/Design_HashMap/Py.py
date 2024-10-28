class MyHashMap:

    def __init__(self):
        self.table = {}

    def put(self, key: int, value: int) -> None:
        self.table[key] = value

    def get(self, key: int) -> int:
        return self.table[key] if key in self.table else -1

    def remove(self, key: int) -> None:
        if key in self.table:
            self.table.pop(key)
        
if __name__ == '__main__':
    hashMap = MyHashMap()
    hashMap.put(1, 1)          
    hashMap.put(2, 2)         
    print(hashMap.get(1))
    print(hashMap.get(3))
    hashMap.put(2, 1)
    print(hashMap.get(2))
    hashMap.remove(2)
    print(hashMap.get(2))
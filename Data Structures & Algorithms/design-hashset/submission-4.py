class MyHashSet:

    def __init__(self):
        self.hashsize = 1000
        self.hs = [[] for _ in range(self.hashsize)]

    def add(self, key: int) -> None:
        if not self.contains(key):
            self.hs[key%self.hashsize].append(key)

    def remove(self, key: int) -> None:
        try:
            self.hs[key%self.hashsize].pop(self.hs[key%self.hashsize].index(key))
        except:
            pass

    def contains(self, key: int) -> bool:
        try:
            return True if self.hs[key%self.hashsize].index(key) != -1 else False
        except:
            return False
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)
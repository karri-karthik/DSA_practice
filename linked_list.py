class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# create nodes
n1 = Node(10)
n2 = Node(20)
n3 = Node(30)

# link nodes
n1.next = n2
n2.next = n3

# traversal
temp = n1
while temp:
    print(temp.data, end=" -> ")
    temp = temp.next
print("NULL")

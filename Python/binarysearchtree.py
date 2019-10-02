class Node:

    def __init__(self,data):
        self.data = data
        self.right = None
        self.left = None



def insert(root,val):

    if(root is None):

        root = Node(val)


    else:

        if(val > root.data):

            if(root.right is None):
                root.right = Node(val)

            else:
                insert(root.right,val)


        else:

            if(root.left is None):

                root.left = Node(val)


            else:
                insert(root.left,val)


root = Node(10)
insert(root,5)
insert(root,30)
insert(root,22)
insert(root,35)
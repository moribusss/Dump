def preorder(root):

    if(root):

        print(root.data)


        preorder(root.left)


        preorder(root.right)
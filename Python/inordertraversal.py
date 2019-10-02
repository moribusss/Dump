def inorder(root):

    if(root):
        inorder(root.left)

        print(root.data)

        inorder(root.right)

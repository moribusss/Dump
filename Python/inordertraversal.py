def inorder(root,val):

    if(root.left):
        inorder(root.left,val)

    if(root.data > val):
        print(root.data)
        exit()

    if(root.right):
        inorder(root.right,val)
This code demonstrates the use of the `graphics.h` library to draw a binary tree, a heap tree, and a B+ tree. Let's go through the code step by step:

1. The necessary header files are included: `graphics.h` for graphics functions and `bits/stdc++.h` for standard library functions.
2. The `printTree` function is defined to draw a binary tree. It takes the coordinates of the root node (`x` and `y`), an array representing the tree (`array`), the index of the current node (`index`), and the total number of elements in the array (`total_elements`).
3. The function first prints the labels for the binary tree and heap tree using `outtextxy` function. Then it converts the integer value of the current node into a string and stores it in `str2`.
4. The circle representing the node is drawn using `circle` and `floodfill` functions. The value of the node is printed inside the circle using `outtextxy`.
5. The function recursively calls itself to draw the left and right subtrees. The coordinates for the subtrees are calculated based on the current node's position.
6. Lines are drawn to connect the current node with its left and right child nodes, if they exist.
7. The `printBplusTree` function is defined to draw a B+ tree. It uses a combination of circles and lines to represent the nodes and links in the B+ tree. The specific coordinates and values are hard-coded in this example.
8. In the `main` function, the graphics mode is initialized using `initgraph`.
9. Two arrays `array1` and `array2` are defined to represent the binary tree and the heap tree, respectively.
10. The `printTree` function is called twice to draw the binary tree and heap tree. The coordinates and arrays are passed as arguments.
11. The `printBplusTree` function is called to draw the B+ tree.
12. Finally, `getch` waits for a key press, and `closegraph` closes the graphics mode.
Note that this code assumes that you have a graphics library set up and configured correctly, which might not be the case for most modern systems. The `graphics.h` library is outdated and not commonly used anymore.

![Screenshot (207)](https://github.com/Madalacharitavya/BINARY-HRAPTREE-USING-GRAPHICS.H/assets/102969979/eb3c45c4-477c-4c98-b8a8-77f3b09040c7)

## Contributing

Contributions are welcome! Feel free to open issues or pull requests.

## License

This project is licensed under the [MIT License](LICENSE).

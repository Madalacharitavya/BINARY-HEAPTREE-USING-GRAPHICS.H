#include<graphics.h>
#include <bits/stdc++.h>
using namespace std;


void printTree(int x, int y, int* array,int index,	int total_elements)
{
	outtextxy(150,20,(char*)"Binary Tree");
	outtextxy(450,20,(char*)"Heap Tree");
	
	// Base case
	if (index >= total_elements)
		return ;
		
    // Convert int value into string
	ostringstream str1;
	str1 << array[index];

	string str2 = str1.str();
	char* str = &str2[0u];
	
    // Set color of the boundary of circle as white
	setcolor(WHITE);
	
     // Draw the circle of radius 15 that represent node of Tree
	circle(x, y, 15);
	floodfill(x, y, WHITE);
	
	// Print the values of the node in the circle
	outtextxy(x - 2, y - 3, str);
	
     // set color of the line
     // from parent to child as white
	setcolor(WHITE);
	
    // Evaluating left and right child
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	
    // Recursively draw the left subtree and the right subtree
	printTree(x - y / (index + 1), y + 50,
			array, left, total_elements);

	printTree(x + y / (index + 1), y + 50,
			array, right, total_elements);
			
    // Draw the line (or link) when the node is not the leaf node
	if (left < total_elements) {
		line(x, y, x - y / (index + 1), y + 50);
	}

	if (right < total_elements) {
		line(x, y, x + y / (index + 1), y + 50);
	}

   int left1 = 315, top1 = 0;
    int right1 = 315, bottom1 = 240;
  
    rectangle(left1, top1, right1, bottom1);
  
    int left2 = -5, top2 = 240;
    int right2 = 850, bottom2 = 240;
  
    rectangle(left2, top2, right2, bottom2);
	return ;
}

// Function to print BplusTree
void printBplusTree()
{
	int x = 280, y = 250;
	outtextxy(x,y,(char*)"B+ Tree");
	circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"4");
	circle(x+10, y+50, 15);
	circle(x+70, y+50, 15);
	
	line(x - 5 , y + 50 , x - 80 , y + 75);
	line(x + 85 , y + 50 , x +160 , y + 80);

    x = 160;
	y = 290;
	circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"3");
	circle(x+10, y+50, 15);
	circle(x+70, y+50, 15);

	line(x - 5 , y + 50 , x -50 , y + 90);
	line(x + 85 , y + 50 , x + 100 , y + 85);

    x = 400;
	y = 290;
	circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"5");
	circle(x+10, y+50, 15);
	circle(x+70, y+50, 15);
	
	line(x - 5 , y + 50 , x -10 , y + 90);
	line(x + 85 , y + 50 , x + 90 , y + 85);

	x = 20;
	y = 340;
	circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"2");
	circle(x+70, y+50, 15);
	circle(x+100, y+50, 15);
	floodfill(x+100, y+50, WHITE);
	outtextxy(x + 100 - 2, y + 50 - 3, (char*)"3");
	circle(x+130, y+50, 15);
    
    x = 165;
    y = 390;
   line(x,y,x+70,y);
   line(x+70,y-5,x+75,y);
   line(x+70,y+5,x+75,y);

	
    x = 220;
	y = 340;
    circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"4");
	circle(x+70, y+50, 15);
	
	x = 305;
    y = 390;
   line(x,y,x+60,y);
   line(x+60,y-5,x+65,y);
   line(x+60,y+5,x+65,y);

    x = 350;
	y = 340;
    circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"5");
	circle(x+70, y+50, 15);
	
	x = 435;
    y = 390;
   line(x,y,x+30,y);
   line(x+30,y-5,x+35,y);
   line(x+30,y+5,x+35,y);
	
	x = 450;
	y = 340;
    circle(x+40, y+50, 15);
	floodfill(x+40, y+50, WHITE);
	outtextxy(x + 40 - 2, y + 50 - 3, (char*)"10");
	circle(x+70, y+50, 15);
	
	


}

// Driver Code
int main()
{
	
	// Initialize graphic driver
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"None");
	
    // Given array arr[]
	int array1[] = { 1, 2, 3, 4, 5,
					6, 7};
    int array2[] = { 1, 2, 3, 4, 5,
					6, 7, 8, 9, 10};
					
    // Function call
	printTree(180, 65, array2, 0, 10);
	printTree(480, 70, array1, 0, 7);
	printBplusTree();
	getch();
	
	// closegraph function closes the graphics mode and deallocates
	//all memory allocated by graphics system	
	closegraph();
}


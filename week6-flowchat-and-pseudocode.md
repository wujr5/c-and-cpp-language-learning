# week6 第三次实验 程序流程图和伪代码

> 实验目的：当大家学习了程序的控制结构之后，代码就变得复杂起来。在这时，我们解决问题就需要有很严密的逻辑思维。程序流程图和伪代码就是帮助我们去描述我们解决问题的方法（也称为算法）的工具。本次实验在于让大家学习如何使用这些工具，这对大家以后的编程有很大的帮助。

## 1 Flowchart (程序流程图)

A flowchart is a type of diagram that represents an algorithm, workflow or process, showing the steps as boxes of various kinds, and their order by connecting them with arrows. This diagrammatic representation illustrates a solution model to a given problem. Flowcharts are used in analyzing, designing, documenting or managing a process or program in various fields.

> From wikipedia

Detailed Description: [flowchat](https://en.wikipedia.org/wiki/Flowchart)

There is an example:

![ab](https://cloud.githubusercontent.com/assets/8371330/10778410/11bec644-7d61-11e5-830d-548028f14db4.jpg)

And this is the flowchart: 
![sample](https://cloud.githubusercontent.com/assets/8371330/10778656/52724c18-7d63-11e5-8b49-55f204fedefe.png)

## 2 Pseudocode (伪代码)
Pseudocode is an informal high-level description of the operating principle of a computer program or other algorithm.

> From wikipedia

There is an example:

![1](https://cloud.githubusercontent.com/assets/8371330/10791003/6156338a-7dc1-11e5-8b7e-364f1a559db5.png)

We can describe this question by this way rather than write a C++ program immediately:

```cpp
main {
	input two integers height and n
	initialize answer = 0
	
	loop for n times {
    	input tree_height
    	if height >= tree_height:
       		answer = answer + 1
  	}
  	
	print answer
}
```

Pseudocode is used to express your thought, you do not need to care about the grammar.

## 3 Pre Assignment
Learn about Flowchart and Pseudocode.

## 4 Assignment (100pts)

### 4.1 Assignment 0 (20pts)

Choose one question from soj.me in week6 in our course and then write the Pseudocode.

### 4.2 Assignment 1 (35pts) 

#### option 1

Translate the following flowchart into Pseudocode

#### option 2

Translate the following flowchart into Pseudocode and C programming language program.

#### Description

Several surveys indicate that the taller you are, the higher you can climb the corporate ladder. At TALL Enterprises Inc. this "de facto standard" has been properly formalized: your boss is always at least as tall as you are. Furthermore, you can safely assume that your boss earns a bit more than you do. In fact, you can be absolutely sure that your immediate boss is the person who earns the least among all the employees that earn more than you and are at least as tall as you are. Furthermore, if you are the immediate boss of someone, that person is your subordinate, and all his subordinates are your subordinates as well. If you are nobody's boss, then you have no subordinates. As simple as these rules are, many people working for TALL are unsure of to whom they should be turning in their weekly progress report and how many subordinates they have. Write a program that will help in determining for any employee who the immediate boss of that employee is and how many subordinates they have. Quality Assurance at TALL have devised a series of tests to ensure that your program is correct. These test are described below.<br />

May be you can not write out the problem, the only work you will do is write out this program from the following flowchart(Since there are many methods to sort, so you can use one of them, the flowchart does not display in the flow chat, instead a dashed line).

#### Flowchart

![flowchart 2](https://cloud.githubusercontent.com/assets/7850960/10865105/10cbe662-803c-11e5-95d3-3adc2394dcdd.png)

#### Simple input and output

##### Input

2  
3  
123456 14323 1700000   
123458 41412 1900000   
123457 15221 1800000   
123458   
4  
200002 12234 1832001   
200003 15002 1745201   
200004 18745 1883410   
200001 24834 1921313   
200002   

##### Output

(0,2)   
(200004,0)   

### 4.3 Assignment 2 (35pts) 

Draw a flowchart from the following C++ language program which constructs a **bubble sort algorithm**.

```cpp
#include <iostream>
using namespace std;

void print(int* pData, int count) {
	for (int i = 0; i< count; i++) {
		cout << pData[i] << " ";
	}
	cout << endl;
}

void BubbleSort(int* pData, int count) {
    int temp;
    for (int i = 1; i < count; i++) {
    	bool flag = true;
    	
        for (int j = 0; j < count - i; j++) {
            if (pData[j] > pData[j+1]) {
            	temp = pData[j+1];
                pData[j+1] = pData[j];
                pData[j] = temp;
                flag = false;
            }
        }
        
        if (flag) break;
        
        cout << "The "<< i <<" round:" << endl;
        print(pData, count);
        cout << "----------------------------" << endl;
        
    }
}

int main() {
	int n;
	int data[100];
	
    cout << "How many numbers you want to input ? (less than 100)" << endl;
	cin >> n;
	cout << "Please input " << n << "numbers, separating with space: " << endl;
	
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	
    BubbleSort(data, n);
    
    cout << "The sort result:" << endl;
    
    print(data, n);
    
    return 0;
}
```

## 5 Extended Assignment (10pts)

### option 1 

Draw a flowchart  and write Pseudocode as well as a C language program for the following description.

![extend](https://cloud.githubusercontent.com/assets/8371330/10779095/44aeb464-7d67-11e5-8219-e1c28d8b8113.png)

### option 2

Simplify the logic in Assignment 2 and then draw a new flowchart and rewrite the C code.（Reduce at least one level of logic nesting）

## 6 Discussion，Cooperation and Summary (15pts)

In this part, you will have some options, if you do more options, you will learn more and get more marks.
**You should note this part in your report**

### option 1: Github Discussion

Comment at this issue and decribe a problem that you meet and how you solve detailedly.

**Notice that** 
1. you should not copy and paste your personal report simply.
2. you should not write a very simple one and your comment will be deleted if you do that.
3. you should not post meaningless questions. 

### option 2: Simple Presentation

Have a simple presentation in the lab class on Monday (4 persons limited). And after the presentation, everyone is encouraged to ask questions and you can get bonus by asking good questions.

**Notice that**
1. The presentation is no more than 5 minutes and there will be 5 extra minutes for discussion.
2. You should prepare much for it.
3. First come, first get the opportunity.

### option 3: Helping others

You can help others to slove any problems the will meet. Detailedly decribe the quesion, the solution and your personal experience as well.

**Notice that**
1. it's no need to consult with others that I help you, you help you to get marks. You can simply send email to me and I will give you the marks.

### option 4: Personal Summary

 Write personal summary for yourself.
List at least 10 problems that you have met in your learning in c language and decribe the solution as well.

**Notice that**
1. you should not have ten very simple problems, you must let me know your learning method and also the method to solve problems.

## 7 Report Template:

There will be no Report Template this time which means it's all depends on yourself.

**Notice that**

1. the report is the most important document for your project, you should pay more attention to it.
2. you are supposed to write a report that is friendly to your 'users', which means that you need to consider about the typesetting, the logical structure of the content.
3. There should contain one item, self grading that you should give a score to evaluate your job as well as a reason.

For example: [sinew](http://yejq.sinaapp.com/blog/sinew)

## 8 Flowchart Tool: Process On

Process on is a good tool for drawing flowchart.
[link](https://www.processon.com/)

## 9 Submit List

![2](https://cloud.githubusercontent.com/assets/8371330/10793052/37c34ee6-7dca-11e5-8620-bd1e6c113087.png)

**Notice that:**
13331314 means your student id.
the first assignment need to name your file with your chosen problem id.

## 10 Deadline

**23:59 on Nov 12th, 2015**

## 11 Notification

1. Submit after deadline will cause a 30% penalty.
2. If your file structure of filename is wrong, you will probably get 0 in that part.
3. Any questions, you can ask us and email is better.
4. Full mark will be 100, but you may get more than 100 within this project.
5. You can use any tool include word, process on to draw a flowchart. You can use any form to write your Pseudocode but should be of high readability. If TA can not understand your Pseudocode clearly, you will get low points.(you can use Chinese to write Pseudocode if you like).

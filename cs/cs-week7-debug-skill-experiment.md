# 计科：week7 第五次实验报告 

## 1 编程相关

### 1.1 C++程序完成思路

1. 对于复杂的逻辑需求，先写伪代码或者画程序流程图得到清晰的逻辑结构。
2. 自顶向下逐步求精解决问题（大问题分解为可解决的小问题），写出C++程序。
3. 修改C++程序的编译错误。
4. 通过测试，修改C++程序的逻辑错误。

### 1.2 命令行编译

**为什么使用命令行编译？**

1. 可以获得比集成编译系统（IDE）更高的自由度。
2. 为之后的linux编程工具链打下基础。
3. 更好的理解c++程序编译执行过程。

**配置方法：**

1、打开Dev Cpp，并且找到对应的安装路径。

![dev](https://cloud.githubusercontent.com/assets/8371330/11019207/177cd53c-8629-11e5-9223-45fdf9e2de44.jpg)

2、找到定义的MinGW目录下的bin目录这个是dev cpp的核心编译器。

3、配置系统环境变量，在系统的高级选项中找到path（可见第一周python配置方法）

![path](https://cloud.githubusercontent.com/assets/8371330/11019211/4da48786-8629-11e5-8dc1-f71c654775c0.png)

4、打开cmd窗口，输入gcc --version输出编译器版本信息，配置完成。

![](http://ww4.sinaimg.cn/large/ed796d65gw1exyx878d9qj20rg0lidjk.jpg)

编译方法：

1. 找到一个c++源代码所在的文件夹，在文件夹中按住shift+鼠标右键，选择在此处打开命令行。
2. 输入g++ + 空格 + 你要编译的文件 -o 编译出来之后的可执行程序的名字， 如：`g++ main.cpp -o main.exe`（如果省略-o后面的命令，则会生成a.exe）
![](http://ww1.sinaimg.cn/large/ed796d65gw1exyx6vcq29j214u0o7dl5.jpg)
3. 在命令行中输入 main.exe 即可运行程序。
![](http://ww3.sinaimg.cn/large/ed796d65gw1exyx9v4s49j20rg0lijtb.jpg)


### 1.3 测试数据的文件输入输出

现在大家做题一般的输入方法就是，按照西西里的测试例子，键盘输入，当程序错误的时候需要一次次输入非常繁琐，现在给大家提供一种高效而且重要的方法，文件流输入代替键盘流输入。

其实，在抽象的层面上，键盘输入、文件输入和网络输入等都是IO，是等价的。我们可以利用这个进行文件代替键盘输入。

1. 在刚才我们编译的程序之中，我们生成了main.exe的程序。假设现在我们的程序是做a-b的简单运算。我们现在在源代码的同一个目录下新建一个文件"input.txt"。我们打开文件输入两个数100和99。
![](http://ww2.sinaimg.cn/large/ed796d65gw1exyxj9jpvtj20u70oaq86.jpg)

2. 接着我们在命令行输入命令`main.exe < input.txt`。我们很惊喜地发现，程序自动输出了1,我们不需要手动去使用键盘输出。
![](http://ww2.sinaimg.cn/large/ed796d65gw1exyxllpk8lj217v0pygrs.jpg)

对于长而复杂的输入，这无疑是一个简化的过程。

对于文件输出，同样是可以的 `main.exe < input.txt > output.txt`


## 2 断点调试法（课题讲解）

```cpp
#include<iostream>
using namespace std;

struct employee {
    long id, salary, height, boss, subordinate;
};
int main() {
    struct employee a[10000], temp, current_deal, potential_boss, search;
    int total_test, current_test, current_e, e_num, id_search;
    int i, k, j, m, n, t, u;
    for (u = 1;u <= 10000;u++) {
        a[u].subordinate = 0;
        a[u].boss = 0;
        a[u].height = 0;
        a[u].id = 0;
        a[u].salary = 0;
    }
    cout << "How many test do you want to have?\n";
    cin >> total_test;
    
    current_test = 1;
    while (current_test <= total_test) {
        cout << "please input the number of employees\n";
        cin >> e_num;
        
        current_e = 1;
        for (i = 1;current_e <= e_num;i++) {
            printf("please input No.%d empolyees' id, salary, height(seperated by space)\n", i);
            scanf("%d %d %d", &a[i].id, &a[i].salary, &a[i].height);
            current_e ++;
        }
		for (k = 1;k <= (e_num - 1);k++) {
            for(j = 1;j <= (e_num - 1);j++) {
                if(a[j].salary > a[j+1].salary) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }

		for (m = 1;m <= e_num;m++) {
			current_deal = a[m];
			for(n = e_num;n <= (m + 1);n--) {
				potential_boss = a[n];
				if(current_deal.height <= potential_boss.height) {
					a[m].boss = potential_boss.id;
					a[n+1].subordinate += 1;
				}
			}
		}
		
		cout << "please input the id you want to search for its boss and subordinates\n";
		cin >> id_search;
		
		for (t = 1;t <= e_num;t++) {
			if (id_search == a[t].id) {
				search = a[t];
			}
		}
		
		cout << "(" << search.boss  << ", " << search.subordinate;
		current_test ++;
    }
    
    return 0;
}
```

1. 设置断点
2. 运行程序
3. 添加监控变量
4. 执行程序、单步运行

## 3 实验报告内容 Breakpoint Debug

### 3.1 Pre Assignment

1. Learn about breakpoint debug method.
2. Learn about file stream input for a C++ executable program.
3. Learn about how to compile a program using command line interface.

**Notice that**

These knowledge is very important for you and it is a good preparation for the course project as well as some other following courses. You can ignore this assignment, but you are responsible for the yourself.

### 3.2 Assignment 0(10pts)

Learn about command line compile and file input. And then use the method on one of the questions in week 7 in sicily (write this part in your report and snap shoots are recommended).

### 3.3 Assignment 1(80pts)

Learn about breakpoint debug method **yourself** and using it to debug the following three C programs.

**Target: A solution with three correct C++ source program.**

**Questions:**

1. What is the bugs of the program and how can you find the bug? (8 pts)
2. What test data you use in the debug process? (8 pts)
3. Tell the problems about coding styling in the following program.(8 pts)
4. Understand three sorting algorithm(Bubble sort, selection sort and insertion sort), and then write Pseudo code or Flowchart for them respectively.(16 pts)
5. Correct these three programs include its style problems respectively and note that you should submit your source code. (55pts )

**Notice that**

1. Style is very important while coding, so if your new program is still ugly in style, 50% score will be deducted.
2. We will use black box test this time with auto running scripts. So if your file structure is wrong or your program result in errors will cause 0pts. And the grade depends on how many test cases passed like that in YOJ.
3. You should not add prompt statement this time like "please input an integer". The testing program will consider it to be wrong answer if you do it.
4. Sample input and output for all the three correct program.

Input: The first line contain an integer n which indicates the number of test cases. There will be n line in the flowing. For each line, there will be an integer m at the first of the line which means the size of the array. And there will be m integers. Note that, 1<n<20, 1<m<10000.

Output: For each input output the sorted array(from small to big) with spaces between elements.

```cpp
input:
3
3 1 3 2
5 1 2 3 4 5
4 99 100 22 33

output:
1 2 3
1 2 3 4 5
22 33 99 100
```

**Also Notice that the output of the flowing program is not correct at all, please correct it**

link:
[bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)
[insertion sort](https://en.wikipedia.org/wiki/Insertion_sort)
[selection sort](https://en.wikipedia.org/wiki/Selection_sort)

#### 3.3.1 Program 1 Bubble sort

```cpp
#include<iostream>
using namespace std;

int main() {
int num[10000];
int n;
int i, j, temp;
int m, k, p, q, o;
int result[2000];

cin >> n;

for(i = 0; i < n; i++) {
cin >> num[i];
}

for(i = 0; i <= n; i++) {
for(j = 0; i + j < n; j++) {
  if(num[j] > num[j + 1]) {
temp = num[j];
num[j + 1] = num[j];
num[j] = temp;
  }
}
}

for(i = 0; i < n - 1; i++) {
cout << num[i] << " ";
}
cout << num[i] << endl;

return 0;
}

```

#### 3.3.2 Program 2 Insertion sort

```cpp
#include <iostream>
using namespace std;

int main() {
  int num[10000];
  int n;
  int i, j, temp;
  cin >> n;
  for(i = 0; i < n; i++) {
  cin >> num[i];}
  for(i=1; i<n; i++){
  temp = num[i];
  for(j=i-1; j>-1&&num[j]>temp;j--) {
  num[i]=num[j]; num[j]=temp;}}
  for(i = 0; i < n - 1; i++) {
  cout << num[i] << " ";}
  cout << num[i] << endl;
  return 0;
}
```

#### 3.3.3 Program 3 Selection sort

```cpp
#include <iostream>
using namespace std;

int main() {
  int num[10000];
  int n;
  int i, j, temp;
  int min;
  cin >> n;
  for(i = 0; i < n; i++)
    cin >> num[i];
  for(i=0; i < n; i++){
    min = num[i];
    for(j = i; j < n; j++) {
      if(min>num[j]) {
	temp = num[j];
	num[j] = min;
	min = temp;
    } for(i = 0; i < n - 1; i++) {
    cout << num[i] << " ";}
  cout << num[i] << endl;
  return 0;
}
}
}
```

### 3.4 Report

1. part one: Assignment 0
2. part two: Assignment 1
3. part three: Discussion，Cooperation and Summary (optional)

格式无要求，part two必须截图表明你使用了断点调试的技巧来调试你的代码，包括但不限于：如何添加断点，如何删除断点，如何运行下一条语句，如何运行到下一个断点，如何添加查看，如何删除查看，等等。

### 3.5 Submit lists

![](http://ww2.sinaimg.cn/large/ed796d65gw1exyyqqbm4vj206x078t8x.jpg)

作业发给学委，不要发压缩包，注意文件命名必须完全一致，否则机器测试无法进行，0分处理。

### 3.6 Deadline

**19 Nov. 2015, 23:59**

Please submit your homework on time.

## 4 Discussion，Cooperation and Summary (15pts)

In this part, you will have some options, if you do more options, you will learn more and get more marks.

**You should note this part in your report**

### option 1: Github Discussion

Comment at this issue and describe a problem that you meet and how you solve it detailedly.

**Notice that** 

1. you should not copy and paste your personal report simply.
2. you should not write a very simple one and your comment will be deleted if you do that.
3. you should not post meaningless questions. 
4. Show me in your report about your discussion on github with screenshot.

### option 2: Simple Presentation

Have a simple presentation in the lab class on Friday (4 persons limited). And after the presentation, everyone is encouraged to ask questions and you can get bonus by asking good questions.

**Notice that**

1. The presentation is no more than 5 minutes and there will be 5 extra minutes for discussion.
2. You should prepare much for it. PPT is encouraged.
3. First come, first get the opportunity.
4. You can describe a algorithm you have learn, but you should make a majority of your classmates know what you are describing.
5. You can also share with us your learning experience about C++, and give some advice about how to learn it well.
6. The theme of your presentation is very important, if you are not sure whether your theme is good or not, you can contact me for some advice.

### option 3: Helping others

You can help others to solve any problems the will meet. Detailedly describe the question, the solution and your personal experience as well.

**Notice that**

1. it is no need to consult with others that I help you, you help you to get marks. You can simply send email to me and I will give you the marks. No worry about that, if you do have helped others and spent a lot of time on it, you deserve the score.

### option 4: Personal Summary

Write personal summary for yourself.
List at least 10 problems that you have met in your learning in C++ language and describe the solution as well.

**Notice that**

1. you should not have ten very simple problems, you must let me know your learning method and also the method to solve problems.
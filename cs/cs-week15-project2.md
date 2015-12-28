# week15 Final Project

Final project is our the last project. There are two options for you guys to choose. But of course, if you are able to do more, just do it !

## 1 Option 1: Review

### 1.1 Overview

I think many students did not do your work well in sicily before, or maybe some students did finish the every weeks' subject in sicily but they were not familiar with the relative knowledge. Because of that, this option is called to my mind. I hope most of your guys have a good look of the primer knowledge of C++.

### 1.2 Requirements (100pts)

1. Finish the subjects that you have not completed in sicily, or do it again in order to review relative knowledge.
2. Choose 3 subjects in every weeks' homework. Analyze it and write down the pseudocode for every subject you have chose. At the same time, you should summarize it with writing down what konwledge does this subject want to investigate. Please answer all of this in your report.**(80pts)**
3. Write an essay about what have you gained in this semester, and your understanding of C++ and talk about the design function protopyte procedure-oriented thinking.**(20pts)**

### 1.3 Report template

> ### Final project
> #### 1 简介
> Brief introduction of you and your project.
> #### 2 题目总结和分析
> ##### 2.1 第一周题目分析
> **1000**
> **题意：**
> 伪代码：
```cpp
Your pseudocode...
```
> 相关知识分析：
> 本题考点分析：
> ##### 2.2 第二周题目分析
....
依次类推。
> #### 3 Essay
> Write down your essay here.

### 1.4 Submit

Please name after the template below.

> 虽然只有一个文件，但是也请将打包压缩

```cpp
cs_final_project_option1_学号_姓名.zip
	|-- report.pdf
```

## 2 Option 2: simpleList.h

### 2.1 Overview

链表是一种比较重要的数据类型。大家应该听说过这样的一种说法，程序 = 语言 + 数据结构 + 算法。可能大家要区分一下数据类型和数据结构的概念。我们到目前为止，学习的唯一的数据类型可能就是数组了。数据类型呢，就是平时熟练运用的int, float, double, char之类的了。

下面是C++数据类型的总结。

**C++数据类型**

* 基本类型
	* 整型
		* 短整形(short int)
		* 整型(int)
		* 长整型(long int)
	* 字符型(char)
	* 浮点型
		* 单精度类型(float)
		* 双精度类型(double)
		* 长双精度类型(long double)
	* 布尔型(bool)
	* 空类型(void)
* 非基本类型
	* 枚举类型(enum)
	* 数组类型(type[])
	* 结构体类型(struct)
	* 联合体类型(union)
	* 类类型(class)
	* type *
* 指针类型

数据结构是计算机存储、组织数据的方式。数据结构是指相互之间存在一种或多种特定关系的数据元素的集合。

> from 百度百科

列举一下常用的数据结构。

**数组**

在程序设计中，为了处理方便， 把具有相同类型的若干变量按有序的形式组织起来。这些按序排列的同类数据元素的集合称为数组。在C语言中， 数组属于构造数据类型。一个数组可以分解为多个数组元素，这些数组元素可以是基本数据类型或是构造类型。因此按数组元素的类型不同，数组又可分为数值数组、字符数组、指针数组、结构数组等各种类别。

**栈**

是只能在某一端插入和删除的特殊线性表。它按照先进后出的原则存储数据，先进入的数据被压入栈底，最后的数据在栈顶，需要读数据的时候从栈顶开始弹出数据（最后一个数据被第一个读出来）。

**队列**

一种特殊的线性表，它只允许在表的前端（front）进行删除操作，而在表的后端（rear）进行插入操作。进行插入操作的端称为队尾，进行删除操作的端称为队头。队列是按照“先进先出”或“后进后出”的原则组织数据的。队列中没有元素时，称为空队列。

**链表**

是一种物理存储单元上非连续、非顺序的存储结构，它既可以表示线性结构，也可以用于表示非线性结构，数据元素的逻辑顺序是通过链表中的指针链接次序实现的。链表由一系列结点（链表中每一个元素称为结点）组成，结点可以在运行时动态生成。每个结点包括两个部分：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域。

**树**

是包含n（n>0）个结点的有穷集合K，且在K中定义了一个关系N，N满足 以下条件：
（1）有且仅有一个结点 K0，他对于关系N来说没有前驱，称K0为树的根结点。简称为根（root）。　 （2）除K0外，K中的每个结点，对于关系N来说有且仅有一个前驱。
（3）K中各结点，对关系N来说可以有m个后继（m>=0）。

**图**

图是由结点的有穷集合V和边的集合E组成。其中，为了与树形结构加以区别，在图结构中常常将结点称为顶点，边是顶点的有序偶对，若两个顶点之间存在一条边，就表示这两个顶点具有相邻关系。

**堆**

在计算机科学中，堆是一种特殊的树形数据结构，每个结点都有一个值。通常我们所说的堆的数据结构，是指二叉堆。堆的特点是根结点的值最小（或最大），且根结点的两个子树也是一个堆。

**散列表**

若结构中存在关键字和K相等的记录，则必定在f(K)的存储位置上。由此，不需比较便可直接取得所查记录。称这个对应关系f为散列函数(Hash function)，按这个思想建立的表为散列表。

### 2.2 Requirement(100pts)

#### 2.2.1 自学链表数据结构

了解链表组成，自学关于链表的数据结构。

#### 2.2.2 实现simpleList.cpp （70pts）

要求实现simpleList.h头文件的函数。

```cpp
// 实现一个简单的单向链表

typedef struct node_type {
	int data; // 节点数据
	struct node_type *next; // 指向下一个node_type类型数据
} nodetype;

typedef struct list_type {
	nodetype *head; // 链表头节点
	int length; // 指针长度
} listtype;

// 描述：初始化并生成链表，注意，返回的是listtype类型，代表链表的头部，还有长度记录
// 输入：无
// 返回：返回listtype类型的数据的指针（提示：需要动态生成数据，使用new操作符）
// 例子：无
listtype * list_create(void);

// 描述：打印链表内容
// 输入：链表listtype类型指针，代表一个链表
// 返回：无
// 输出：打印输出链表内容
// 例子：如果链表内容为：1->2->3->4,则打印输出"1->2->3->4"（不包括括号）
void list_print(listtype *list);

// 描述：向链表内插入值
// 输入：listtype指针，插入位置，需要插入的数据
// 返回：返回插入数据后的listtype类型指针
// 例子：list1：1->2->3，调用list_insert(list1, 0, 0)。结果：list1: 0->1->2->3。
// 提示：注意边界情况，如果插入的位置非法（负数、大于length等，则什么都不干）。插入的是动态创建nodetype节点
listtype * list_insert(listtype *list, int location, int data);

// 描述：删除链表的值
// 输入：listtype指针，删除的数据的位置
// 返回：返回被删除的节点的data
// 例子：list1：1->2->3，调用list_delete(list1, 1)，那么list1变为：1->3
// 提示：注意边界情况，如果删除的位置非法（负数、大于length等，则什么都不干）。删除的nodetype节点。
int list_delete(listtype *list, int location);

// 描述：清空链表
// 输入：需要清空的链表指针
// 返回：清空后的链表指针
// 提示：由于nodetype节点是通过new动态创建的，因此，清空链表的时候，需要通过delete删除。避免内存泄漏的发生。
listtype* list_clear(listtype * list);

// 描述：返回链表的长度
// 输入：链表指针
// 返回：链表长度
int list_length(listtype * list);


// 描述：判断链表是否为空
// 输入：链表指针
// 返回：如果链表为空，返回true，否则false
bool list_empty(listtype * list);


// 描述：将输入的链表进行排序
// 输入：链表指针
// 返回：排序后的链表指针
// 要求：从链表头开始按照升序排序
// 例子：list1: 1->4->5->2，list_sort(list1): 1->2->4->5
listtype * list_sort(listtype * list);
```

### 2.3 Report template （30pts）

> ### Final project
> #### 1 简介
> Brief introduction of you and your project.
> #### 2 函数功能介绍
> 类似软件文档，介绍你的函数的用法和功能等
> #### 3 心得体会
> 你的心得体会


### 2.4 Submit

只需要提交simpleList.cpp文件

```cpp
cs_final_project_option2_学号_姓名.zip
	|-- simpleList.cpp
	|-- report.pdf
```

提交到ftp上的相应目录上。

## 3 Deadline

C++程序设计期末考试之前。

## 3 Option 3: EduPlus (弃用)

目前中山大学合并了信科院、软件学院、移动信息工程学院，组成新的数据科学与计算机学院。现在教务处面临着学生的教务教学信息管理的问题，比如录入学生的基本信息（姓名，学号，身份证信息，家庭住址，联系方式，宿舍号等等）、记录成绩（记录学生每一科目的成绩）、学籍信息记录（已经完成了哪些学业、选课记录等）等。

现在，新学院觉得旧的教务教学信息管理系统已经不能满足需求了，学院出资30w聘请你开发新的信息管理系统：EduPlus

你准备好了吗？

### 3.1 Requirement(70pts)

#### 3.1.1 界面

1. 对界面无要求，命令行界面即可。当然，如果可以做到更好，当然鼓励。
2. 类似于ubuntu下面的terminal。
3. 要求实现相关命令。就像terminal中，ls命令是列出当前文件夹的内容。EduPlus需要你实现EduPlus的命令。这就需要你能够识别到底用户输入了什么命令。

#### 3.1.2 功能

**数据文件**

对于EduPlus，你应该维护三个文件。

```cpp
students_info.txt
students_grades.txt
students_courses.txt
```

例子：

**students_info.txt**

注意，对students_info.txt文件来说学号是唯一的。也就是不能同时存在相同学号的两条记录。

```cpp
15551111 张三 1997.07.01 18812341234
15551112 李四 1997.07.02 18812341235
```

**students_grades.txt**

```cpp
15551111 {"C++ 程序设计": 95} {}
```

**命令行模块**

1. 实现EduPlus的命令读取功能
2. 能识别正确命令和错误命令
3. 根据对应的命令执行对应的操作

具体命令：

* insert 学号 姓名 出生年月 联系方式

比如：insert 15551111 张三 1997.07.01 18812341234

* delete 学号


**数据操作模块**



**数据查询模块**


#### 3.1.3 提示

### 3.2 Report Template (30pts)

### 3.3 Submit

```cpp
cs_final_project_option3_学号_姓名.zip
	|-- // add your file here
```

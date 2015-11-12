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


## 2 断点调试法

## 3 实验报告内容

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

1. it's no need to consult with others that I help you, you help you to get marks. You can simply send email to me and I will give you the marks. No worry about that, if you do have helped others and spent a lot of time on it, you deserve the score.

### option 4: Personal Summary

Write personal summary for yourself.
List at least 10 problems that you have met in your learning in C++ language and describe the solution as well.

**Notice that**

1. you should not have ten very simple problems, you must let me know your learning method and also the method to solve problems.
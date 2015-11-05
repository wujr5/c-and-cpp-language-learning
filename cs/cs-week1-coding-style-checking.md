# week1 代码风格检查

> 唠叨几句：

> 大家叫师兄就好了，不要叫老师，听着别扭=_=。

> 上了实验课或者上了理论课，可能比较多的同学会有这样的想法：学了这些到底有什么用？好像觉得就只是敲几行不知道在干嘛的代码，输出一些不知道干嘛的结果。非常无聊。

> 对于这个问题，我还真不知道怎么回答。因为我大一的时候也是这样想的。其实软件工程专业，c语言是非常基础的一门语言，很多计算机类专业都以c语言作为入门语言。作为初学者，最重要的是对语言本身语法的了解和认识，算法的话，学有余力可以深究，这门课不会对算法有过高的要求。

> 我觉得现在同学们coding最大的动力来源于学业要求和把题目做对的成就感吧。在我们学校，你能真正利用编程做出产品或者有趣的东西，可能要到大二，那个时候你可能真的要迷恋上编程了。现在的话，我建议是，加油吧，好好学~慢慢的你会发现其实敲代码挺有意思的。

## 一、本周情况小结

第一周要求很低。基本上是熟悉练习系统[Sicily][]，还有编辑器DevCpp的使用。对于这两个要求，我相信不会有什么问题。问题集中出现在同学们对c语言语法的理解上面。

下面列出出现频率较高的错误。

*	`scanf("%d", &a);`使用`scanf`函数读取输入内容，放到变量中的时候，记得添加**取址运算符**`&`
*	使用系统暂停函数`system("pause");`时，记得在头文件添加`#include<stdlib.h>`
*	建议尽量不要在[Sicily][]上面直接编写代码，而是在DevCpp或者VS上面先编辑调试确定语法没问题，输入输入没问题的时候，在把代码全部复制粘贴到[Sicily][]上面提交，不然会浪费很多时间。
*	注意学会用编辑器阅读程序语法或者运行错误。
*	

[Sicily]: http://soj.sysu.edu.cn/index.php

## 二、用cpplint.py进行代码风格检查

> Sicily系统没有在编程风格上作要求，只要你的代码能运行，输入输出没问题，就可能可以通过。但是这样会写出可能可读性很差的代码。因此我们TA强烈要求同学们一定要注意自己的代码编写的风格。

下面介绍一个工具的使用来进行代码风格检查。

### 步骤1：安装python

教程：[安装python][]

> 要注意的是，教程中说的系统变量就是python的安装路径。

[安装python]: http://jingyan.baidu.com/article/7908e85c78c743af491ad261.html

### 步骤2：检查python是否安装成功

1. 打开命令行窗口（win键+R；输入`cmd`；回车）如下：
![](http://ww3.sinaimg.cn/large/ed796d65gw1ewaf0z4ppoj20he091myl.jpg)
2. 如果安装成功，在命令行窗口输入`python`将会出现以下的输出：
![](http://ww2.sinaimg.cn/large/ed796d65gw1ewaf4k6m5yj213s0lw0vr.jpg)


### 步骤3：下载cpplint.py

点击下载[cpplint.py][]
![](http://ww1.sinaimg.cn/large/ed796d65gw1ewafi54dw8j21740om75z.jpg)

[cpplint.py]: http://pan.baidu.com/s/1bn0mqN9

### 步骤4：代码风格检查

1. 把`cpplint.py`文件复制到你的程序代码所在的目录。比如：
![](http://ww1.sinaimg.cn/large/ed796d65gw1ewafkpn599j20wl0p4wk4.jpg)

2. 打开命令行窗口，方法就是步骤2的第一点。导航到代码所在目录。
![](http://ww1.sinaimg.cn/large/ed796d65gw1ewafoanusrj213s0c642m.jpg)
> `cd`命令的含义是打开目录，`dir`命令的含义是查看该目录下地文件和文件夹

3. 运行命令  
	```
	python cpplint.py --filter=whitespace/tab filename.c
	```
	> 注意`finename.c`是你的源代码的文件名
	
	然后就会有如下的输出：
	![](http://ww4.sinaimg.cn/large/ed796d65gw1ewagjny36xj213s0lwwim.jpg)
	> 注意错误，如`test.c:7:  Line ends in whitespace.  Consider deleting these extra 	spaces.  [whitespace/end_of_line] [4]`。`test.c`指的是文件名，`7`指的是行号，后面的	`Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/	end_of_line] [4]`指的是代码中出现的错误。

### 步骤5：根据输出的改善代码

根据输出的错误，逐行改进代码。知道错误数目为0。如`Total errors found: 0`：
![](http://ww2.sinaimg.cn/large/ed796d65gw1ewagnwjvq7j213s0lw40r.jpg)

### 步骤6：提交到Sicily

把通过google style的cpplint.py测试的代码，也就是`Total errors found: 0`，再把代码提交到Sicily。

## 总结

进行google style风格检测的目的是让同学们写出可读性良好的代码。按照上面的流程编写代码，能帮助你养成良好的编程习惯。希望同学们重视。

有任何问题欢迎评论。我们会持续改进。

## 参考

1. [cmd命令行大全][]
2. [google style guide][]
3. [cpplint][]


[cmd命令行大全]: http://jingyan.baidu.com/article/f0e83a25f2659a22e59101b5.html
[google style guide]: https://github.com/google/styleguide
[cpplint]: https://en.wikipedia.org/wiki/Cpplint
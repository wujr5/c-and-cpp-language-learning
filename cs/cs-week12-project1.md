# week12 project1 The Snake Game

## 1 Brief Introduction

> Snake is a game where the player maneuvers a line which grows in length, with the line itself being a primary obstacle. There is no standard version of the game. The concept originated in the 1976 arcade game Blockade, and its simplicity has led to many implementations (some of which have the word snake or worm in the title). After a variant was preloaded on Nokia mobile phones in 1998, there was a resurgence of interest in the Snake concept as it found a larger audience.

> The player controls a dot, square, or object on a bordered plane. As it moves forward, it leaves a trail behind, resembling a moving snake. In some games, the end of the trail is in a fixed position, so the snake continually gets longer as it moves. In another common scheme, the snake has a specific length, so there is a moving tail a fixed number of units away from the head. The player loses when the snake runs into the screen border, a trail, or another obstacle.

> The Snake concept comes in two major variants:

1. In the first, which is most often a two-player game, there are multiple snakes on the playfield. Each player attempts to block the other so he or she runs into an existing trail and loses. Surround for the Atari 2600 is an example of this type. The Light Cycles segment of the Tron arcade game is a single-player version, where the other "snakes" are AI controlled.
![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6f/Matopeli_telmac_1800.JPG/330px-Matopeli_telmac_1800.JPG)

2. In the second variant, a sole player attempts to eat apples by running into them with the head of the snake. Each object eaten makes the snake longer, so maneuvering is progressively more difficult. Examples: Nibbler, Snake Byte.
![](https://upload.wikimedia.org/wikipedia/en/0/04/Snake_trs-80.jpg)

## 2 Requirement

### 2.1 Developmental Enviroment

Ubuntu or other linux operating system is required

> There will be at least 50% penalty for the use of Dev-cpp in windows

### 2.1 Debug Tool

GDB. Just watch the video of introduction of gdb. To know more detail usage of gdb, search it.

![](http://ww1.sinaimg.cn/large/ed796d65gw1eytqdfdwosj21er0u0dmb.jpg)

## 3 Detail Documents (80pts)

### 3.1 User Interface

Like the following picture. If you want to make some changes, just do it !

![image](https://cloud.githubusercontent.com/assets/7693440/11754978/2ac75f4c-a08a-11e5-91d7-77ee38fe0e37.png)

### 3.2 Requirement

#### 3.2.1 How to Play Your Game (30pts)

1. "W, A, S, D" should be the direction controler, represent for direction respectively: UP, LEFT, DOWN, RIGHT
2. Press key "W": your snake should go up
3. Press key "A": your snake should go left
4. Press key "S": your snake should go down
5. Press key "D": your snake should go right
6. If the snake hit the food, it eat the food, so the length of the snake should increase by 1 unit

#### 3.2.2 How to Win the Game (20pts)

You can set a maximum length of the snake, if the player's snake reach that, the player win the game

After the player win the game, you should present a win-game interface fot the player, so that he knows what happens. At the same time, he can choose exit the game or restart the game.

#### 3.2.3 When Will the Player Lose the Game (20pts)

1. The snake hits its body
2. The snake hits the wall

After the player lose the game, you should present a lose-game interface fot the player, so that he knows what happens. At the same time, he can choose exit the game or restart the game.

#### 3.2.4 Extends (10pts)

1. Record how many steps the snake have walked, present it bellow the hints.
2. Automatic snake: the snake can automatic move, the press of key can only change its direction
3. Degrees of difficulty: 
	1. You can design increasing maximum length for different levels. For example, the fist level, the maximum length is 10 and 20 for second.
	2. You can design increasing moving speed with the snake eating more food. (for automatic snake)

## 4 Report Template (20pts)

> Mind that software = program + data + document, and here the document is your report, so I suggest that you should pay more attention to this part if you want to get higher scores.

Template like that:

### 1 Deploy

Here discribe how to run your game and discribe the operating environment.

### 2 Pseudocode and Flowchart

Write down the pseudocode and flowchart of your game, just use the knowledge you have learned in [lab4][]

### 3 Feelings and Experimences

I concern about how you feel and how you make progress when you finish your work step by step.

Write down some questions you encountered and describe how you solved it.

Write down what have you gained from this project. If you do not gain anything from it, I felt sorry for it and I want to know the reasons.

## 5 Bonuses

1. Show me you have used the knowledge you have learned in [lab1][] in your report. **(2pts)**
2. Show me you have used the knowledge you have learned in [lab2][] in your report. **(2pts)**
3. Color your snake, the wall or the food, just used the knowledge you have learned in [lab3][] in your report. **(5pts)**
4. If you encounter some bug in your project, and you use the knowledge you learned in [lab5][] to fix it, that is to say, you use the method of breakpoint debug to debug your code, just descripe it in your report. **(5pts)**
5. It is recommanded to use your myString.h you write in [lab6][] instead of <cstring> to process the char string in your project, and you should tell me where you used it in your report. **(10pts)**

[lab1]: https://github.com/wujr5/c-and-cpp-language-learning/issues/12
[lab2]: https://github.com/wujr5/c-and-cpp-language-learning/issues/14
[lab3]: https://github.com/wujr5/c-and-cpp-language-learning/issues/15
[lab4]: https://github.com/wujr5/c-and-cpp-language-learning/issues/18
[lab5]: https://github.com/wujr5/c-and-cpp-language-learning/issues/25
[lab6]: https://github.com/wujr5/c-and-cpp-language-learning/issues/33

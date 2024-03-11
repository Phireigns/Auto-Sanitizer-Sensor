<h1>Auto Sanitizer Sensor</h1>

 ### [YouTube Demonstration](https://youtu.be/g6GxHHIjTqs)

<h2>Description</h2>
This Arduino code controls a system with two servo motors and an ultrasonic sensor. The system measures the distance using the sensor and moves the servo motors based on the detected distance. If the distance is less than or equal to 20cm, one servo motor moves while the other remains still for 1 second. If the distance is greater, the servo motors briefly move to different angles. This code enables the system to detect objects within a certain range and adjust the servo motors accordingly.
<br />

<h2>Summary</h2>

- <b>The code initializes variables, sets up the LCD, keypad, and timer.</b>
- <b>It defines helper functions for LCD display and button press sound.</b>
- <b>The menu() function displays the game menu and handles level selection.</b>
- <b>The math_game() function sets up the math game difficulty page.</b>
- <b>The english_gameMenu() function displays the English game tutorial.</b>
- <b>The code handles player input and checking of answers in player mode.</b>
- <b>It includes a loop that listens for keypad input and performs game actions.</b>

<h2>Languages and Utilities Used</h2>

- <b>C++</b>
- <b>Arduino</b>

<h2>How it works!:</h2>

<p align="center">
Main Menu: <br/>
<img src="https://imgur.com/uHPNc4P.png" height="80%" width="80%" alt="Main Menu"/>
<br />
<br />
Instructions: <br/>
<div align="center">
<img src="https://imgur.com/fjwW8pE.png" height="25%" width="25%" alt="Instructions"/>
<img src="https://imgur.com/cUZWuGT.png" height="25%" width="25%" alt="Instructions"/>
<img src="https://imgur.com/iicQOil.png" height="25%" width="25%" alt="Instructions"/>
</div>
</p>
<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>

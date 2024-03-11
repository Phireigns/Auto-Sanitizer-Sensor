<h1>Auto Sanitizer Sensor</h1>

 ### [YouTube Demonstration](https://youtu.be/Ymw2HpYZ7nE)

<h2>Description</h2>
This Arduino code controls a system with two servo motors and an ultrasonic sensor. The system measures the distance using the sensor and moves the servo motors based on the detected distance. If the distance is less than or equal to 20cm, one servo motor moves while the other remains still for 1 second. If the distance is greater, the servo motors briefly move to different angles. This code enables the system to detect objects within a certain range and adjust the servo motors accordingly. <b>Please note that this was a group project, but my work was heavily on the coding part.</b>
<br />

<h2>Summary</h2>

- The code initializes the servo motors, ultrasonic sensor, and serial communication.
- It performs a test by moving the servo motors to predefined positions.
- In the loop function, it measures the distance using the ultrasonic sensor and calculates the duration of the echo.
- Based on the measured distance, the code moves the servo motors accordingly: if the distance is less than or equal to 20cm, one servo motor moves while the other remains still for a specific duration; if the distance is greater, the servo motors briefly move to different angles.
- The loop function continuously repeats the distance measurements and servo motor movements.

<h2>Languages and Utilities Used</h2>

- <b>C++</b>
- <b>Arduino</b>

<h2>How it works:</h2>

<p align="center">
<img src="https://imgur.com/s56re9V.png" height="80%" width="80%" alt="Main Menu"/>
<br />
<br />
<img src="https://imgur.com/Xsm566a.png" height="80%" width="80%" alt="Main Menu"/>
<br />
<br />
<div align="center">
<img src="https://imgur.com/BaIs5k1.png" height="25%" width="25%" alt="Instructions"/>
<img src="https://imgur.com/zO6O5K8.png" height="25%" width="25%" alt="Instructions"/>
<img src="https://imgur.com/qPtUliQ.png" height="25%" width="25%" alt="Instructions"/>
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

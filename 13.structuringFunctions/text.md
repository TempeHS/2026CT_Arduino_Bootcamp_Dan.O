# Deaf preventer

I will create a system that will measure and detect the decibale level in that room and when it is over a certain range 
the waring system will active telling you through the flashing led, buzzer and OLED sceen that the decibles are too loud
and you are at risk of hearing damage.
Decibalms will be measured through the sound detecter

### Its will be made with a sound senor that will measure the decible level
 when it goes over a certain decible for example 80 decibles which is considered a police siren or a noisy resturant
  it will activate the LED that will procced to flash, the OLED screen will light up with text saying to keep it down and the buzzer will activate.


  ## sensors
  
  | sensors| Use | Pin |
  | ---    | --- | --- |
  | Sound  | Sence decible level | 12C | 
  | buzzer | Auditoy alert | 3 |
  | LED    | Visual Alert | D6 |
  | OLED   | Visual alert | D5 |


  - Tech that will be ysed 
  - Sound sensor
  - LED (will be flashing)
  - OLED screen 



  Mohey- Respitory issues
  Needs dust sensor

My goal for Mohey is to provide relife for her midstage silicosis
To do this I will create a system that will measure and detect the density of dust within a range of her.
I implement the dust sensor and when the dust sensor isactivated  it will activethe LED, Buzzer and OLED screen to warn her that she needs to leave
the room imediantly. This warning system will work as long as she obeys the warnings.

  | sensors| Use | Pin |
  | ---    | --- | --- |
  | Dust  | Density of dust | 12C | 
  | buzzer | Auditoy alert | 3 |
  | LED    | Visual Alert | D6 |
  | OLED   | Visual alert | D5 |

Setup
Dustsenor density = D
Buzzer 
LED 
OLED 

Alert system
Buzzer = HIGH
LED= true
OLED = "Leave the room now"

If D > 120;
Alert system = true;


My goal for Michelle is to provide a easy accesable system to allow for Michelle to live a healthier life.
To do this I will make a system that will measure her heart rate, and when it is over a certain rate 
The Speaker, sound sensore and LED these parts will provide adiqute infomation for her to find a way to 
relive stress

  | sensors| Use | Pin |
  | ---    | --- | --- |
  | Heart rate  | Heart reat | 12C | 
  | Speaker | Auditoy alert | 3 |
  | LED    | Visual Alert | D6 |
  | Sound sensor  | Auditoy alert | D5 |



  Setup 
  Heart rate senrsor = H 
  LED 
  Speaker 
  Sound sensor 

Speaker = " sound file" 

  If H > 90;
  Led = True 
  Buzzer = HIGH
  Speaker = true
# 선풍기만들기 



[![YouTube Channel Views](https://img.shields.io/youtube/channel/views/UCz5BOU9J9pB_O0B8-rDjCWQ?label=YouTube&style=social)](https://youtu.be/E6wkvTG2Ofs?si=k_IFc8MM8aGpZE7J)

## 하드웨어 

- 아두이노 우노  
- SSD1306 OLED
- DS3231 RTC module
- CR2032 코인베터리
- M-M 점퍼선 8개 
- USB 2.0 케이블 Type A/B


**주의: 점퍼선 연결시 케이블을 제거하고 진행합니다.**

### 선 작업 
#### 회로도
![img](/ppt/img/RTC_Arduino_fritzing.png)
#### 핀 정보
| [Arduino UNO GPIO](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf) | DS3231 |
|-----------|------|
|   D19     | SCL  |
|   D18     | SDA  |
|   5V      | VCC  |
|   GND     | GND  |

| [Arduino UNO GPIO](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf) | SSD1306 |
|-----------|------|
|   D19     | SCL  |
|   D18     | SDA  |
|   5V      | VCC  |
|   GND     | GND  |

## 순서도
![flowchart](/img/Fan-2024-07-09-063658.png)

## 라이브러리  
## 응용하기  


## 참고
- [Makerguide](https://www.makerguides.com/how-to-control-fan-using-arduino-uno/)



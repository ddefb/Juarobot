
#include <AFMotor.h>
#include "controller_controller.c"
#include "robo.c"

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

//const int trig_pin = 7;
//const int echo_pin = 6;

int obs_sensor;

Robo__controller_mem mem;
Robo__controller_out _res;

void setup() {
    Serial.begin(9600);

    Robo__controller_reset(&mem);
  
//    pinMode(trig_pin, OUTPUT);
//    pinMode(echo_pin, INPUT);
//    digitalWrite(trig_pin, LOW);

      pinMode(A0, OUTPUT);
      pinMode(A1, INPUT);
      digitalWrite(A0, LOW);
}

double read_obstacle(){
  
    digitalWrite(A0, HIGH);
    delayMicroseconds(15);
    digitalWrite(A0, LOW);
    uint32_t pulse_time = pulseIn(A1, HIGH);     
    double distance = 0.01715 * pulse_time;

    Serial.print("distance ");
    Serial.print(distance);
    Serial.println(" cm");
   
    return distance;
}

void loop() {
    obs_sensor = read_obstacle();
    Robo__controller_step(obs_sensor, &_res, &mem);

    motor1.setSpeed(_res.vel1);
    motor1.run(_res.motor1);
    motor2.setSpeed(_res.vel2);
    motor2.run(_res.motor2);
    motor3.setSpeed(_res.vel3);
    motor3.run(_res.motor3);
    motor4.setSpeed(_res.vel4);
    motor4.run(_res.motor4);

    Serial.print("obstacle ");
    Serial.println(_res.obs);
    Serial.print("turning ");
    Serial.println(_res.turning);
    Serial.print("motor1 ");
    Serial.println(_res.motor1);
    Serial.print("motor2 ");
    Serial.println(_res.motor2);
    Serial.print("motor3 ");
    Serial.println(_res.motor3);
    Serial.print("motor4 ");
    Serial.println(_res.motor4);
    Serial.print("contador ");
    Serial.println(_res.cont);
    Serial.println("");
    
    delay(10);
}


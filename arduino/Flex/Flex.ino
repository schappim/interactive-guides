#include <SPI.h>
#include <MicroView.h>
#include <MicroViewWidget.h>
#include <MicroViewSlider.h>

MicroViewWidget *widget[4];

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
        Serial.begin(115200);
        pinMode(sensorPin,INPUT);
        digitalWrite(sensorPin,HIGH);
        widget[0] = new MicroViewSlider(0,0,0,1024);
	uView.begin();
	uView.clear(PAGE);
	widget[0]->draw();
  
}

void loop() {
        sensorValue= analogRead(sensorPin); 
        Serial.println(sensorValue);
  	widget[0]->setValue(sensorValue);
	uView.display();
	
}

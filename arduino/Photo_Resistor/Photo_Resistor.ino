//#include <SPI.h>
#include <MicroView.h>
//#include <MicroViewWidget.h>
//#include <MicroViewSlider.h>

MicroViewWidget *widget[4];

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
        pinMode(sensorPin,INPUT);
        digitalWrite(sensorPin,HIGH);
	uView.begin();
        //uView.clear(ALL);
	uView.clear(PAGE);
	//widget[0]->draw();
        widget[0] = new MicroViewGauge(32,24,40,140,WIDGETSTYLE1);
  
}

void loop() {
        sensorValue= analogRead(sensorPin); 
  	widget[0]->setValue(sensorValue);
	uView.display();
	
}

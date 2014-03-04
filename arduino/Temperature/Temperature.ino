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
        //digitalWrite(sensorPin,HIGH);
        widget[0] = new MicroViewSlider(0,0,0,100);
	uView.begin();
	uView.clear(PAGE);
	widget[0]->draw();
  
}

void loop() {
        sensorValue= analogRead(sensorPin); 
         float voltage = sensorValue * 5.0;
         voltage /= 1024.0; 
         float temperatureC = (voltage - 0.5) * 100 ; 
         Serial.println(voltage);
         Serial.println(temperatureC);
  	widget[0]->setValue(temperatureC);
	uView.display();
	
}

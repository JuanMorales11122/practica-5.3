#include <Adafruit_NeoPixel.h>//Incluimos la librería en el código
#define PIN        6 
#define pixeles 7 
#include <Keypad.h>
#include <Servo.h>
Servo servo1;

char A=10,B=11,C=12,D=13,E=2,F=3,G=4;

const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {A0,A1,A2,A3};
byte pinesc[columnas] = {6,7,8,9};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char estado;

Adafruit_NeoPixel pixels(7, 5, NEO_GRB + NEO_KHZ800);

#define esperar 300 

void setup() {
  pixels.begin(); 
  Serial.begin(9600);
  servo1.attach(10);

}

void loop() {
  estado = teclado.getKey();

Serial.println(estado);
 
  if(estado == 'A'){
    pixels.clear(); 
 pixels.setPixelColor(2, pixels.Color(150, 0, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(0, 150, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(150, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(0, 150, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 100, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 0, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 100, 175));
  pixels.show();
  delay(esperar);
  }
  
  if(estado == 'B'){
  pixels.clear();
     pixels.setPixelColor(6, pixels.Color(150, 0, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(0, 150, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(0, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(150, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 150, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 100, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 0, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 100, 175));
  pixels.show();
  delay(esperar);
  }
  
  if(estado == 'C'){
    pixels.setPixelColor(0, pixels.Color(200, 10, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(22, 145, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(145, 0, 22));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(90, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 0, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(200, 200, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 0, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 145, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(150, 0, 175));
  pixels.show();
  delay(esperar);
  }

  if(estado == 'D'){
   pixels.setPixelColor(0, pixels.Color(200, 10, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(22, 145, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(145, 123, 22));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(90, 0, 45));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 45, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(46, 200, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(200, 54, 0));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 34, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 34, 200));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(45, 0, 175));
  pixels.show();
  delay(esperar);
  }

if(estado == '1'){
  servo1.write(12);
delay(1000);
  servo1.write(0);
}

if(estado == '2'){
  servo1.write(24);
delay(1000);
  servo1.write(0);
}

if(estado == '3'){
  servo1.write(35);
delay(1000);
  servo1.write(0);
}

if(estado == '4'){
  servo1.write(55);
delay(1000);
  servo1.write(0);
}

if(estado == '5'){
  servo1.write(75);
delay(1000);
  servo1.write(0);
}

if(estado == '6'){
  servo1.write(85);
delay(1000);
  servo1.write(0);
}

 if(estado == '7'){
  servo1.write(105);
 delay(1000);
  servo1.write(0);
}

 if(estado == '8'){
  servo1.write(125);
   delay(1000);
  servo1.write(0);
}
 
 if(estado == '9'){
  servo1.write(145);
   delay(1000);
  servo1.write(0);
}
 

 if(estado == '0'){
  servo1.write(175);
   delay(1000);
  servo1.write(0);
}  
  
  if(estado == '*'){
  
    
    delay(esperar);
        pixels.setPixelColor(1, pixels.Color(22, 34, 34));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(145, 65, 9));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(90, 1, 90));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(150, 67, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(67, 76, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(200, 90, 70));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(150, 0, 30));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(4, pixels.Color(0, 145, 79));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(5, pixels.Color(150, 61, 175));
  pixels.show();
  delay(esperar);
  }
  if(estado == '#'){
  
    
    delay(esperar);
        pixels.setPixelColor(4, pixels.Color(22, 34, 34));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(6, pixels.Color(145, 65, 9));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(3, pixels.Color(90, 1, 90));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(2, pixels.Color(150, 67, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(67, 76, 150));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(0, pixels.Color(200, 90, 70));
  pixels.show();
  delay(esperar);
        pixels.setPixelColor(1, pixels.Color(150, 0, 30));
  pixels.show();
  delay(esperar);

        pixels.setPixelColor(5, pixels.Color(150, 61, 175));
  pixels.show();
  delay(esperar);
  }
}
 

#include <Wire.h> 
#include <LiquidCrystal_I2C.h> // Подключение библиотеки
//#include <LiquidCrystal_PCF8574.h> // Подключение альтернативной библиотеки
LiquidCrystal_I2C lcd(0x27,16,2); // Указываем I2C адрес (наиболее распространенное значение), а также параметры экрана (в случае LCD 1602 - 2 строки по 16 символов в каждой 
//LiquidCrystal_PCF8574 lcd(0x27); // Вариант для библиотеки PCF8574 
int s=0;
byte smile [8] = 
{
  B00010,
  B00001,
  B00001,
  B11001,
  B00001,
  B11001,
  B00001,
  B00010
};
byte stripe1[8] = {
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe2[8] = {
  B01000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe3[8] = {
  B00100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe4[8] = {
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe5[8] = {
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };


  byte stripe6[8] = {
  B00000,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe7[8] = {
  B00000,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe8[8] = {
  B00000,
  B00000,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe9[8] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe10[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00000,
  B00000,
  B00000
  };



  byte stripe11[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00000,
  B00000
  };
  byte stripe12[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00000
  };
  byte stripe13[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001
  };
  byte stripe14[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00010
  };
  byte stripe15[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00100
  };



  byte stripe16[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01000
  };
  byte stripe17[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10000
  };
  byte stripe18[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000
  };
  byte stripe19[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000
  };
  byte stripe20[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000,
  B00000
  };

  byte stripe21[8] = {
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe22[8] = {
  B00000,
  B00000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  byte stripe23[8] = {
  B00000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };
  
String Time = "";
int h = 0;
int m = 0;
int sec = 0;
void setup()
{
  lcd.init();                      // Инициализация дисплея  
  lcd.backlight();                 // Подключение подсветки
 // lcd.createChar(1,smile);
 // lcd.setCursor(0,0);              // Установка курсора в начало первой строки
//  lcd.print("\1");       // Набор текста на первой строке
  //lcd.setCursor(0,1);              // Установка курсора в начало второй строки
  //lcd.print("ArduinoMaster");       // Набор текста на второй строке
  
}
void loop()
/*
{Time = "";
m = s/60;
h = m/60;
sec = s-60*m-60*h;
Time+=String(h)+":"+String(m)+":"+String(sec);
  lcd.setCursor(0,1);              // Установка курсора в начало второй строки
  lcd.print(Time);
  s+=1;
  delay(1000);
}*/
{
  lcd.createChar(1,stripe1);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\1"); 
  delay(1000);
  lcd.createChar(2,stripe2);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\2"); 
  delay(1000);
  lcd.createChar(3,stripe3);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\3"); 
  delay(1000);
  lcd.createChar(4,stripe4);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\4"); 
  delay(1000);
  lcd.createChar(5,stripe5);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\5"); 
  delay(1000);

  lcd.createChar(6,stripe6);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\6"); 
  delay(1000);
  lcd.createChar(7,stripe7);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\7"); 
  delay(1000);
  lcd.createChar(8,stripe8);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\8"); 
  delay(1000);
  lcd.createChar(9,stripe9);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\9"); 
  delay(1000);
  lcd.createChar(10,stripe10);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\10"); 
  delay(1000);

  lcd.createChar(11,stripe11);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\11"); 
  delay(1000);
  lcd.createChar(12,stripe12);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\12"); 
  delay(1000);
  lcd.createChar(13,stripe13);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\13"); 
  delay(1000);
  lcd.createChar(14,stripe14);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\14"); 
  delay(1000);
  lcd.createChar(15,stripe15);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\15"); 
  delay(1000);

  lcd.createChar(16,stripe16);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\16"); 
  delay(1000);
  lcd.createChar(17,stripe17);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\17"); 
  delay(1000);
  lcd.createChar(18,stripe18);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\18"); 
  delay(1000);
  lcd.createChar(19,stripe19);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\19"); 
  delay(1000);
  lcd.createChar(20,stripe20);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\20"); 
  delay(1000);

  lcd.createChar(21,stripe21);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\21"); 
  delay(1000);
  lcd.createChar(22,stripe22);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\22"); 
  delay(1000);
  lcd.createChar(23,stripe23);
  lcd.setCursor(0,0);              // Установка курсора в начало первой строки
  lcd.print("\23"); 
  delay(1000);
  
}

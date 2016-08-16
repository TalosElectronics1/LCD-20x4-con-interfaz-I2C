/*
  Tgo. Rafael lozano Rolon
  Talos Electronics 2016
  LCD 20 X 4 Con Luz De Fondo Azul Con Interfaz I2C
*/
#include <LiquidCrystal_I2C.h>//Libreria para LCD I2C
#include <Wire.h>//libreria requrida para usar SDA y SCL
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
//Declaracion de variables
int Contador = 0;
void setup()
{
  lcd.begin(20, 4);//Inicializar la LCD 20x4
  lcd.backlight();//Encender la luz de fondo
}

void loop()
{
  lcd.setCursor(5, 0); //Iniciar en la columa 5 fila 0
  lcd.print("LCD 20X4"); //Muestra el mensaje " "
  lcd.setCursor(1, 1); //Iniciar en la columa 1 fila 1
  lcd.print("Con Interfaz I2C"); //Muestra el mensaje " "
  lcd.setCursor(0 , 2); ////Iniciar en la columa 0 fila 2
  lcd.print("TalosElectronics.com"); //Muestra el mensaje " "
  lcd.setCursor(1, 3); ////Iniciar en la columa 1 fila 3
  lcd.print("Tiempo Activo=");//Muestra el mensaje " "
  lcd.print(Contador);//Mostrar la variable contador
  Contador++;//Aumentar la cuenta
  delay(1000);//Esperar 1 segundo
}

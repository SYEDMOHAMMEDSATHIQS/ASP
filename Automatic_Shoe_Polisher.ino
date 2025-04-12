#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int sw1 =  A0;
int sw2 =  A1;

int count1=120;
int count2=70;

int flag1=0;
int flag2=0;

void setup()
{
  Serial.begin(115200);
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  //lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("    Automatic   ");
  lcd.setCursor(0, 1);
  lcd.print("  shoe polisher ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("please select   ");
  lcd.setCursor(0, 1);
  lcd.print("the process.....");
  
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  
//  pinMode(D8,OUTPUT);
//  pinMode(D7,OUTPUT);
//  pinMode(D8,OUTPUT);
//  
//  digitalWrite(D7, LOW);
//  digitalWrite(D8, LOW);
  
}

void loop()
{

  int mode1 = digitalRead(sw1);
  int mode2 = digitalRead(sw2);
  

 if (mode1 ==  1 && mode2 ==  1 && flag1 == 0 && flag2 == 0)
 
 {  
  lcd.setCursor(0, 0);
  lcd.print("Please Select   ");
  lcd.setCursor(0, 1);
  lcd.print("the process.....");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("1:Clean & Polish");
  lcd.setCursor(0, 1);
  lcd.print("2: Gentle Clean  ");
  delay(1000); 
          }
          else 
          {}
    
 if (mode1 ==  0)
        {
          lcd.setCursor(0, 0);
          lcd.print("Mode 1 Selected ");
          lcd.setCursor(0, 1);
          lcd.print(" Clean & Polish ");
          delay(3000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Processing......");
          lcd.setCursor(0, 1);
          lcd.print("Remining:");
          flag1=1;
           }
           else
           {
            }

            if (flag1 ==  1)
           {
           count1--;
          lcd.setCursor(9, 1);
          lcd.print(count1);
          lcd.print("Sec");
          lcd.print("   ");
          delay(1000);
           }
           else
           {
            
            }
              if (count1 ==  0)
           {
          count1=120;
          lcd.setCursor(0, 0);
          lcd.print("   Process End  ");
          lcd.setCursor(0, 1);
          lcd.print("   Thank You    ");
          flag1=0;
          delay(3000);
           }
           else
           {
            
            }
            
 if (mode2 ==  0)
        {
          lcd.setCursor(0, 0);
          lcd.print("Mode 2 selected ");
          lcd.setCursor(0, 1);
          lcd.print("  Gentle Clean  ");
          delay(2000);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Processing......");
          lcd.setCursor(0, 1);
          lcd.print("Remining:");
          flag2=1;
           }
           else
           {
            }

            if (flag2 ==  1)
           {
           count2--;
          lcd.setCursor(9, 1);
          lcd.print(count2);
          lcd.print("Sec");
          lcd.print("   ");
          delay(1000);
           }
           else
           {
            
            }
              if (count2 ==  0)
           {
          count2=70;
          lcd.setCursor(0, 0);
          lcd.print("Process End     ");
          lcd.setCursor(0, 1);
          lcd.print("       Thank You");
          flag2=0;
          delay(3000);
           }
           else
           {
            
            }


}
//void getSendData()
//{
//  ;
//}
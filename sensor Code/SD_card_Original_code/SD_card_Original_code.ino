#include<SD.h>
#include<Wire.h>

int SHT_clockPin = 3;  // pin used for clock
int SHT_dataPin  = 2;  // pin used for data


int CS_pin= 10;
int pow_pin= 8;



void setup()
{
  Serial.begin(9600);
  Serial.println("initializing");
  pinMode(CS_pin, OUTPUT);
  
  
  pinMode(pow_pin, OUTPUT);
  digitalWrite(pow_pin, HIGH);
  
  if(!SD.begin(CS_pin))
  {
   Serial.println("Card Failure");
   return;
  }
  
  Serial.println("Card Ready");
}

void loop()
{
  
  String dataString = ("hello");////just change to the get temp fuction to print to SD

  File dataFile= SD.open("log.txt", FILE_WRITE);
  if(dataFile)
  {
    dataFile.println(dataString);
    dataFile.close();
    //prints what's beiing printed to the SD car.
    Serial.println(dataString);
    

    
    
  }
  else
  {
  Serial.println("Couldn't access file");
  }
  
  delay(5000);
}


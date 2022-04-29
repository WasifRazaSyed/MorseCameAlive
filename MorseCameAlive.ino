//This project was originally made by SyedWasif
//READ readme.txt for more info about this project.

int i=0, pin=2, bytes=0; //i for loop && bytes stores total number of bytes read from the buffer into buff(user-defined)
int *buff=new int[bytes]; //to store the data serial monitor sends
char ascii; //converts the ascii value of data in buff into characters
#include"morse.h" //BIG BOSS
void setup()
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

//this func read the data waiting in the buffer of arduino and stores into user created buff array.
void store()
{
  for(i=0; i>=0; i++)
  {
    if(Serial.available()>0)
    {
      delay(2);
      buff[i]=Serial.read();
      bytes=i;
    }
  }

}
void loop()
{
  if(Serial.available()>0)
  {
    store();
    //performs all the moorse actions until the end
    for(i=0; i<=bytes; i++)
    {
      ascii=buff[i];
      Serial.println(buff[i]); //helps to keep an eye on the value being passed to MOORSE UNCLE
      morse(ascii);
      //checks in advance if next character was a space and sets the alarm off acordingly
      if(buff[i+1]==32)
      {
        ascii=buff[i+1];
        morse(ascii);
        i++;
      }
      //checks if this is the end of character stream(enables quick recovery from the ongoing moorse message)
      else if(buff[i+1]==10)
      {
        digitalWrite(pin, LOW);
        i++;
      }
      //if stream is not finished and next character is not space.
      else
      {
        beep.let_per();
      }
    } 
  }  
}

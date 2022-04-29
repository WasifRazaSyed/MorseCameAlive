class rules{
  public:
  rules &dot();
  rules &dash();
  rules &period();
  rules &let_per();
  rules &wor_per();
}beep;

rules &rules::dot()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  return *this;
}
rules &rules::dash()
{
  digitalWrite(pin, HIGH);
  delay(3000);
  return *this;
}
rules &rules::period()
{
  digitalWrite(pin, LOW);
  delay(1000);
  return *this;
}
rules &rules::let_per()
{
  digitalWrite(pin, LOW);
  delay(3000);
  return *this;
}
rules &rules::wor_per()
{
  digitalWrite(pin, LOW);
  delay(7000);
  return *this;
}

void morse(char i)
{
  switch(i)
  {
    case 'A'|'a':
    {
      beep.dot().period().dash();
      
      break;
    }
    case 'B'|'b':
    {
      beep.dash().period().dot().period().dot().period().dot();
   
      break;
    }
    case 'C'|'c':
    {
      beep.dash().period().dot().period().dash().period().dot();
      
      break;
    }
    case 'D'|'d':
    {
      beep.dash().period().dot().period().dot();
      
      break;
    }
    case 'E'|'e':
    {
      beep.dot();
      
      break;
    }
    case 'F'|'f':
    {
      beep.dot().period().dot().period().dash().period().dot();
      
      break;
    }
    case 'G'|'g':
    {
      beep.dash().period().dash().period().dot();
      
      break;
    }
    case 'H'|'h':
    {
      beep.dot().period().dot().period().dot().period().dot();
      
      break;
    }
    case 'I'|'i':
    {
      beep.dot().period().dot();
      
      break;
    }
    case 'J'|'j':
    {
      beep.dot().period().dash().period().dash().period().dash();
      
      break;
    }
    case 'K'|'k':
    {
      beep.dash().period().dot().period().dash();
      
      break;
    }
    case 'L'|'l':
    {
      beep.dot().period().dash().period().dot().period().dot();
      
      break;
    }
    case 'M'|'m':
    {
      beep.dash().period().dash();
      
      break;
    }
    case 'N'|'n':
    {
      beep.dash().period().dot();
  
      break;
    }
    case 'O'|'o':
    {
      beep.dash().period().dash().period().dash();
      
      break;
    }
    case 'P'|'p':
    {
      beep.dot().period().dash().period().dash().period().dot();;
      
      break;
    }
    case 'Q'|'q':
    {
      beep.dash().period().dash().period().dot().period().dash();
      
      break;
    }
    case 'R'|'r':
    {
      beep.dot().period().dash().period().dot();
      
      break;
    }
    case 'S'|'s':
    {
      beep.dot().period().dot().period().dot();
      
      break;
    }
    case 'T'|'t':
    {
      beep.dash();
      
      break;
    }
    case 'U'|'u':
    {
      beep.dot().period().dot().period().dash();
      
      break;
    }
    case 'V'|'v':
    {
      beep.dot().period().dot().period().dot().period().dash();
      
      break;
    }
    case 'W'|'w':
    {
      beep.dot().period().dash().period().dash();
      
      break;
    }
    case 'X'|'x':
    {
      beep.dash().period().dot().period().dot().period().dash();
      
      break;
    }
    case 'Y'|'y':
    {
      beep.dash().period().dot().period().dash().period().dash();
      
      break;
    }
    case 'Z'|'z':
    {
      beep.dash().period().dash().period().dot().period().dot();
      
      break;
    }
    case ' ':
    {
      beep.wor_per();
    }
    default:
    {
      Serial.println("Out Of Bound Input");
      
    }
    
  }
}

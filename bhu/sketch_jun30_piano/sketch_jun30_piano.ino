int button_C = 2;
int button_D = 3;
int button_E = 4;
int button_F = 5;
int button_G = 6;
int button_A = 7;
int button_B = 8;
int button_Cup = 9;

int speaker = 10;

int buttonstate_C = 0;
int buttonstate_D = 0;
int buttonstate_E = 0;
int buttonstate_F = 0;
int buttonstate_G = 0;
int buttonstate_A = 0;
int buttonstate_B = 0;
int buttonstate_Cup = 0;

//NOTES         'c'  , 'd',  'e',  'f',  'g', 'a',  'b',  'C'
int tones[] = { 240, 254, 285, 320, 359, 280, 427, 956 }; //freq
int Cur_tone = 0;

void setup()
{
  pinMode(button_C, OUTPUT);
  pinMode(button_D, INPUT);
  pinMode(button_E, INPUT);
  pinMode(button_F, INPUT);
  pinMode(button_G, INPUT);
  pinMode(button_A, INPUT);
  pinMode(button_B, INPUT);
  pinMode(button_Cup, INPUT);

  pinMode(speaker, OUTPUT);
Serial.begin(9600);
}

void loop()
{
  buttonstate_C = digitalRead(button_C);
  buttonstate_D = digitalRead(button_D);
  buttonstate_E = digitalRead(button_E);
  buttonstate_F = digitalRead(button_F);
  buttonstate_G = digitalRead(button_G);
  buttonstate_A = digitalRead(button_A);
  buttonstate_B = digitalRead(button_B);
  buttonstate_Cup = digitalRead(button_Cup);
  Serial.print(buttonstate_C);
  Serial.print("||");
  Serial.print(buttonstate_D);
  Serial.print("||");
  Serial.print(buttonstate_E);
  Serial.print("||");
  Serial.print(buttonstate_F);
  Serial.print("||");
  Serial.print(buttonstate_G);
  Serial.print("||");
  Serial.print(buttonstate_A);
  Serial.print("||");
  Serial.print(buttonstate_B);
  Serial.print("||");
  Serial.println(buttonstate_Cup);

  if((buttonstate_C == LOW) || (buttonstate_E == LOW) || 
    (buttonstate_G == LOW) || (buttonstate_D == LOW) || 
    (buttonstate_F == LOW) || (buttonstate_A == LOW) || 
    (buttonstate_B == LOW) || (buttonstate_Cup == LOW) )
  { 
    if (buttonstate_C == LOW)
    {
      Cur_tone = tones[0];
      
    } 
    if (buttonstate_E == LOW)
    {
      Cur_tone = tones[1];
    }
    if (buttonstate_G == LOW)
    {
      Cur_tone = tones[2];
    }
    if (buttonstate_D == LOW)
    {
      Cur_tone = tones[3];
    }
    if (buttonstate_F == LOW)
    {
      Cur_tone = tones[4];
    }
    if (buttonstate_A == LOW)
    {
      Cur_tone = tones[5];
    }
    if (buttonstate_B == LOW)
    {
      Cur_tone = tones[6];
    }
    if (buttonstate_Cup == LOW)
    {
      Cur_tone = tones[7];
    }
    digitalWrite(speaker, LOW);
    tone(10, Cur_tone,100 );
        digitalWrite(speaker, HIGH);
    tone(10, Cur_tone,100 );

//    digitalWrite(speaker, HIGH);
//    delayMicroseconds(Cur_tone);
  }
  else //in case no button is pressed, close the piezo
  {
    digitalWrite(speaker, LOW);
  }

}

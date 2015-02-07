/*
  BrewBox - Arduino HERMS controller. 
  Aubrey Granner, Thrifty Geek Brewery
*/


int LEDpin = 13;
int incomingByte = 0;	// for incoming serial data

void setup()
{
	Serial.begin(9600)
	pinMode(LEDpin, OUTPUT)
}


void loop()
{
   // wait for button release before changing state
   while(ReadButtons() != 0) {}
 
   lcd.clear();
 
   Serial.println(opState);
 
   switch (opState)
   {
   case OFF:
      Off();
      break;
   case SETP:
      Tune_Sp();
      break;
    case RUN:
      Run();
      break;
   case TUNE_P:
      TuneP();
      break;
   case TUNE_I:
      TuneI();
      break;
   case TUNE_D:
      TuneD();
      break;
   }
}
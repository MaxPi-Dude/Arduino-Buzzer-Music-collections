
/*************************************************
 * Public Constants
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define SOL3  196
#define SOL_3 208
#define LA3  220
#define LA_3 233
#define SI3  247
#define DO4  262
#define DO_4 277
#define RE4  294
#define RE_4 311
#define MI4  330
#define FA4  349
#define FA_4 370
#define SOL4  392
#define SOL_4 415
#define LA4  440
#define LA_4 466
#define LA__4 455
#define SI4  494
#define DO5  523
#define DO_5 554
#define RE5  587
#define RE_5 622
#define MI5  659
#define FA5  698
#define FA_5 740
#define SOL5  784
#define SOL_5 831
#define LA5  880
#define LA_5 932
#define SI5  988
#define DO6  1047
#define DO_6 1109
#define RE6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978


const int buzzerPin = 7;
const int led1 = 7;
const int led2 = 8;

// notes in the melody:
int melody[] = {
  RE5, DO_5, SI4, FA_4, FA_4, FA_4, FA_4, FA_4, FA_4, SI4, SI4, SI4, SI4, LA4, SI4, SOL4,
  SOL4, SOL4, SOL4, SOL4, SOL4, SI4, SI4, SI4, SI4, DO_5, RE5, LA4, LA4, LA4, LA4, LA4,
  LA4, RE5, RE5, RE5, RE5, RE5, MI5, MI5, MI5, DO_5, DO_5, 0, RE5, DO_5, SI4,
  FA_4, FA_4, FA_4, FA_4, FA_4, FA_4, SI4, SI4, SI4, SI4, LA4, SI4, SOL4, 0, SOL4,
  SOL4, SOL4, SOL4, SOL4, SOL4, SI4, SI4, SI4, SI4, DO_5, RE5, LA4, LA4, LA4, LA4,
  LA4, LA4, LA4, RE5, RE5, RE5, RE5, RE5, MI5, MI5, DO_5, LA5, LA5, LA5, LA5,
  LA5, LA5, 0, LA5, LA5, LA5, LA5, FA_5, MI5, FA_5, MI5, FA_5, MI5, FA_5, MI5, FA_5,
  MI5, FA_5, SOL5, SOL5, RE5, 0, SOL5, SOL5, SOL5, SOL5, SOL5, SOL5, LA5, LA5, FA_5, 0,
  FA_5, FA_5, FA_5, FA_5, 0, LA5, SOL5, FA_5, MI5, MI5, MI5, MI5, MI5, MI5, MI5, MI5,
  MI5, DO_5, RE5, FA_5, MI5, FA_5, MI5, FA_5, MI5, FA_5, 0, MI5, 0, FA_5, MI5, FA_5,
  SOL5, SOL5, RE5, 0, SOL5, SOL5, SOL5, SOL5, SOL5, LA5, SOL5, FA_5, 0, FA_5, FA_5, FA_5,
  FA_5, FA_5, 0, LA5, LA5, SOL5, FA_5, MI5, 0, RE5, RE5, RE5, RE5, RE5, RE5, 
  RE5, SI4, SI4, SI4, 0, SI4, DO_5, RE5, RE5, DO_5, SI4, RE5, SI4, SI4,
  0, SI4, DO_5, RE5, RE5, DO_5, SI4, RE5, SI4, SI4, 0, SI4, DO_5, RE5,
  DO_5, DO_5, SI4, RE5, SI4, SI4, 0, SI4, RE5, RE5, RE5, 0, RE5,
  SI4, SI4, RE5, SI4, SI4, 0, MI5, MI5, MI5, RE5, MI5, MI5, MI5, MI5,
  MI5, FA_5, MI5, MI5, RE5, RE5, RE5, 0, MI5, MI5, MI5, 0, MI5, MI5,
  MI5, MI5, MI5, RE5, MI5, FA_5, MI5, RE5, RE5, RE5, LA4, RE5, RE5, RE5,
  LA4, RE5, RE5, RE5, RE5, RE5, RE5, RE5, RE5, LA4, MI5, RE5, 0, RE5,
  RE5, 0, RE5, RE5, 0, RE5, RE5, RE5, RE5, RE5, RE5, RE5,
  RE5, LA4, MI5, RE5, 0, RE5, RE5, RE5, RE5, FA_5, FA_5, FA_5, FA_5, LA5,
  LA5, RE5, RE5, RE5, RE5, 0, FA_5, FA_5, FA_5, FA_5, MI5, 0, //MI5, 0,
  MI5, 0, MI5, 0, RE5, 0, MI5
  
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
float noteDurations[] = {
  2, 2, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 4, 3,
  8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 4, 3, 8, 8, 8, 16,
  16, 8, 8, 16, 16, 4, 8, 8, 8, 2, 8, 4, 2, 2, 4,
  4, 8, 8, 8, 8, 8, 16, 16, 8, 4, 8, 4, 4, 8, 8,
  16, 16, 8, 8, 8, 8, 8, 8, 4, 8, 4, 3, 8, 16, 16,
  8, 8, 8, 8, 8, 16, 16, 8, 4, 4, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 3, 8, 8, 8, 8, 4, 8, 4, 8, 8,
  8, 4, 8, 4, 3, 3, 4, 8, 8, 8, 8, 8, 8, 4, 2, 3,
  8, 8, 8, 8, 8, 4, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8,
  8, 4, 4, 8, 8, 8, 8, 8, 8, 4, 8, 6, 16, 8, 6, 6,
  8, 4, 3, 4, 4, 8, 8, 8, 4, 8, 4, 2, 3, 8, 16, 16,
  8, 8, 8, 8, 8, 5, 6, 1.5, 8, 8, 8, 8, 16, 16, 8, 
  8, 8, 16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 16, 16,
  8, 8, 8, 16, 16, 8, 8, 8, 16, 16, 8, 8, 8, 8,
  16, 16, 8, 9, 16, 16, 8, 8, 16, 16, 16, 16, 8,
  16, 16, 8, 16, 16, 4, 8, 8, 8, 8, 7, 8, 8, 8,
  8, 8, 16, 16, 8, 4, 8, 8, 8, 8, 16, 16, 8, 9,
  16, 16, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8,
  8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 16,
  16, 16, 16, 16, 16, 16, 17, 8, 8, 8, 8, 8,
  8, 8, 4, 8, 8, 8, 8, 8, 8, 17, 8, 8, 8, 8,
  8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 9, 8, //8, 16,
  8, 16, 8, 16, 8, 16, 4
  
  
};

void setup() {
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){

  int cont=0; //This variable allow the the leds to altrnate
  
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 333; thisNote++) {

    /* to calculate the note duration, take one second
       divided by the note type.
       e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc. */
    float duration = 1000 / noteDurations[thisNote];
    
    if(melody[thisNote]!=0){
      if(cont%2==0){
        digitalWrite(led1,HIGH);
      }
      else{
        digitalWrite(led2,HIGH);
      }
    }
    tone(buzzerPin, melody[thisNote], duration);
    cont++;
    
    // to distinguish the notes,I set a minimum time between them.
    float pauseBetweenNotes = duration * 1.40;
    delay(pauseBetweenNotes);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    noTone(buzzerPin);
    
  }
  delay(700);
}

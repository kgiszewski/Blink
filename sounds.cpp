//a class to simply play the Super Mario 1-up sound
#include "sounds.h"
#include "pitches.h"
#include "Arduino.h"

void SoundPlayer::_1up()
{
  // Play 1-up sound
  tone(8,NOTE_E6,125);
  delay(130);
  tone(8,NOTE_G6,125);
  delay(130);
  tone(8,NOTE_E7,125);
  delay(130);
  tone(8,NOTE_C7,125);
  delay(130);
  tone(8,NOTE_D7,125);
  delay(130);
  tone(8,NOTE_G7,125);
  delay(125);
  noTone(8);
}


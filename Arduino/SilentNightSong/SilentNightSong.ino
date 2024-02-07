
int melody[] = {
  NOTE_E5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_F5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_D5, NOTE_C5, NOTE_C5
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4
};

void playTone(int tone, int duration) {
  tone(8, tone, duration);
  delay(duration + 20); // Add a small delay to separate the tones
}


void loop() {
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int duration = 1000 / noteDurations[i];
    playTone(melody[i], duration);
  }
}
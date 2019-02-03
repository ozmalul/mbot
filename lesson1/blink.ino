void setup() {
  pinMode(13, OUTPUT);//טלפל ןיפ תא לחתאמ 13
}
void loop() {
  digitalWrite(13, HIGH);   // הוובג ןיפב טלווה תא םירמ.ןיפה תא קילדמ
  delay(1000);              // הינש הכחמ
  digitalWrite(13, LOW);    // ךומנ ןיפב טלווה תא דירומ, ןיפה תא הבכמ
  delay(1000);              // הינש הכחמ
}

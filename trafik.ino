int kirmizi=10; 
int sari=9;
int yesil=8;
void setup () {
pinMode(kirmizi,OUTPUT);
pinMode(sari,OUTPUT);
pinMode(Yesil,OUTPUT);
}

void loop() {
digitalWrite(kirmizi,HIGH);
delay(4000); 
digitalWrite(sari,HIGH);
delay(1000); 
digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW); 
digitalWrite(yesil,HIGH); 
delay(4000) ; 
digitalWrite(yesil,LOW);
}

String voice;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    delay(3);
    char c = Serial.read();
    voice+=c;
  }
  if(voice.length()>0){
    Serial.println(voice);
    if(voice == "turn on kitchen fan")
    {digitalWrite(3,HIGH);} 
    else if(voice == "turn off kitchen fan")
    {digitalWrite(3,LOW);} 
    if(voice == "turn on balcony light")
    {digitalWrite(4,HIGH);} 
    else if(voice == "turn off balcony light")
    {digitalWrite(4,LOW);} 
    if(voice == "turn on room light")
    {digitalWrite(5,HIGH);} 
    else if(voice == "turn off room light")
    {digitalWrite(5,LOW);} 
    if(voice == "turn on room fan")
    {digitalWrite(6,HIGH);} 
    if(voice == "turn off room fan")
    {digitalWrite(6,LOW);} 
    if(voice == "turn on everything")
    {digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
     digitalWrite(6,HIGH);} 
    if(voice == "turn off everything")
    {digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
     digitalWrite(6,LOW);} 
    voice = "";
   }
}

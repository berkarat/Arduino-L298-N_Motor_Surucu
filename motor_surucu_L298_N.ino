int d1 = 16;    int d2 = 17;  
int val1 = 0;   int val2 = 0;   // durdurma sensörleri değerleri


#define Motor_enable  11 
#define Motor_ileri 12 
void setup() {
  pinMode(Motor_enable, OUTPUT); 
  pinMode(Motor_ileri, OUTPUT);  
  Serial.begin(9600);  
}

void loop() {

basla_motor();
}
void basla_motor(){
 digitalWrite(Motor_ileri, HIGH);
 analogWrite(Motor_enable, 250);
 }
 void orta_hiz(){
 digitalWrite(Motor_ileri, HIGH);
 analogWrite(Motor_enable, 150);
 }

 void dur_motor(){
 digitalWrite(Motor_ileri, LOW);
 analogWrite(Motor_enable, 0);}
 
 

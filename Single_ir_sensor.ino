#define out_ir 12 //output pin of ir sensor module
#define vcc_ir 8 //vcc pin of ir sensor module

void setup() {
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
  digitalWrite(out_ir, HIGH); 
  Serial.begin(9600);
}

void loop() {
  int sensor_one = 0; //variable which will store value of our sensor reading
  digitalWrite(vcc_ir, HIGH);
  sensor_one = digitalRead(out_ir);
  if(sensor_one == 0){      //sensor reading 0 signifies dark/black line
    Serial.println("Black");
  }
  else{
    Serial.println("White");
  }

}

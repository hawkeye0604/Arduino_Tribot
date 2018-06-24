#define out_ir_2 13 // ir module 2 placed on right
#define out_ir 12 //output pin of ir sensor module 1 ( module placed on left)
#define vcc_ir_2 7
#define vcc_ir 8 //vcc pin of ir sensor module 1 

void setup() {
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(out_ir, HIGH);
  digitalWrite(out_ir_2, HIGH); 
  Serial.begin(9600);
}

void loop() {
  int sensor_one = 0; //variable which will store value of our sensor reading
  int sensor_two = 0;
  digitalWrite(vcc_ir, HIGH);
  digitalWrite(vcc_ir_2, HIGH);
  sensor_one = digitalRead(out_ir);
  sensor_two = digitalRead(out_ir_2);
  if(sensor_one == 1 && sensor_two == 1){      //sensor reading 0 signifies dark/black line
    Serial.println("straight");
  }
  else if(sensor_one == 0 && sensor_two == 1){
    Serial.println("turn left");
  }
  else if(sensor_one == 1 && sensor_two == 0){
    Serial.println("turn right");
  }
  else if(sensor_one == 0 && sensor_two == 0){
    Serial.println("reverse");
  }
}


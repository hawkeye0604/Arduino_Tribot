//defining motor pins
#define right_front 2
#define right_back 3
#define left_front 4
#define left_back 5

void setup(){
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  
}
//function to move forward with both motors having one pin high
void move_forward(){
  digitalWrite (right_front, HIGH);
  digitalWrite (left_front, HIGH);
  digitalWrite (right_back, LOW);
  digitalWrite (left_back, LOW);
}
//similar to function above with pin order reversed
void move_reverse(){
  digitalWrite (right_front, LOW);
  digitalWrite (left_front, LOW);
  digitalWrite (right_back, HIGH);
  digitalWrite (left_back, HIGH);
}
//stopping both motors by keeping all the pins low
void motor_stop(){
  digitalWrite (right_front, LOW);
  digitalWrite (left_front, LOW);
  digitalWrite (right_back, LOW);
  digitalWrite (left_back, LOW);
}
//keep left motor on and right motor off to make a right turn
void turn_right(){
  digitalWrite (right_front, LOW);
  digitalWrite (left_front, HIGH);
  digitalWrite (right_back, LOW);
  digitalWrite (left_back, LOW);
}
//keep right motor on and left motor off to make a left turn
void turn_left(){
  digitalWrite (right_front, HIGH);
  digitalWrite (left_front, LOW);
  digitalWrite (right_back, LOW);
  digitalWrite (left_back, LOW);
}

void loop(){
  turn_right();//calling each function once to confirm pin configuration and practical implementation
  delay(5000);
  motor_stop();
  delay(5000);
  turn_left();
  delay(5000);
  move_forward();
  delay(5000);
  move_reverse();
  delay(5000);
}


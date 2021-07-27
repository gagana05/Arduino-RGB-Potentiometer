//Varying colours using RGB and potentiometer 

int Red_In=A2; 
int Blue_In=A1; 
int Green_In=A0; 
int Red_Out=11; 
int Blue_Out=10; 
int Green_Out=9;

void setup() 
{ 
  
 pinMode(Red_In,INPUT); 
 pinMode(Blue_In,INPUT); 
 pinMode(Green_In,INPUT); 
 pinMode(Red_Out, OUTPUT); 
 pinMode(Blue_Out,OUTPUT); 
 pinMode(Green_Out,OUTPUT); 
  
} 
void loop() 
{ 
int pot1 = analogRead(Red_In); //potentiometer 1  int pot2 = analogRead(Blue_In); //potentiometer 2 int pot3 = analogRead(Green_In); //potentiometer 3   
//Converting using mapping function 
int RGB_val1 = map(pot3,0,1023,0,255); 
int RGB_val2 = map(pot2,0,1023,0,255); 
int RGB_val3 = map(pot1,0,1023,0,255); 
//Providing output on RGB 
analogWrite(Red_Out,RGB_val1); 
analogWrite(Blue_Out,RGB_val2); 
analogWrite(Green_Out,RGB_val3); 
} 

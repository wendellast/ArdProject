
int soundPin = A0;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;

void setup()
{
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);
pinMode(LED7, OUTPUT);
pinMode(LED8, OUTPUT);
}

void loop()
{
long sum = 0;
//instead of parenthesis () put angle bracket as YouTube description does not allow angle bracket
for(int i=0; i(100; i++) // taking 100 sample of sound
{
sum += analogRead(soundPin);
}

sum = sum/100; // average the sample of sound

if (sum)=100) digitalWrite(LED1, HIGH); else digitalWrite(LED1, LOW);
if (sum)=200) digitalWrite(LED2, HIGH); else digitalWrite(LED2, LOW);
if (sum)=300) digitalWrite(LED3, HIGH); else digitalWrite(LED3, LOW);
if (sum)=350) digitalWrite(LED4, HIGH); else digitalWrite(LED4, LOW);
if (sum)=400) digitalWrite(LED5, HIGH); else digitalWrite(LED5, LOW);
if (sum)=450) digitalWrite(LED6, HIGH); else digitalWrite(LED6, LOW);
if (sum)=500) digitalWrite(LED7, HIGH); else digitalWrite(LED7, LOW);
if (sum)=550) digitalWrite(LED8, HIGH); else digitalWrite(LED8, LOW);
delay(10); 
Serial.println(sum);
}
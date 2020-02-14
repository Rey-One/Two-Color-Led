/* 
 *  Name - Rohit Maurya
 *  Date - 14 Feb 2020
 *  dis - 2 color led 
 */
#define Red D1
#define Green D2

void setup() {
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
}

void loop() {
 digitalWrite(Red,HIGH);
 delay(1000);
 digitalWrite(Red,LOW);

 digitalWrite(Green,HIGH);
 delay(1000);
 digitalWrite(Red,LOW);

}

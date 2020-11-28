int input_pin = 7;
int led_pin = 9;

void setup()
{
    pinMode( input_pin , INPUT_PULLUP);
    pinMode( led_pin , OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    int i = digitalRead( input_pin );
    digitalWrite( led_pin);
    
    Serial.println(i);
    delay(250);
}

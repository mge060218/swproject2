const int LED_PIN = 7;
const int ON_STATE  = LOW;
const int OFF_STATE = HIGH;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, OFF_STATE);
}

void loop() {
    digitalWrite(LED_PIN, ON_STATE);
    delay(1000);

    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, ON_STATE);
        delay(100);
        digitalWrite(LED_PIN, OFF_STATE);
        delay(100);
    }

    digitalWrite(LED_PIN, OFF_STATE);
    while (1) { /* 종료 대기(무한 루프) */ }
}

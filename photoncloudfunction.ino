// Identify our pins to control the LEDs on

int led_red = D0;
int led_green = D1;
int led_blue = D2;

// Takes in string of red, green or blue and toggles that LED

int led_toggle (String led_colour) {
    if (led_colour == "red") {
        digitalWrite(led_red, !digitalRead(led_red));
    }

    if (led_colour == "green") {
        digitalWrite(led_blue, !digitalRead(led_blue));
    }

    if (led_colour == "blue") {
        digitalWrite(led_green, !digitalRead(led_green));
    }

    return 0;
}

void setup() {
    // Configure pins as output
    pinMode(led_red, OUTPUT);
    pinMode(led_blue, OUTPUT);
    pinMode(led_green, OUTPUT);

    // Create our function for the Photon to be accessible via the particle function
    Particle.function("ledtoggle", led_toggle);
}

void loop() {
}

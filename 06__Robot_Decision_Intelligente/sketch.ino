
// DEVOIR N°6 : ROBOT A DECISION INTELLIGENTE
// Systeme intelligent de detection d'obstacles
// Microcontroleur : ESP32

// Broches du capteur ultrasonique
#define TRIG_PIN 5
#define ECHO_PIN 18

// Broches des LED
#define LED_ROUGE 25
#define LED_VERTE 26

// Broche du buzzer
#define BUZZER 27

// Seuil de detection en centimetres
const float SEUIL = 20.0;

void setup() {

  Serial.begin(115200);

  // Configuration du capteur
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Configuration des LED
  pinMode(LED_ROUGE, OUTPUT);
  pinMode(LED_VERTE, OUTPUT);

  // Configuration du buzzer
  pinMode(BUZZER, OUTPUT);

  digitalWrite(TRIG_PIN, LOW);
  digitalWrite(LED_ROUGE, LOW);
  digitalWrite(LED_VERTE, LOW);
  noTone(BUZZER);

  Serial.println("SYSTEME INTELLIGENT ACTIVE");
  Serial.println("Detection automatique des obstacles");
}

void loop() {

  // Envoyer une impulsion ultrasonique
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Mesurer le temps de retour de l'onde
  long duree = pulseIn(ECHO_PIN, HIGH, 30000);

  // Verifier si une mesure a ete recue
  if (duree == 0) {

    digitalWrite(LED_ROUGE, LOW);
    digitalWrite(LED_VERTE, LOW);
    noTone(BUZZER);

    Serial.println("Aucune mesure disponible");

  } else {

    // Calculer la distance en centimetres
    float distance = duree * 0.0343 / 2.0;

    Serial.print("Distance mesuree : ");
    Serial.print(distance);
    Serial.println(" cm");

    // Prendre une decision automatique
    if (distance <= SEUIL) {

      digitalWrite(LED_ROUGE, HIGH);
      digitalWrite(LED_VERTE, LOW);

      tone(BUZZER, 1000);

      Serial.println("ALERTE : OBSTACLE DETECTE !");

    } else {

      digitalWrite(LED_ROUGE, LOW);
      digitalWrite(LED_VERTE, HIGH);

      noTone(BUZZER);

      Serial.println("PASSAGE LIBRE");

    }
  }

  delay(500);
}

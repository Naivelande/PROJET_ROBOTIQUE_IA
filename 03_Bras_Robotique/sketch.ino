#include <Servo.h>

Servo base;
Servo epaule;
Servo coude;

void setup() {

  base.attach(9);
  epaule.attach(10);
  coude.attach(11);

  // Position initiale
  base.write(90);
  epaule.write(90);
  coude.write(90);

  delay(2000);
}

void loop() {

  // ETAPE 1 : Rotation de la base
  base.write(0);
  delay(2000);

  // ETAPE 2 : Mouvement de l'epaule
  epaule.write(45);
  delay(2000);

  // ETAPE 3 : Mouvement du coude
  coude.write(135);
  delay(2000);

  // ETAPE 4 : Retour du coude
  coude.write(90);
  delay(1000);

  // ETAPE 5 : Retour de l'epaule
  epaule.write(90);
  delay(1000);

  // ETAPE 6 : Retour de la base
  base.write(90);
  delay(2000);
}
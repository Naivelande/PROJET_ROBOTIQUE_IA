# Devoir n°6 — Robot à décision intelligente

## 1. Objectif du projet

Ce projet consiste à concevoir et simuler un système
capable de détecter automatiquement la présence d'un
obstacle et de réagir en fonction de sa distance.

Le système utilise un microcontrôleur ESP32 et un
capteur ultrasonique HC-SR04.

## 2. Composants et outils utilisés

- ESP32
- Capteur ultrasonique HC-SR04
- LED rouge
- LED verte
- Deux résistances de 220 ohms
- Buzzer
- Fils de connexion
- Plateforme Wokwi
- Langage C++ (Arduino)

## 3. Fonctionnement du système

Le capteur ultrasonique HC-SR04 mesure continuellement
la distance entre le système et un obstacle.

Un seuil de détection de 20 cm a été défini.

Lorsque la distance mesurée est inférieure ou égale
à 20 cm :

- La LED rouge s'allume.
- La LED verte s'éteint.
- Le buzzer émet une alarme.
- Le moniteur série affiche un message d'alerte.

Lorsque la distance est supérieure à 20 cm :

- La LED verte s'allume.
- La LED rouge s'éteint.
- Le buzzer reste silencieux.
- Le moniteur série affiche "PASSAGE LIBRE".

## 4. Résultats obtenus

Le système a été testé sur la plateforme Wokwi.

Test 1 : obstacle à 10 cm

Le capteur a mesuré une distance d'environ 10,05 cm.
La LED rouge s'est allumée et le buzzer a émis une
alarme. Le moniteur série a affiché :

"ALERTE : OBSTACLE DETECTE !"

Test 2 : obstacle à 30 cm

Le capteur a mesuré une distance d'environ 30,27 cm.
La LED verte s'est allumée et le moniteur série
a affiché :

"PASSAGE LIBRE"

Ces résultats montrent que le système réagit
automatiquement selon le seuil programmé.

## 5. Conclusion

Cette simulation a permis de mettre en pratique
l'utilisation d'un capteur ultrasonique avec un ESP32.

Le système est capable de mesurer une distance,
de comparer cette mesure à un seuil prédéfini
et de déclencher automatiquement une action adaptée.

Il constitue un exemple simple de prise de décision
automatique dans un système robotique.

## 6. Lien de la simulation Wokwi

Le projet peut être consulté et testé directement
sur la plateforme Wokwi.

[Lien vers la simulation du projet] (https://wokwi.com/projects/477855864644526081)
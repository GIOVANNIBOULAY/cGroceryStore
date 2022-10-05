#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};

struct RaceCar {
  char* driverName;
  char* raceCarColor;
  int totalLapTime;
};

// Print functions
void printIntro() {
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n\n");
}

void printCountDown() {
  printf("Racers ready! In...\n5\n4\n3\n2\n1\nRace!\n");
}

void printFirstPlaceAfterLap(struct Race race) {
  printf("After lap number %d\nFirst Place Is: %s in the %s race car!\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race) {
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}
// Logic functions
int calculateTimeToCompleteLap() {
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;
  return (speed + acceleration + nerves);
} // calculates random lap time

void updateRaceCar(struct RaceCar* raceCar) {
  raceCar->totalLapTime += calculateTimeToCompleteLap();
} // adds lap time to total lap time

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2) {
  if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  }
  else {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  } 
} // updates 1st place driver details based on who is winning

void startRace(struct RaceCar* raceCar1Pointer, struct RaceCar* raceCar2Pointer) {
  struct Race race = {5, 0, "", ""};
  for (int i = 0; i < race.numberOfLaps; i++) {
    race.currentLap++;
    updateRaceCar(raceCar1Pointer);
    updateRaceCar(raceCar2Pointer);
    updateFirstPlace(&race, raceCar1Pointer, raceCar2Pointer);
    printFirstPlaceAfterLap(race);
  }

  printCongratulation(race);
}

int main() {
	srand(time(0));

  struct RaceCar racer1 = {"Melon", "Sky Blue", 0};
  struct RaceCar racer2 = {"Felon", "Fire Red", 0};

  printIntro();
  printCountDown();
  startRace(&racer1, &racer2);
};

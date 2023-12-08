void setup() {
  // Serial communication setup
  Serial.begin(9600);

  // Arrays to store depth and speeds
  int depths[] = { 90, 85, 88, 83, 82, 91, 91, 100, 97 };
  int speeds[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  // Variables to count changes in depth
  int increasedDepth = 0;
  int decreasedDepth = 0;
  int unchangedDepth = 0;

  // Loop to analyze depth changes and calculate speeds
  for (int i = 1; i < 9; i++) {
    int depthChange = depths[i] - depths[i - 1];

    if (depthChange > 0) {
      increasedDepth++;
      speeds[i] = depthChange;  // Positive speed for depth increase
    } else if (depthChange < 0) {
      decreasedDepth++;
      speeds[i] = depthChange;  // Negative speed for depth decrease
    } else {
      unchangedDepth++;
      speeds[i] = 0;  // Speed is zero if depth remains unchanged
    }
  }

  // Print the counts of depth changes
  Serial.println("Aumento de profundidad: " + String(increasedDepth));
  Serial.println("Descenso de profundidad: " + String(decreasedDepth));
  Serial.println("Profundidad sin cambios: " + String(unchangedDepth));

  // Print speeds
  Serial.println("Velocidades:");
  for (int i = 0; i < 9; i++) {
    Serial.print(speeds[i]);
    Serial.print(" ");
  }

  // Calculate and print minimum, maximum, and average speeds
  int minSpeed = speeds[0];
  int maxSpeed = speeds[0];
  int sumSpeeds = speeds[0];

  for (int i = 1; i < 9; i++) {
    if (speeds[i] < minSpeed) {
      minSpeed = speeds[i];
    }
    if (speeds[i] > maxSpeed) {
      maxSpeed = speeds[i];
    }
    sumSpeeds += speeds[i];
  }

  int averageSpeed = sumSpeeds / 9;

  Serial.println("\nVelocidad mínima: " + String(minSpeed));
  Serial.println("Velocidad máxima: " + String(maxSpeed));
  Serial.println("Velocidad media: " + String(averageSpeed));
}

void loop() {
}
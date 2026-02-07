#include <Arduino.h>

// Định nghĩa các chân kết nối dựa trên diagram.json
const int RED_LED = 25;    // led3 kết nối esp:25
const int YELLOW_LED = 33; // led1 kết nối esp:33
const int GREEN_LED = 32;  // led2 kết nối esp:32

void setup() {
  // Cấu hình các chân là đầu ra (OUTPUT)
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  // Khởi tạo Serial để theo dõi
  Serial.begin(115200);
  Serial.println("Traffic Light Simulation Starting...");
}

void loop() {
  // 1. Đèn Đỏ sáng trong 5 giây
  Serial.println("RED ON");
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(5000);

  // 2. Đèn Xanh sáng trong 7 giây
  Serial.println("GREEN ON");
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(7000);

  // 3. Đèn Vàng sáng trong 2 giây
  Serial.println("YELLOW ON");
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(2000);
}
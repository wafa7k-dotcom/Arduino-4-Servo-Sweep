#include <Servo.h>

// إنشاء أربعة كائنات للتحكم بمحركات السيرفو
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// منافذ الإشارة الخاصة بالمحركات
const int servoPin1 = 3;
const int servoPin2 = 5;
const int servoPin3 = 6;
const int servoPin4 = 9;

// مدة حركة Sweep بالمللي ثانية
const unsigned long sweepDuration = 2000;

void moveAllServos(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}

void setup() {
  // ربط كل محرك بالمنفذ الخاص به
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);

  unsigned long startTime = millis();

  // تشغيل حركة Sweep لمدة ثانيتين فقط
  while (millis() - startTime < sweepDuration) {
    unsigned long elapsedTime = millis() - startTime;

    /*
      دورة Sweep كاملة مدتها ثانية واحدة:
      أول 500 ms: من 0 إلى 180 درجة
      ثاني 500 ms: من 180 إلى 0 درجة
    */

    int angle;

    if ((elapsedTime % 1000) < 500) {
      angle = map(elapsedTime % 500, 0, 499, 0, 180);
    } else {
      angle = map(elapsedTime % 500, 0, 499, 180, 0);
    }

    moveAllServos(angle);
    delay(10);
  }

  // بعد انتهاء الثانيتين تثبت جميع المحركات عند 90 درجة
  moveAllServos(90);
}

void loop() {
  // لا نحتاج إلى تكرار البرنامج
  // المحركات تبقى ثابتة عند زاوية 90 درجة
}
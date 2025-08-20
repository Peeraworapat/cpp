#include <iostream>    // ใช้สำหรับรับและแสดงผลทางหน้าจอ
using namespace std;   // ใช้ namespace เพื่อไม่ต้องพิมพ์ std:: ทุกครั้ง

int main() {
    float weight, height_cm, height_m, bmi;

    // รับค่าน้ำหนักจากผู้ใช้ (กิโลกรัม)
    cout << "กรุณากรอกน้ำหนักของคุณ (กิโลกรัม): ";
    cin >> weight;

    // รับค่าส่วนสูงจากผู้ใช้ (เซนติเมตร)
    cout << "กรุณากรอกส่วนสูงของคุณ (เซนติเมตร): ";
    cin >> height_cm;
    
// ตรวจสอบว่าผู้ใช้กรอกข้อมูลเป็นตัวเลขหรือไม่
    if (cin.fail()) {
        cout << "คุณกรอกข้อมูลผิดพลาด กรุณาใส่ตัวเลขเท่านั้น" << endl;
        return 1;  // จบโปรแกรมด้วยสถานะผิดพลาด
    }
    // แปลงหน่วยเซนติเมตรเป็นเมตร
    height_m = height_cm / 100;
     
    // คำนวณค่า BMI
    bmi = weight / (height_m * height_m);

    // แสดงผลค่า BMI
    cout << "ค่า BMI ของคุณคือ: " << bmi << endl;

    // แปลผล BMI เป็นภาษาไทย
    if (bmi < 18.5) {
        cout << "คุณมีน้ำหนักน้อยเกินไป" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "คุณมีน้ำหนักปกติ" << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "คุณมีน้ำหนักเกิน" << endl;
    } else {
        cout << "คุณเป็นโรคอ้วน" << endl;
    }
    
    return 0;
}

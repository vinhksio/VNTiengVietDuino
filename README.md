# VNTiengVietDuino

A Vietnamese programming support library for Arduino.

## Giới thiệu

VNTiengVietDuino là thư viện giúp người mới học Arduino dễ tiếp cận hơn bằng cách cung cấp các lệnh Arduino bằng tiếng Việt.

## Tính năng

- Hỗ trợ các lệnh Arduino bằng tiếng Việt.
- Dễ học, dễ nhớ.
- Tương thích với Arduino IDE.
- Không thay đổi Arduino Core.

## Cài đặt

### Arduino IDE

- Download thư viện.
- Chọn **Sketch → Include Library → Add .ZIP Library...**
- Chọn file ZIP của thư viện.

Hoặc cài từ **Library Manager** (sau khi được Arduino chấp nhận).

## Ví dụ

```cpp
#include <VNTiengVietDuino.h>

ham batDau() {
    Chan(13, ra);
}

ham vongLap() {
    dat(13, bat);
    choMoi(1000);

    dat(13, tat);
    choMoi(1000);
## nghĩa
choMoi = delay (chờ mỗi)

chan = pinMode (chân)
dat = digitalWrite (đặt)
doc = digitalRead (đọc)

doc_analog = analogRead (đọc analog)
xuat_analog = analogWrite (xuất analog)

bat = HIGH (bật)
tat = LOW (tắt)

vao = INPUT (vào)
ra = OUTPUT (ra)

neu = if (nếu)
khac = else (khác)

inRa = Serial.print (in ra)
inDong = Serial.printIn (in dòng)

trongKhi = while (trong khi)
traVe = return (trả về)

dung = break (dừng)
tiepTuc = continue (tiếp tục)

lap = for (lặp)

ham = void (hàm)
batDau = setup (bắt đầu)
vongLap = loop (vòng lặp)

## Ví dụ có sẵn

Sau khi cài thư viện:

File → Examples → VNTiengVietDuino → NhamDen

## Giấy phép

MIT License

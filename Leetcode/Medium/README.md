# Medium Problems - Code mẫu và giải thích

## [2. Add Two Numbers](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/2_AddTwoNumbers.cpp)
**Tóm tắt đề:**
Cho 2 *linked list* chứa các chữ số của 1 số theo thứ tự ngược lại
(VD: `2->4->3` biểu diễn số 342). Hãy tìm *linked list* biểu diễn tổng của 
2 số trên

**VD minh họa:**
List_a: `2->4->3`
List_b: `5->6->4`
a = 342 và b = 465
a+b = 807
Vậy *list* cần tìm là `7->0->8`

**Hướng dẫn giải:**
- Từ List_a, tách từng chữ số rồi ghép lại được số *a*, tương tự với 
List_b để có được số *b*
- Tính *c = a + b* (sử dụng string để cộng số lớn)
- Tạo *ListNode* `ans` với `val` = c[0] và `next` trỏ đến *NULL* 
(*ListNode* cuối cùng của *list* cần tìm)
- Duyệt lần lượt từ c[1] đến cuối xâu `c`
  - Tạo *ListNode* `tmp` để lưu `ans`
  - `ans` sẽ bằng 1 *ListNode* mới với `val` = c[i] và `next` trỏ đến 
`tmp`
- Kết thúc duyệt, `ans` chính là head của *list* cần tìm

## [7. Reverse Integer](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/7_ReverseInteger.cpp)
### **Tóm tắt đề:**
#### **Tìm số đảo ngược của số nguyên kiểu integer**
- Cho một số nguyên kiểu `int`: `x`, tìm số đảo ngược của `x`
- Nếu quá giới hạn kiểu `int`, trả về `0`

### **Ví dụ:**

- `1412` đảo ngược là `2141`
- `-69` đảo ngược là `-96`
- `0012` đảo ngược là `21`
- `8281972920121` quá `INT_MAX`, trả về `0`
  
### **Hướng dẫn giải:**
- Tạo 1 biến lưu giá trị số đảo ngược `n`, khởi tạo giá trị = `0`
- Sử dụng vòng lặp, `n` sẽ tăng gấp 10 lần và cộng với phần dư
- Do số cần đảo ngược ở dạng `int` nên khi chia đến phần nguyên là `0`, dừng vòng lặp.
- Sau vòng lặp ta sẽ cos `n` là số đảo ngược của số ban đầu 
- Nếu quá giới hạn kiểu `int`, trả về `0`

## [12.Integer to Roman](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Medium/Code/12_IntegertoRoman.cpp)
**Tóm tắt đề:**
- Nhập một số nguyên bất kỳ rồi chuyển thành số La Mã
- Chữ số La Mã được thể hiện bằng bảy ký hiệu khác nhau: I, V, X, L, C, D và M.

**Ví dụ:**
- 2 được viết là II bằng số La Mã, chỉ là hai chữ cái được thêm vào với nhau. 12 được viết là XII, đơn giản là X + II. Con số 27 được viết là XXVII, là XX + V + II.
- Chữ số La mã thường được viết từ lớn nhất đến nhỏ nhất từ ​​trái sang phải. Tuy nhiên, chữ số cho bốn không phải là IIII. Thay vào đó, số bốn được viết là IV. Bởi vì cái đứng trước năm, chúng ta trừ nó ra làm bốn. 

**Hướng dẫn giải:**

1.Quy tắc viết số la mã: 
    (1) Phải cộng trái trừ (IV 4, IX 9, XL 40, XC 90) 
    (2) I X C M không được lặp lại quá 3lần
    (3) V L D không được lặp lại trong 1 dãy số
    (4) I trước chính nó hoặc X và V; X trước L và C; C trước D và M; M đầu dãy số
    (5) Là tổng các kí tự tương ứng
2.Làm 
    - while nếu điều kiện còn đúng thực hiện vòng lặp-
    (2) => 3000>n>1000, 300>n>100, 30>n>10 có thể biểu diễn bằng 3 kí tự liên tiếp giống nhau 
        => dùng while cho 3 trường hợp (n>1000,>100,>10)    
    - if chỉ thực hiện nếu điều kiện đúng-
    (3)(4) => số như 900, 500, 400, 90, 50, 40, 9,5,4 dùng if vì có cách viết không được lăp lại
    s kiểu string để lưu kí tự, s+= thêm vào bên phải xâu s 1 kí tự nếu thỏa mãn điều kiện
    (5) => n-= là phép trừ n cho mỗi giá trị nếu điều kiện đúng 
        
    vd: n=234 (n>100) nên n-=100; s+='C';
        => n=134 (n>100); s=C nên n-=100; s+='C'; 
        => n=34; s=CC tiếp tục xét điều kiện đến khi n=0.  

## [222. Count Complete Tree Node](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/222_CountCompleteTreeNodes.cpp)
**Tóm tắt đề:**
Cho một con trỏ kiểu TreeNode là root của một
cây nhị phân, hãy đếm xem cây nhị phân này có bao nhiêu node.

**Hướng dẫn giải:**
- Xác định được rằng:
  - Số node tính từ 1 `node X` bằng 1 (*bản thân* `node X`) và số
node tính từ nhánh `left` và `right` của X.
  - Nếu 1 node là `NULL` thì số node tính từ nó bằng 0
- Sử dụng công thức trên, gọi đệ quy bắt đầu từ node `root`
- Kết thúc đệ quy, hàm sẽ trả về số node tính từ `root` (*tổng số
node của cây nhị phân*).



 
